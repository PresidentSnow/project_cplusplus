#include <iostream>
#include <string> // Allow use string tasks
#include <cmath> // Library wiht mathematical tasks
#include <algorithm> // perform modify ranges of data from data structures

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
    const double pi = 3.14159; // π pi number

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
    double s;

    std::cout << "Please, introduce the size of the cube: ";
    std::cin >> s;
    std::cout << "\n";

    // Check if the input is valid
    if (s < 0) {
        std::cout << "Size cannot be negative." << std::endl;
        return 1; // Return an error code
    }

    double total = std::pow(s, 3);

    std::cout << "The volume of a cube is: " << total << std::endl;
    return 0;
}

// Write a C++ program that calculates the volume of a cylinder. 
int volume_cylinder()
{
    const double pi = 3.14159; // π pi number

    float r; // radius num
    float h; // height of the cylinder

    std::cout << "Please, enter the radius number: ";
    std::cin >> r;
    std::cout << "\n";
    std::cout << "Now, introduce the height of the cylinder: ";
    std::cin >> h;
    std::cout << "\n";

    double volume = std::pow(r, 2) * pi * h;
    std::cout << "The volume of a cylinder is: " << volume << std::endl;
    return 0;
}

// Write a C++ program to find the Area and Perimeter of a Rectangle. 
int area_perimeter_rectangle()
{
    double l; // lenght
    double w; // width

    std::cout << "Please, enter the lenght of the rectangle: ";
    std::cin >> l;
    std::cout << "\n";
    std::cout << "And now, enter the widht of the rectangle: ";
    std::cin >> w;
    std::cout << "\n";

    // area of the rectangle
    double a = l * w;
    std::cout << "The are of the rectangle is: " << a << std::endl;

    // perimeter of the rectangle
    double p = 2 * (l + w);
    std::cout << "The perimeter of the rectangle is: " << p << std::endl;
    return 0;
}

/* Write a C++ program to add up all the digits between two given integers.
// Add all the digits between 11 and 16.
// Example:
// Add up all the digits between 39 and 41 is: 21
*/
int digits_between_two_integers()
{
    using namespace std;
    int x = 40;
    int y = 41;
    int digit_sum = 0; // manage the the sum of the numbers

    /* Code explained below:
    // If x is 20 and y is 25. The code will do the next:
    // it will sum the digits of 20 (2+0), 21 (2+1), 22 (2+2), 23 (2+3), 24 (2+4), and 25 (2+5),
    // resulting in a total sum of 2 + 0 + 2 + 1 + 2 + 2 + 2 + 3 + 2 + 4 + 2 + 5 = 30.
    */
    if (x > y)
    {
        cout << "Sorry, the 1st num is greater than the 2nd.\n";
        cout << "Try again...\n";
        return 1;
    }

    for(int i = x; i <= y; ++i)
    {
        int p = i;
        // Loop to extract digits and calculate their sum for each number between x and y
        while(p > 0)
        {
            digit_sum += p % 10; // Extract the last digit of the number and add it to digit_sum
            p /= 10; // Remove the last digit from the number
        }
    }

   // Display the range of numbers and the sum of their digits using the 'test' function
   cout << "Add up all the digits between " << x << " and " << y << " is: " << digit_sum << endl;
   
    return 0;
}

// extract the reverse num
int rev_nums()
{
    int num = 890;
    int rev_num = 0; // stores the rev numbers
    
    while (num > 0)
    {
        //rev_num *= 10 + num % 10;
        rev_num = rev_num * 10 + num % 10;
        /* Explain of this part below: rev_num = rev_num * 10 + num % 10;
        // If num is 123, the process would look like this:
        // Start with rev_num = 0.
        // First iteration: rev_num = 0 * 10 + 3 (last digit of 123) → rev_num = 3.
        // Second iteration: rev_num = 3 * 10 + 2 (next last digit of 12) → rev_num = 32.
        // Third iteration: rev_num = 32 * 10 + 1 (last digit of 1) → rev_num = 321.
        // After processing all digits, rev_num will be 321, which is the reverse of 123
        */
        num /= 10; // Remove the last digit from the number
    }

    std::cout << "The reverse of num is: " << rev_num << std::endl;

    return 0;
}

// reverse string wiht reverse()
int rev_str()
{
    std::string str = "Lee is the best";
    // Reverse the string using the std::reverse() 
    reverse(str.begin(), str.end());
    
    std::cout << str << std::endl;
    return 0;
}

// reverse string by swapping characters
// This is from: https://www.tutorialkart.com/cpp/cpp-string-reverse/
int rev_swapping_characters()
{
    std::string str = "Tenet.";
    char ch;

    for(int index = 0, len = str.length(); index < len/2; index++)
    {
        ch = str[index];
        str[index] = str[len-1-index];
        str[len-1-index] = ch;
    }
    std::cout << str << std::endl;
    return 0;
}

// reverse string by copying string from right to left into a new string
int rev_right_left()
{
    using namespace std;

    string str = "And still, I rise.";
    char rev[str.length()];

    for (int index = 0, len = str.length(); (index < len); index++)
    {
        rev[index] = str[len-1-index];
    }

    cout << rev << endl;

    return 0;
}

// Reverse a string using Recursion
void reverseString(std::string& str, int n, int i) {
   if (n <= i) {
      return;
   }
   std::swap(str[i], str[n]);
   reverseString(str, n - 1, i + 1);
}

int main()
{
    // this is from "reverseString"
    std::string str = "Hello_world.";
    reverseString(str, str.length() - 1, 0);
    std::cout << str << std::endl;

    rev_swapping_characters();
    return 0;
}
