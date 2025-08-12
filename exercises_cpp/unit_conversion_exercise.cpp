#include <iostream>
#include <string> // Allow use string tasks
#include <cmath> // Library wiht mathematical tasks

/* Info about the folder below:
// Folder for manage the cpp exercises.
// From: https://www.w3resource.com/cpp-exercises/basic/index.php
*/

// Write a C++ program to convert temperature in Celsius to Fahrenheit.
// From: https://www.sanfoundry.com/cpp-program-perform-celsius-fahrenheit-conversion/
int convert_celsius_to_fahrenheit()
{
    // formula °F = (°C × 1.8) + 32
    using namespace std;

    float fahrenheit, celsius;
    
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;

    cout << "The temperature in Celsius: " << celsius << endl;
    cout << "The temperature in Fahrenheit: " << fahrenheit << endl;
    return 0;
}

int convert_fahrenheit_to_celsius()
{
    // formula C = (F − 32) * 9/5​ (1.8)
    float fahrenheit, celsius;

    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 9/5;

    std::cout << "The temperature in fahrenheit: " << fahrenheit << std::endl;
    std::cout << "The temperature in celsius: " << celsius << std::endl;
    return 0;
}

// unit conversion time (second, minute, hour, etc...)
int unit_conversion_time()
{
    float year, week, day, hour, minute, seconds;

    std::cout << "Please, enter the time (in seconds): ";
    std::cin >> seconds;

    if (seconds < 60)
    {
        std::cout << "The time is: " << seconds << " seconds." << std::endl;
    }
    else
    {
        minute = seconds / 60;
        hour = seconds / 3600; // 60 minutes in an hour (60 minutes * 60 seconds)
        day = seconds / 86400; // 24 hours in a day (24 hours * 3600 seconds)
        week = seconds / 604800; // 7 days in a week (7 days * 86400 seconds)
        year = seconds / 31536000; // 365 days in a year (365 days * 86400 seconds)

        std::cout << "The minute unit is: " << minute << std::endl;
        std::cout << "The hour unit is: " << hour << std::endl;
        std::cout << "The day unit is: " << day << std::endl;
        std::cout << "The week unit is: " << week << std::endl;
        std::cout << "The year unit is: " << year << std::endl;
    }
    return 0;
}

int main()
{
    convert_fahrenheit_to_celsius();
    return 0;
}