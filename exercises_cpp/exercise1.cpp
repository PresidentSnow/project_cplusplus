#include <iostream>
#include <string> // Allow use string tasks
#include <cmath> // Library wiht mathematical tasks

/* Info about the folder below:
// Folder for manage the cpp exercises.
// From: https://www.w3resource.com/cpp-exercises/basic/index.php
*/

// fibonacci numbers sequence
int fibonacci_sequence()
{
    int term1 = 0;
    int term2 = 1;
    int n; // Number of times we want the sequence to be done
    int nextTerm = 0; // next term in the sequence

    std::cout << "Number of terms: ";
    std::cin >> n;

    std::cout << term1 << ", " << term2 << ", ";

    for (int i = 3; i <= n; i++)
    {
        nextTerm = term1 + term2;
        std::cout << nextTerm;
        if (i != n) std::cout << ", ";
        term1 = term2;
        term2 = nextTerm;
    }
    std::cout << std::endl;
    return 0;
}

/* Info about the hell numbers (666):
// Create a function that determines whether an integer 
// passed to the function contains a sequence of "666."
// These numbers will be classified as "hell numbers."

// The function has the following requirements:
// 1º The function must accept a single argument, an integer. 
// 2º The function must return a Boolean number. True if
// it contains the sequence 666 and false if it does not.

// The function should accept negative numbers.

// Examples:
// - infernal(1234666) this should turn True.
// - infernal(123456) this should turn False.
*/
int hell_numbers()
{
    int i = 6;
    return 0;
}

/* Size of fundamental data types:
// Write a in C++ program to find the
// size of fundamental data types.
// The output should be with the next types:
// char, short, int, long, long long,
// float, double, long double and bool.
*/
int size_data_type()
{
    char size_char;
    short size_short;
    int size_int;
    long size_long;
    long long size_long_long;
    float size_float;
    double size_double;
    long double size_long_double;
    bool size_bool;

    // show memory size
    std::cout << "The sizeof char is: " << sizeof(size_char) << "\n"; // 1 byte
    std::cout << "The sizeof short is: " << sizeof(size_short) << "\n"; // 2 bytes
    std::cout << "The sizeof int is: " << sizeof(size_int) << "\n"; // 4 bytes
    std::cout << "The sizeof long is: " << sizeof(size_long) << "\n"; // 8 bytes
    std::cout << "The sizeof long long is: " << sizeof(size_long_long) << "\n"; // 8 bytes
    std::cout << "The sizeof float is: " << sizeof(size_float) << "\n"; // 4 bytes
    std::cout << "The sizeof double is: " << sizeof(size_double) << "\n"; // 8 bytes
    std::cout << "The sizeof long double is: " << sizeof(size_long_double) << "\n"; // 16 bytes
    std::cout << "The sizeof bool is: " << sizeof(size_bool) << "\n"; // 1 byte
    return 0;
}

// Write a C++ program that calculates the volume of a sphere.
// Formula: (4/3) · π · r^3 [radius to the three power]
int volume_sphere()
{
    double r; // base number
    double pi = 3.14159; // π pi number

    std::cout << "\n Let's calculate the volume of a sphere!! \n";
    std::cout << "Please, enter the radius number: ";
    std::cin >> r;
    std::cout << "\n";

    double formula = (4.00 / 3.00) * pi * pow(r,3);

    // output result
    std::cout << "The volume of a sphere is: " << formula << std::endl;
    return formula;
}

// Write a C++ program that calculates the volume of a cube. 
int volume_cube()
{
    return 0;
}

// Write a C++ program that calculates the volume of a cylinder. 
int volume_cylinder()
{
    return 0;
}

// Write a C++ program to find the Area and Perimeter of a Rectangle. 
int area_perimeter_rectangle()
{
    return 0;
}

// Write a C++ program to convert temperature in Celsius to Fahrenheit. 
int convert_celsius_fahrenheit()
{
    return 0;
}

// Write a C++ program to find the total number of minutes between two given times (formatted with a colon and am or pm).
int number_minutes_two()
{
    return 0;
}

/* Write a C++ program to add up all the digits between two given integers.
// Add all the digits between 11 and 16.
// Example:
// Add up all the digits between 39 and 41 is: 21
*/
int digits_between_two_integers()
{
    return 0;
}

// unit conversion time (second, minute, hour, etc...)
int unit_conversion_time()
{
    return 0;
}

int main()
{
    fibonacci_sequence();
    return 0;
}
