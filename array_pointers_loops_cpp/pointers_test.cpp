#include <iostream>
#include <string> // Allow use string tasks
#include <cmath> // Library wiht mathematical tasks

void test_pointers()
{
    /*int i = 5;
    int* x = &i;
    std::cout << i << "\n";
    std::cout << &i << "\n"; // output the memory address
    std::cout << *x << "\n";
    *x = 10;
    std::cout << *x << "\n";
    std::cout << i << "\n";*/

    std::string pizza = "pussy is the best LOL";
    std::string* name = &pizza;
    std::cout << name << " " << *name << " ";
    std::cout << "\n";

    int a = 10;
    int *j = &a;
    int b = *j;
    std::cout << b << "\n";
}

void pointers_strings()
{
    /*std::string name = "MILF";
    std::string* house = &name;

    std::cout << *house << "\n";
    std::cout << "The address is: " << house << "\n";
    *house = "I like tits!";
    std::cout << *house << "\n";
    std::cout << name << "\n";*/
}

int main()
{
    test_pointers();
    return 0;
}