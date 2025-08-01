#include <iostream>
#include <string> // Allow use string tasks
#include <cmath> // Library wiht mathematical tasks

class car // the class
{
    public: // access specifier
        int year; // attribute (int variable)
        std::string brand; // attribute (string variable)
        std::string model; // attribute
        /*void myMethod() // method/function defined inside the class
        {
            // std::cout << "LET'S GO!";
        }*/
        car(std::string x, std::string y, int z) // constructor with parameters
        {
            brand = x;
            model = y;
            year = z;
        }
};

int main()
{
    car car_Obj1("BMW", "X5", 1999); // create an object of car
    // access attributes and set values
    /*car_Obj1.brand = "BMW";
    car_Obj1.model = "X5";
    car_Obj1.year = 1999;*/
    //car_Obj1.myMethod(); // call the method

    car car_Obj2("Ford", "Mustang", 1969); // another object of car
    // access attributes and set values
    /*car_Obj2.brand = "Ford";
    car_Obj2.model = "Mustang";
    car_Obj2.year = 1969;*/

    // print attributes values
    std::cout << car_Obj1.brand << " " << car_Obj1.model << " " << car_Obj1.year << "\n";
    std::cout << car_Obj2.brand << " " << car_Obj2.model << " " << car_Obj2.year << "\n";
    return 0;
}