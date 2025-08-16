#include <iostream>
#include <string> // Allow use string tasks
#include <cmath> // Library wiht mathematical tasks

void example_array()
{
    /*std::string cars[5] = {"Volvo", "BMW", "Leon", "Ibiza", "Peugeot"};
    std::cout << "First element: " << cars[0] << "\n"; // show's first element
    for (int i = 0; i < 5; i++) // output all elements of the array
    {
        std::cout << i << " element of the array: ";
        std::cout << cars[i] << "\n";
    }*/

    // get the size of an array
    /*int myNumbers[5] = {10, 20, 30, 40, 50};
    std::cout << sizeof(myNumbers) << "\n";*/
    // the sizeof() operator returns the size of a type in bytes
    // int type is usually 4 bytes

    // calculates the average of different ages
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, sum = 0;
    int i;

    // get the length of the array
    int lenght = sizeof(ages) / sizeof(ages[0]);

    // loop throught the elements of the array
    for (int age : ages)
    {
        sum += age;
    }

    // calculate the average by dividing the sum by the lenght
    avg = sum / lenght;

    // variable assign the first element of ages
    int lowestAge = ages[0];

    // loop throught the elements of the array and find the lowest age
    for (int age : ages)
    {
        if (lowestAge > age)
        {
            lowestAge = age;
        }
    }

    // print the average
    std::cout << "The average age is: " << avg << "\n";
    // print the lowest age
    std::cout << "The lowest age is: " << lowestAge << "\n";
}

// multi-dimensional arrays examples
void test_multi_dimensional()
{
    // 2D array
    /*std::string letters[2][4] =
    {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };
    //letters[0][2] = "X";
    //std::cout << letters[0][2] << "\n";
    // loop through letters array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << letters[i][j] << " ";
        }
    }
    std::cout << "\n";*/

}

void ships_game()
{
    // 3D array
    bool ships[4][4] =
    {
        { 0, 1, 1, 0},
        { 0, 0, 0, 0},
        { 0, 0, 1, 0},
        { 0, 0, 1, 0}
    };

    // keep track of how many hits the player has and
    // how many turns they have played in these variables
    int hits = 0;
    int numberOfTurns = 0;

    // allow the player to keep going until they
    // have hit all four ships
    while (hits < 4)
    {
        int row, column;

        std::cout << "Selecting coordinates\n";

        // ask the player for a row
        std::cout << "Choose a row number between 0 and 3: ";
        std::cin >> row;

        // ask the player for a column
        std::cout << "Choose a column number between 0 and 3: ";
        std::cin >> column;

        // check if a ship exists in those coordinates
        if (ships[row][column])
        {
            // if the player hit a ship, remove it by
            // setting the value to zero
            ships[row][column] = 0;

            // increase the hit counter
            hits++;

            // tell the player that they have hit a ship
            // and how many ships are left
            std::cout << "Hit! " << (4-hits) << " left.\n\n";
        }
        else
        {
            // tell the player that they missed
            std::cout << "Miss\n\n";
        }
    }
    // count how many turns the player has taken
    numberOfTurns++;

    std::cout << "Victory!\n";
    std::cout << "You won in " << numberOfTurns << " turns";
}

// pointers and array
int ptrArray()
{
    int nums[5] = {0, 1, 2, 3, 4};
    /*std::cout << "The address of the Array is: " << nums << std::endl;
    std::cout << &nums[0] << "\n";
    std::cout << &nums[1] << "\n";
    std::cout << &nums[2] << "\n";
    std::cout << &nums[3] << "\n";
    std::cout << &nums[4] + 1 << "\n";*/

    std::string cars[5] = {"BMW", "Hyundai", "Jaguar", "Aston Martin", "SEAT"};
    int cars_size = sizeof(cars) / sizeof(cars[0]);

    std::cout << "The size of the cars array is: " << cars_size << "\n";

    return 0;
}

// multiple values from a function using pointers

int getMax(int numbers[], int size)
{
    int max = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}

int getMin(int numbers[], int size)
{
    int min = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    return min;
}

void getMin_and_Max(int numbers[], int size, int *min, int *max)
{
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > *max)
            *max = numbers[i];
        if (numbers[i] < *min)
            *min = numbers[i];
    }
}

int main ()
{
    int numbers[5] = {5, 4, -2, 29, 6};
    /*std::cout << "The minimum number of the array is: " << getMin(numbers, 5) << std::endl;
    //std::cout << "The maximum number of the array is: " << getMax(numbers, 5) << std::endl;*/
    int min = numbers[0];
    int max = numbers[0];
    getMin_and_Max(numbers, 5, &min, &max);
    std::cout << "The minimum number of the array is: " << min << std::endl;
    std::cout << "The maximum number of the array is: " << max << std::endl;

    return 0;
}
