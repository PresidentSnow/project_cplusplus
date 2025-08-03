#include <iostream>
#include <string> // Allow use string tasks
#include <cmath> // Library wiht mathematical tasks

/* // info about this file (below):
// oop from "code beauty" video by Saldina

// oop is about creating "objects", which can hold
// data and functions that work on that data
*/

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee
{
private: // by default the class is private
    std::string Company; // attribute
    int Age; // attribute
protected:
    std::string Name; // attribute
public:
    void AskForPromotion()
    {
        if (Age > 30)
        {
            std::cout << Name << " got promoted!" << std::endl;
        }
        else
        {
            std::cout << Name << " NO promotion for you!" << std::endl;
        }
    }
    // Info about setter
    /*
    // Setters are methods that allow you to modify the values
    // of a class's private attributes. They typically have a
    // name that begins with "set" followed by the attribute name.
    */
    void setName(std::string name)
    {
        Name = name;
    }
    // Info about getter
    /*
    // Getters are methods that allow you to access the values 
    // of a class's private attributes. They typically have a 
    // name that begins with "get" followed by the attribute name.
    */
    std::string getName()
    {
        return Name;
    }
    void setCompany(std::string company) // setter for company
    {
        Company = company;
    }
    std::string getCompany() // getter for company
    {
        return Company;
    }
    void setAge(int age) // setter for age
    {
        if(age >= 18)
        Age = age;
    }
    int getAge() // getter for age
    {
        return Age;
    }

    void IntroduceYourself()
    {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    // Info about Constructor in OOP:
    /*
    // constructor is a special type of method that is automatically
    // called when an instance (or object) of a class is created.
    // It's primary purpose is to initialize the object's properties 
    // and allocate resources needed for the object.
    */

    // constructor for the Employee class
    Employee(std::string name, std::string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

// inheritance OOP
/*
// Developer is a subclass or child class
// Employee is a base class or father class
*/
class Developer : public Employee
{
public:
    std::string FavProgrammingLanguage;
    Developer(std::string name, std::string company, int age, std::string FavProgrammingLanguage)
        :Employee(name, company, age) // constructor of the class
    {
        FavProgrammingLanguage = FavProgrammingLanguage;
    };
    void FixBug()
    {
        std::cout << Name << " fixed bug using " << FavProgrammingLanguage << std::endl;
    }
};

class Teacher : public Employee
{
public:
    std::string Subject;
    void PrepareLesson()
    {
        std::cout << Name << " is preparing " << Subject << " lesson " << std::endl;
    }

    // constructor
    Teacher(std::string name, std::string company, int age, std::string subject)
        :Employee(name, company, age)
    {
        Subject = subject;
    }
};

int main()
{
    Developer d = Developer("Gabriel", "Amazon", 28, "C++");
    d.FixBug();
    d.AskForPromotion();

    Teacher t = Teacher("Josep", "Telefonica", 24, "Mathematics");
    t.PrepareLesson();
    t.AskForPromotion();

    /*
    // Employee employee1 = Employee("Javi", "Nvidia", 18); // use the Constructor
    //employee1.Name = "Javi";
    //employee1.Company = "Nvidia";
    //employee1.Age = 18;
    // employee1.IntroduceYourself();
    // employee1.AskForPromotion();
    */

    //std::cout << "\n";

    /*
    // Employee employee2 = Employee("David", "Amazon", 32); // another Constructor
    // employee2.Name = "David";
    // employee2.Company = "Amazon";
    // employee2.Age = 32;
    // employee2.IntroduceYourself();
    // employee2.AskForPromotion();
    */

    //std::cout << "\n";

    /*
    // Employee employee3 = Employee("Pepe", "Oracle", 27);
    // employee3.IntroduceYourself();
    // employee3.AskForPromotion();
    */

    /*
    // access the private elements
    // employee1.setAge(25);
    // this stdout is: Jav is 25 years old
    // std::cout << employee1.getName() << " is " << employee1.getAge() << " years old " << std::endl;
    */
    return 0;
};