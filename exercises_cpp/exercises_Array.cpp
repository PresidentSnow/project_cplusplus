#include <iostream>
#include <string> // Allow use string tasks
#include <cmath> // Library wiht mathematical tasks
#include <algorithm> // perform modify ranges of data from data structures
#include <valarray> // valarray provide mathematical operations on arrays efficiently.

/* Info about the folder below:
// Folder for manage the cpp exercises.
// From: https://www.sanfoundry.com/cpp-programs/#cpp-programs-array
// And: https://www.w3resource.com/cpp-exercises/array/index.php
*/

// C++ Program to Find Largest and Smallest Element of an Array.
int find_largest_array()
{
    int nums[5] = {10, 2, 4, 9, 11};

    int n = sizeof(nums) / sizeof(nums[0]); // determining the number of elements in the array
    int largest = nums[0]; // initialize largest with the first element (in this case, 10)
    int smallest = nums[0];

    for (int i = 1; i < n; i++) // start from 1 since we already used nums[0]
    {
        if (nums[i] > largest)
        {
            largest = nums[i]; // update largest if current element is greater
        }
        if (nums[i] < smallest) // this check which element is smallest
        {
            smallest = nums[i];
        }
    }

    /* Iteration breakdown: 
    Given the array: nums[5] = {10, 2, 4, 9, 11}

    // Initialization:
        Set largest to the first element: largest = 10

    // Iteration 1 (i = 1):
        Current element: nums[1] = 2
        Compare: 2 < 10 (no change)
        largest remains 10

    // Iteration 2 (i = 2):
        Current element: nums[2] = 4
        Compare: 4 < 10 (no change)
        largest remains 10

    // Iteration 3 (i = 3):
        Current element: nums[3] = 9
        Compare: 9 < 10 (no change)
        largest remains 10

    // Iteration 4 (i = 4):
        Current element: nums[4] = 11
        Compare: 11 > 10 (update)
        Update largest to 11

    */

    std::cout << "The largest element of the array is: " << largest << std::endl;
    std::cout << "The smallest element of the array is: " << smallest << std::endl;
    return 0;
}

// Find the largest three elements in an array. 
void largest_three()
{
    int nums[6] = {8, 12, 20, 2, 9, 7};
    int first_num = nums[0], second_num = nums[1], thir_num = nums[2];

    int n = sizeof(nums) / sizeof(nums[0]); // determining the number of elements in the array

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > first_num)
        {
            thir_num = second_num;
            second_num = first_num;
            first_num = nums[i];
        }
        else if (nums[i] > second_num)
        {
            thir_num = second_num;
            second_num = nums[i];
        }
        else if (nums[i] > thir_num)
        {
            thir_num = nums[i];
        }
    }

    std::cout << "The three largest elements are: " << first_num << " , " << second_num << " , " << thir_num << "\n";
}

// C++ Program to Remove Duplicate Elements from Array.
void duplicate_element()
{
    int A[6] = {2, 3, 10, 12, 2, 2};
    int n = sizeof(A) / sizeof(A[0]); // determining the number of elements in the array

    int B[12]; // Increased size to accommodate duplicates
    int k = 0; // Start with an empty array B. Number of unique elements in B)

    for (int i = 0; i < n; i++)
    {
        bool found = false; // Flag to check if A[i] is already in B
        for (int j = 0; j < k; j++)
        {
            if (A[i] == B[j])
            {
                found = true; // Element already exists in B
                break;
            }
        }
        if (!found) // If not found, add to B
        {
            B[k] = A[i]; // Use assignment operator
            k++;
        }
    }

    /* Iteration breakdown: 
    Initial Setup

    Array A: {2, 3, 10, 12}
    Size of A (n): 10
    Array B: {} (initially empty)
    k: 0 (number of unique elements in B)

    Iteration Breakdown
    Iteration 1: i = 0

    Current Element (A[0]): 2
    Found: false
    Inner Loop: No elements in B to check.
    Action: Add 2 to B.
    Array B: {2}
    k: 1

    Iteration 2: i = 1

    Current Element (A[1]): 3
    Found: false
    Inner Loop: Check B[0] (which is 2).
    Action: Add 3 to B.
    Array B: {2, 3}
    k: 2

    Iteration 3: i = 2

    Current Element (A[2]): 10
    Found: false
    Inner Loop: Check B[0] (2) and B[1] (3).
    Action: Add 10 to B.
    Array B: {2, 3, 10}
    k: 3

    Iteration 4: i = 3

    Current Element (A[3]): 12
    Found: false
    Inner Loop: Check B[0] (2), B[1] (3), and B[2] (10).
    Action: Add 12 to B.
    Array B: {2, 3, 10, 12}
    k: 4
    */

    std::cout << "Repeated elements after deletion: ";
    for (int i = 0; i < k; i++)
    {
        std::cout << B[i] << " "; // Added curly braces for clarity
    }
    std::cout << std::endl; // Added newline for better output formatting
}

