#include <iostream>
#include <string> // Allow use string tasks
#include <cmath> // Library wiht mathematical tasks
#include <algorithm> // perform modify ranges of data from data structures

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

    /* Iteration breakdown
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
int duplicate_element()
{
    int nums[10] = {2, 3, 10, 12, 5, 8, 2, 8, 9, 1};
    return 0;
}

// C++ Program to Merge Two Arrays.


// C++ Program to Find Sum and Product of Array Elements.


// C++ Program to Print the Element at a Given Position.


// C++ Program to Find Closest Pair of Points in an Array.


// C++ Program to Implement Bit Array.


// C++ Program to Implement Variable Length Array.


// C++ Program to Implement Parallel Array.


// C++ Program to Implement Sorted Array.


// C++ Program to Implement Sparse Array.


// C++ Program to Implement Suffix Array.


// C++ Program to Illustrate use of ValArray.


// C++ Program to Calculate Inner Product of Two Valarrays.



int main()
{
    largest_three();
    return 0;
}