#include <iostream>
#include <vector> // perform tasks on vectors
#include <memory> // facilities for dynamic memory management
#include <random> // generate random numbers
#include <algorithm> // modify ranges of data from data structures
#include <string> // perform tasks on strings
#include <unordered_map> // provides an associative container that stores elements in key-value pairs

// Battlefield Interface
class IBattlefield
{
    public:
        virtual ~IBattlefield() = default; // virtual destructor
        
        // The following methods are declared as pure
        // virtual functions, indicated by the = 0 syntax
        virtual int ObjectCount() const = 0; // returns the number of objects in the battlefield
        
        // This allows access to a specific game object in the battlefield based on its index
        virtual class IGameObject* GetObjectAt(int index) = 0;
        
        virtual void ExecuteTurn() = 0; // This method is intended to execute the logic for a turn in the game
        
        // This method likely serves as a visitor pattern implementation, allowing
        // an external visitor to perform operations on the battlefield or its objects
        virtual void Visit() = 0;
};

// Interface for game objects
class IGameObject
{
    public:
        virtual ~IGameObject() = default; // Default destructor
        virtual void ExecuteTurn(IBattlefield* battlefield) = 0;
        virtual void AddLifePoints(int points) = 0;
        virtual int GetAttack() const = 0;
        virtual int GetDefense() const = 0;
        virtual int GetId() const = 0;
        virtual int GetLifePoints() const = 0;
        virtual std::string GetType() const = 0;
        virtual std::string GetStatus() const = 0;
};

// Base class for game objects
class GameObject : public IGameObject
{
    protected:
        const int id;
        const int attack;
        const int defense;
        int lifePoints;
    
    public:
        GameObject(int id, int attack, int defense, int lifePoints)
            : id(id), attack(attack), defense(defense), lifePoints(lifePoints) {}

        int GetId() const override { return id; }
        int GetAttack() const override { return attack; }
        int GetDefense() const override { return defense; }
        int GetLifePoints() const override { return lifePoints; }
        void AddLifePoints(int points) override { lifePoints += points; }
        std::string GetType() const override { return "GameObject"; }

        std::string GetStatus() const override
        {
            return GetType() + " ID: " + std::to_string(id) +
                    " HP: " + std::to_string(lifePoints) +
                    " ATK: " + std::to_string(attack) +
                    " DEF: " + std::to_string(defense);
        }
        void ExecuteTurn(IBattlefield* battlefield) override {}
};

// Alien class
class Alien : public GameObject
{
    private:
        const int speed;
        int extraActions;
    
    public:
        Alien(int id, int attack, int defense, int lifePoints, int speed)
            : GameObject(id, attack, defense, lifePoints), speed(speed), extraActions(0) {}
        
            std::string GetType() const override { return "Alien"; }

            int GetAttack() const override { return attack + 2; } // Aliens have +2 of attack

            void ExecuteTurn(IBattlefield* battlefield) override
            {
                extraActions = speed;

                // Main action
                AttackRandomEnemy(battlefield);
                
                // Extra actions depending on speed
                while (extraActions > 0 && battlefield -> ObjectCount() > 1)
                {
                    AttackRandomEnemy(battlefield);
                    extraActions--;
                }
            }
    
    private:
        void AttackRandomEnemy(IBattlefield* battlefield)
        {
            if (battlefield -> ObjectCount() <= 1) return;

            // Find a random enemy
            IGameObject* enemy = nullptr;
            int attempts = 0;

            while (!enemy && attempts < 10)
            {
                int randomIndex = rand() % battlefield -> ObjectCount();
                IGameObject* potentialEnemy = battlefield -> GetObjectAt(randomIndex);
                if (potentialEnemy->GetId() != id)
                {
                    enemy = potentialEnemy;
                }
                attempts++;
            }

            if (!enemy) return;

            // Resolve attack
            int attackRoll = (rand() % 20) + 1;
            int totalAttack = GetAttack() + attackRoll;

            if (totalAttack >= enemy->GetDefense())
            {
                int damage = (rand() % 10) + 1; // Damage between 1-10
                enemy -> AddLifePoints(-damage);
                std::cout << "Alien " << id << " attacks " << enemy -> GetType() << " "
                          << enemy -> GetId() << " causing " << damage << " damage!\n";
            }
            else
            {
                std::cout << "Alien " << id << "  fails its attack against "
                          << enemy -> GetType() << " " << enemy -> GetId() << "!\n";
            }
        }
};

// Predator class
class Predator : public GameObject
{
    private:
        int potions;
        bool hasDisc;
        bool camouflageActive;
        int camouflageTimer;
        int camouflageCooldown;
    
