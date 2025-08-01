#include <iostream>
#include <string> // Allow use string tasks
#include <cmath> // Library wiht mathematical tasks

int example_switch()
{
    int day = 1;
    switch (day)
    {
    case 1:
        std::cout << "Monday" << "\n";
        break;
    case 2:
        std::cout << "Tuesday" << "\n";
        break;
    case 3:
        std::cout << "Wednesday" << "\n";
        break;
    case 4:
        std::cout << "Thursday" << "\n";
        break;
    case 5:
        std::cout << "Friday" << "\n";
        break;
    case 6:
        std::cout << "Saturday" << "\n";
        break;
    case 7:
        std::cout << "Sunday" << "\n";
        break;
    default:
        std::cout << "Looking forward to the next Weekend" << "\n";
        break;
    }

    return 0;
}

int test_while()
{
    int i = 0;
    while(i < 5)
    {
        std::cout << i << " ";
        i++;
    }
    std::cout << "\n";

    return 0;
}

// test with do...while
int ex_do_while()
{
    int i = 10;
    do
    {
        std::cout << "I is: " << i << "\n";
        i++;
    } while (i < 5);

    return 0;
}

// while loop to reverse some numbers
int rev_numbers()
{
    int num = 987654321;
    int revNum = 0; // store the reversed number

    while (num)
    {
        // get the last number of 'num' and add it to 'revNum'
        revNum = revNum * 10 + num % 10;
        // remove the last number of 'num'
        num /= 10;
    }
    std::cout << "Reversed numbers: " << revNum << "\n";
    
    return 0;
}

// for examples
int loop_for()
{
    /*for (int i = 0; i <= 10; i += 2)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";
    */

    // calculates the sum of numbers from 1 to 5
    /*int sum = 0;
    for (int i = 0; i <= 5; i++)
    {
        sum += i;
    }
    std::cout << "Sum is: " << sum;
    std::cout << "\n";
    */

    // nested loops
    /*for (int i = 1; i <= 2; ++i)
    {
        std::cout << "Outer: " << i << "\n"; // executes 2 times

        // inner loop
        for (int j = 1; j <= 3; ++j)
        {
            std::cout << "Inner: " << j << "\n"; // executes 6 times (3 * 2)
        }
    }
    */

    // for-each loop, loop throught elements in an array
    /*int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers)
    {
        std::cout << i << " ";
    }
    std::cout << "\n";*/

    // loop throught string
    std::string word = "Hello";
    for (char c : word)
    {
        std::cout << c << "\n";
    }
    return 0;
}

int main()
{
    test_while();
    return 0;
}