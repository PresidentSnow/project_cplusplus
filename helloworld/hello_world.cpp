#include <iostream>
#include <string> // Allow use string tasks
#include <cmath> // Library wiht mathematical tasks

// Calculator
int calculator()
{
    int x, y, sum;
    std::cout << "Type a number: ";
    std::cin >> x;
    std::cout << "Type another number: ";
    std::cin >> y;
    sum = x + y;
    std::cout << "Sum is: " << sum << "\n";
    return 0;
}

// bool example
int bool_example()
{
    bool a = true;
    bool b = false;
    std::cout << a << "\n"; // show's 1
    std::cout << b << "\n"; // show's 0
    return 0;
}

// String test
int string_example()
{
    
    std::string name = "John";
    std::string second_name = "Doe";
    std::string full_name = name + " " + second_name;
    std::cout << full_name << "\n";

    // calculate string lenght
    std::string text = "HELLO";
    std::cout << "The lenght of the text string is: " << text.length() << "\n";

    // access string values
    std::cout << "The first character is: " << text[0] << "\n";

    // print the last string value
    std::cout << "The last character is: " << text[text.length() - 1] << "\n";

    // change string value
    text[1] = '3';
    std::cout << "Second character changed: " << text << "\n";

    // .at do the same, but is more safer
    std::cout << "\n";
    std::cout << "With the .at option: " << "\n";
    std::cout << "The first character is: " << text.at(0) << "\n";
    std::cout << "The last character is: " << text.at(4) << "\n";

    return 0;
}

// math library
int example_math_library()
{
    // highest number between two values
    std::cout << "Highest number between 5 and 10: " << std::max(5,10) << "\n";
    // lowest number
    std::cout << "Lowest number between 5 and 22: " << std::min(5,22) << "\n";
    // square root
    std::cout << "Square root of 2: " << std::sqrt(2) << "\n";
    std::cout << "Rounded number: " << round(3.49) << "\n";
    return 0;
}

int main()
{
    bool_example();
    return 0;
}