    public:
        Predator(int id, int attack, int defense, int lifePoints, int potions)
            : GameObject(id, attack, defense, lifePoints), potions(potions),
            hasDisc(true), camouflageActive(false), camouflageTimer(0), camouflageCooldown(0) {}
    
        std::string GetType() const override { return "Predator"; }

        int GetDefense() const override
        {
            // Predators have +2 defense and +5 if camouflaged
            return defense + 2 + (camouflageActive ? 5 : 0);
        }

        std::string GetStatus() const override
        {
            std::string status = GameObject::GetStatus();
            status += " Potions: " + std::to_string(potions);
            status += " Disc: " + std::string(hasDisc ? "Yes" : "No");
            status += " Camo: " + std::string(camouflageActive ? "Active (" + std::to_string(camouflageTimer) + ")" : 
                    (camouflageCooldown > 0 ? "CD: " + std::to_string(camouflageCooldown) : "Ready"));
            return status;
        }

        void ExecuteTurn(IBattlefield* battlefield) override
        {
            // Update camouflage timers
            if (camouflageActive)
            {
                camouflageTimer--;
                if (camouflageTimer <= 0)
                {
                    camouflageActive = false;
                    camouflageCooldown = 5;
                }
            }
            else if (camouflageCooldown > 0)
            {
                camouflageCooldown--;
            }

            // Choose random action
            int action = rand() % 4;

            switch (action)
            {
                case 0: // Attack normally
                    AttackRandomEnemy(battlefield, false);
                    break;
                case 1: // Use potion
                    UsePotion();
                    break;
                case 2: // Attack with disc
                    if (hasDisc)
                    {
                        AttackRandomEnemy(battlefield, true);
                    }
                    else
                    {
                        AttackRandomEnemy(battlefield, false);
                    }
                    break;
                case 3: // Activate camouflage
                    if (!camouflageActive && camouflageCooldown == 0)
                    {
                        camouflageActive = true;
                        camouflageTimer = 10;
                        std::cout << "Predator " << id << " activate camouflage for 10 turns!\n";
                    }
                    else
                    {
                        AttackRandomEnemy(battlefield, false);
                    }
                    break;
            }
        }
    
    private:
        void AttackRandomEnemy(IBattlefield* battlefield, bool useDisc)
        {
            if (battlefield -> ObjectCount() <= 1) return;

            // Find a random enemy
            IGameObject* enemy = nullptr;
            int attempts = 0;

            while (!enemy && attempts < 10)
            {
                int randomIndex = rand() % battlefield -> ObjectCount();
                IGameObject* potentialEnemy = battlefield -> GetObjectAt(randomIndex);
                if (potentialEnemy -> GetId() != id)
                {
                    //
                    if (camouflageActive && potentialEnemy -> GetType() == "Alien")
                    {
                        if ((rand() % 100) < 20)
                        {
                            enemy = potentialEnemy;
                        }
                    }
                    else
                    {
                        enemy = potentialEnemy;
                    }
                }
                attempts++;
            }

            if (!enemy)
            {
                std::cout << "Predator " << id << " can't find a target!\n";
                return;
            }

            // Resolve attack
            int attackRoll = (rand() % 20) + 1;
            int totalAttack = GetAttack() + attackRoll;

            if (totalAttack >= enemy -> GetDefense())
            {
                int damage = useDisc ? ((rand() % 10) + 1) : ((rand() % 5) +1);
                enemy -> AddLifePoints(-damage);

                std::cout << "Predator " << id << " attacks " << enemy -> GetType() << " "
                          << enemy -> GetId() << " with " << (useDisc ? "disk" : "normal attack")
                          << " causing " << damage << " of damage!\n";
                
                if (useDisc)
                {
                    // 70% chance of recovering the disk
                    if ((rand() % 100) < 70)
                    {
                        std::cout << "Predator " << id << " recover your disk!\n";
                    }
                    else
                    {
                        hasDisc = false;
                        std::cout << "Predator " << id << " lost your disk!\n";
                    }
                }
                else
                {
                    std::cout << "Predator " << id << " fails its attack against "
                              << enemy -> GetType() << " " << enemy -> GetId() << "!\n";
                }
            }
        }

        void UsePotion()
        {
            if (potions > 0)
            {
                int healAmount = (rand() % 19) + 2; // 2-20 points of life
                AddLifePoints(healAmount);
                potions--;
                std::cout << "Predator " << id << " use a potion and recover "
                          << healAmount << " hit points! (" << potions << " remaining potions)\n";
            }
            else
            {
                std::cout << "Predator " << id << " tries to use a potion but he doesn't have any left!\n";
            }
        }
};