// C++ Program to Merge Two Arrays.
void merge_twoArray()
{
    int A[5] = {0, 1, 2, 3, 4};
    int n = sizeof(A) / sizeof(A[0]); // Num of elements in the array A

    int B[5] = {4, 6, 7, 8, 9};
    int m = sizeof(B) / sizeof(B[0]); // Num of elements in the array B

    int C[10]; // Array to store the merge two arrays
    int k = 0; // Index for array C

    int i = 0, j = 0; // Index for arrays A and B

    /*// Merging the two arrays
    // while loop that continues until one of the arrays is fully traversed*/
    while (i < n && j < m)
    {
        if (A[i] < B[j])
        {
            // Check for duplicates before adding
            bool isDuplicate = false;
            for (int x = 0; x < k; x++)
            {
                if (C[x] == A[i])
                {
                    isDuplicate = true;
                    break;
                }
            }
            if (!isDuplicate)
            {
                C[k++] = A[i];
            }
            i++;
        }
        else
        {
            // Check for duplicates before adding
            bool isDuplicate = false;
            for (int x = 0; x < k; x++)
            {
                if (C[x] == B[j])
                {
                    isDuplicate = true;
                    break;
                }
            }
            if (!isDuplicate)
            {
                C[k++] = B[j];
            }
            j++;
        }
    }

    // If there are remaining elements in A
    while (i < n) 
    {
        bool isDuplicate = false;
        for (int x = 0; x < k; x++)
        {
            if (C[x] == A[i])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            C[k++] = A[i];
        }
        i++;
    }

    // If there are remaining elements in B
    while (j < m)
    {
        bool isDuplicate = false;
        for (int x = 0; x < k; x++)
        {
            if (C[x] == B[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            C[k++] = B[j];
        }
        j++;
    }

    // Output original both arrays (A and B)
    std::cout << "The elements of the array A: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "The elements of the array B: ";
    for (int i = 0; i < m; i++)
    {
        std::cout << B[i] << " ";
    }
    std::cout << std::endl;

    // Output the merged array
    std::cout << "Merged both array: ";
    for (int x = 0; x < k; x++)
    {
        std::cout << C[x] << " ";
    }
    std::cout << std::endl;
}

// C++ Program to Find Sum and Product of Array Elements.
void sum_productArray()
{
    int A[5] = {1, 3, 5, 7, 9};
    int n = sizeof(A) / sizeof(A[1]); // Num of elements of the Array A
    int sum = 0, product = 1;
    
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        product *= A[i];
    }

    std::cout << "The sum of the Array elements is: " << sum << std::endl;
    std::cout << "The product of the Array elements is: " << product << std::endl;
}

// C++ Program to Print the Element at a Given Position.
void given_position()
{
    char A[10] = {"Hola2,%Mj"};
    int n = sizeof(A) / sizeof(A[1]);
    int pos; // position of the element for find

    std::cout << "\nEnter the position (1 to " << n << "): ";
    std::cin >> pos;

    // Validate the position
    if (pos < 1 || pos > n) 
    {
        std::cout << "Invalid position! Please enter a position between 1 and " << n << ".\n";
        return; // Exit the function if the position is invalid
    }

    // Print the element at the given position (adjusting for zero-based index)
    std::cout << "Element at position " << pos << " is: " << A[pos - 1] << std::endl; // pos - 1 for zero-based index
}

/* Info below:
// C++ Program to Implement Parallel Array.
// A group of parallel arrays (also known as
// structure of arrays or SoA) is a form of
// implicit data structure that uses multiple
// arrays to represent a singular array of records.
// Info from: https://www.geeksforgeeks.org/dsa/parallel-array/
*/
void parallel_array()
{
    const int numEstudiantes = 3;
    std::string nombres[numEstudiantes] = {"Ana", "Luis", "Carlos"};
    int edades[numEstudiantes] = {20, 22, 21};
    float notas[numEstudiantes] = {8.5, 9.0, 7.5};

    for (int i = 0; i < numEstudiantes; i++) 
    {
        std::cout << "Estudiante " << (i + 1) << ":\n";
        std::cout << "Nombre: " << nombres[i] << "\n";
        std::cout << "Edad: " << edades[i] << "\n";
        std::cout << "Nota: " << notas[i] << "\n";
        std::cout << "-------------------\n";
    }
}

// C++ Program to Implement Sorted Array.
void sorted_array()
{
    int A[5] = {64, 34, 25, 12, 22};
    int n = sizeof(A) / sizeof(A[1]);

    int B[5];
    int m = sizeof(B) / sizeof(B[1]);

    // Bubble sort algorithm
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (A[j] > A[j + 1]) 
            {
                // Swap A[j] and A[j + 1]
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    /* Step by step example below:
    // Take an array of numbers "5 1 4 2 8", and sort the array from
    // lowest number to greatest number using bubble sort.
    // In each step, elements written in bold are being compared. 
    // Three passes will be required;

    -First Pass
    ( 5 1 4 2 8 ) → ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1.
    ( 1 5 4 2 8 ) → ( 1 4 5 2 8 ), Swap since 5 > 4
    ( 1 4 5 2 8 ) → ( 1 4 2 5 8 ), Swap since 5 > 2
    ( 1 4 2 5 8 ) → ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.
    
    -Second Pass
    ( 1 4 2 5 8 ) → ( 1 4 2 5 8 )
    ( 1 4 2 5 8 ) → ( 1 2 4 5 8 ), Swap since 4 > 2
    ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
    ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )

    // Now, the array is already sorted, but the algorithm does
    // not know if it is completed. The algorithm needs one
    // additional whole pass without any swap to know it is sorted.

    -Third Pass
    ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
    ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
    ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
    ( 1 2 4 5 8 ) → ( 1 2 4 5 8 )
    */

    // Output the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}

// C++ Program to Illustrate use of ValArray.
// Use valarray library and introduced in C++ 98 
void ilustrate_valarray()
{
    // Initializing valarray
    std::valarray<int> varr = {10, 2, 20, 9, 30, 25};

    // Display largest element of the valarray
    std::cout << "The largest element of valarray is: ";
    std::cout << varr.max() << std::endl;

    // Display smallest element of the valarray
    std::cout << "The smallest element of valarray is: ";
    std::cout << varr.min() << std::endl;
    
    // Display the size of the valarray
    std::cout << "The size of the valarray is: ";
    std::cout << varr.size() << std::endl;
}

int main()
{
    ilustrate_valarray();
    return 0;
}