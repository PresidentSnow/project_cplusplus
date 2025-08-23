#include <iostream>
#include <string> // Allow use string tasks
#include <cmath> // Library wiht mathematical tasks
#include <algorithm> // perform modify ranges of data from data structures

/* Info about the folder below:
// Folder for manage the cpp exercises.
// From: https://www.sanfoundry.com/cpp-matrix-programs/
// And: https://www.geeksforgeeks.org/cpp/matrix-c-cpp-programs/
*/

// C++ exercise for sum two matrices.
void sum_two_matrices()
{
    int A[3][3] = 
    {
        {1, 2, 3},
        {6, 7, 8},
        {9, 10, 11}
    };
    int B[3][3] =
    {
        {9, 7, 2},
        {10, 29, 1},
        {6, 3, 8}
    };

    // sizeof of the array A
    int rows_A = sizeof(A) / sizeof(A[0]);
    int cols_A = sizeof(A[0]) / sizeof(A[0][0]);
    // sizeof of the array B
    int rows_B = sizeof(B) / sizeof(B[0]);
    int cols_B = sizeof(B[0]) / sizeof(B[0][0]);

    // Check if dimensions match
    if (rows_A != rows_B || cols_A != cols_B)
    {
        std::cout << "Matrices dimensions do not match for addition." << std::endl;
        return;
    }

    int sum_matrix[3][3];

    // sum the matrix
    for (int i = 0; i < rows_A; i++)
    {
        for (int j = 0; j < cols_A; j++)
        {
            sum_matrix[i][j] = A[i][j] + B[i][j];
        }
    }

    // print the first matrix
    std::cout << "Matrix A: \n";
    for (int i = 0; i < rows_A; i++)
    {
        for (int j = 0; j < cols_A; j++)
        {
            std::cout << A[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    // print the second matrix
    std::cout << "Matrix B: \n";
    for (int i = 0; i < rows_B; i++)
    {
        for (int j = 0; j < cols_B; j++)
        {
            std::cout << B[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    // print the sum of the matrix
    std::cout << "The sum of matrix A and B:\n";
    for (int i = 0; i < rows_A; i++)
    {
        for (int j = 0; j < cols_A; j++)
        {
            std::cout << sum_matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

// C++ exercise for subtract two matrices.
void subtract_two_matrices()
{
    int A[3][3] =
    {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}
    };
    int B[3][3] =
    {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    };

    // sizeof of the array A
    int rows_A = sizeof(A) / sizeof(A[0]);
    int cols_A = sizeof(A[0]) / sizeof(A[0][0]);
    // sizeof of the array B
    int rows_B = sizeof(B) / sizeof(B[0]);
    int cols_B = sizeof(B[0]) / sizeof(B[0][0]);

    // Check if dimensions match
    if (rows_A != rows_B || cols_A != cols_B)
    {
        std::cout << "Matrices dimensions do not match for addition." << std::endl;
        return;
    }

    int subtract_matrix[3][3];

    // subtract the matrix
    for (int i = 0; i < rows_A; i++)
    {
        for (int j = 0; j < cols_A; j++)
        {
            subtract_matrix[i][j] = A[i][j] - B[i][j];
        }
    }

    // print the first matrix
    std::cout << "Matrix A: \n";
    for (int i = 0; i < rows_A; i++)
    {
        for (int j = 0; j < cols_A; j++)
        {
            std::cout << A[i][j] << "\t";
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    // print the second matrix
    std::cout << "Matrix B: \n";
    for (int i = 0; i < rows_B; i++)
    {
        for (int j = 0; j < cols_B; j++)
        {
            std::cout << B[i][j] << "\t";
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    // print the subtract of the matrix
    std::cout << "The subtracting of matrix A and B:\n";
    for (int i = 0; i < rows_A; i++)
    {
        for (int j = 0; j < cols_A; j++)
        {
            std::cout << subtract_matrix[i][j] << "\t";
        }
        std::cout << "\n";
    }
}

int main()
{
    subtract_two_matrices();
    return 0;
}