// Battlefield Implementation
class Battlefield : public IBattlefield
{
    private:
        std::vector<std::unique_ptr<IGameObject>> objects;
        /*std::vector<std::unique_ptr> objects; info below:

        // std::vector: This is a dynamic array provided by the C++ Standard Library.
        //  It can grow and shrink in size, allowing for flexible storage of elements.

        // std::unique_ptr<IGameObject>: This is a smart pointer that manages the
        //  lifetime of an object of type IGameObject. A unique_ptr ensures that
        //  there is only one owner of the object it points to, automatically
        //  deallocating the memory when the unique_ptr goes out of scope.
        //  This helps prevent memory leaks.

        // objects: This is the name of the vector, which will hold a collection of
        //  unique_ptr instances, each pointing to an IGameObject. This design allows
        //  for efficient management of game objects, ensuring that they are properly
        //  destroyed when no longer needed.
        */
        std::unordered_map<int, IGameObject*> idMap;
        /*std::unordered_map<int, IGameObject> idMap; info below:

        // std::unordered_map: This is a hash table-based associative container
        //  that stores key-value pairs. It allows for fast retrieval of values
        //  based on their keys.

        // int: This is the type of the key in the map. In this context, it
        // likely represents a unique identifier for each game object.

        // IGameObject*: This is a raw pointer to an IGameObject. Unlike
        //  unique_ptr, this does not manage the memory of the object, meaning
        //  the programmer is responsible for ensuring that the object is properly
        //  deleted when no longer needed.
        
        // idMap: This is the name of the unordered map, which maps integer
        //  IDs to pointers of IGameObject. This allows for quick access
        //  to game objects based on their IDs, facilitating operations
        //  like retrieval, updates, or deletions.
        */

    public:
        int ObjectCount() const override { return objects.size(); }

        IGameObject* GetObjectAt(int index) override
        {
            if (index >= 0 && index < objects.size())
            {
                return objects[index].get();
            }
            return nullptr;
        }

        void AddObject(std::unique_ptr<IGameObject> object)
        {
            int id = object -> GetId();
            if (idMap.find(id) == idMap.end())
            {
                idMap[id] = object.get();
                objects.push_back(std::move(object));
            }
            else
            {
                std::cerr << "Error: An object with ID already exists " << id << "\n";
            }
        }

        void ExecuteTurn() override
        {
            // Run shift for each object
            for (auto& obj : objects)
            {
                obj -> ExecuteTurn(this);
            }

            // Eliminate objects with life <= 0
            objects.erase(
            std::remove_if(objects.begin(), objects.end(), 
                [](const std::unique_ptr<IGameObject>& obj) {
                    return obj -> GetLifePoints() <= 0;
                }),
            objects.end());

            // Update idMap
            idMap.clear();
            for (auto& obj : objects)
            {
                idMap[obj->GetId()] = obj.get();
            }
        }

        void Visit() override
        {
            for (auto& obj : objects)
            {
                std::cout << obj -> GetStatus() << "\n";
            }
        }
};

// Utility functions
namespace Utils
{
    void PrintBattlefield(Battlefield& battlefield)
    {
        std::cout << "\n=== STATE OF THE BATTLEFIELD ===\n";
        battlefield.Visit();
        std::cout << "==================================\n\n";
    }

    int RandomInt(int min, int max)
    {
        return min + (rand() % (max - min + 1));
    }
}

int main()
{
    srand(time(nullptr)); // Initialize seed for random numbers

    Battlefield battlefield;

    // Create some aliens
    for (int i = 1; i <= 3; ++i)
    {
        battlefield.AddObject(std::make_unique<Alien>(
            i,
            Utils::RandomInt(1, 10), // Attack
            Utils::RandomInt(10, 20), // Defense
            Utils::RandomInt(10, 100), // Points of view
            Utils::RandomInt(0, 3) // Speed
        ));
    }
    // Create some predators
    for (int i = 10; i <= 12; ++i)
    {
        battlefield.AddObject(std::make_unique<Predator>(
            i, 
            Utils::RandomInt(1, 10),   // Attack
            Utils::RandomInt(10, 20),  // Defense
            Utils::RandomInt(10, 100), // Points of view
            Utils::RandomInt(1, 4)     // Pociones
        ));
    }

    // Execute 10 turns
    for (int turn = 1; turn <= 10; ++turn)
    {
        std::cout << "\n=== TURN " << turn << " ===\n";
        battlefield.ExecuteTurn();
        Utils::PrintBattlefield(battlefield);
    }

    return 0;
}