#include <iostream>
#include <string> // Allow use string tasks
#include <cmath> // Library wiht mathematical tasks

void test_pointers()
{
    int A = 10;
    int *J = &A; // j pointer (*) to the a address (&)
    int B = *J;

    std::cout << "The value of A is: " << A << "\n";
    std::cout << "The address of the A is: " << &A << "\n";
    std::cout << "The value that store a address, J is: " << *J << "\n";

    *J = 8; // modified the J (pointer of a address) value
    std::cout << "The value J was modified: " << *J << "\n";
    std::cout << "and now, A value was modified: " << A << "\n";

    int V;
    int *ptr2 = &V;
    *ptr2 = 7;
    std::cout << "V = " << V << "\n";
}

void pointers_strings()
{
    std::string name = "BANNANA";
    std::string* house = &name;

    std::cout << *house << "\n";
    std::cout << "The address is: " << house << "\n";
    *house = "I like pizza!";
    std::cout << *house << "\n";
    std::cout << name << "\n";
}

int main()
{
    //pointers_strings();
    test_pointers();
    return 0;
}