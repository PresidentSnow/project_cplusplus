#include <iostream>
#include <string> // Allow use string tasks
#include <cmath> // Library wiht mathematical tasks
#include <algorithm> // perform modify ranges of data from data structures

/* Info about the folder below:
// Folder for manage the cpp exercises.
// From: https://www.sanfoundry.com/cpp-matrix-programs/
// And: https://www.geeksforgeeks.org/cpp/matrix-c-cpp-programs/
*/

void matrix_test()
{
    int A[3][3] = 
    {
        {1, 2, 3},
        {6, 7, 8},
        {9, 10, 11}
    };
    std::cout << A[2][1] << "\n";
}

int main()
{
    matrix_test();
    return 0;
}