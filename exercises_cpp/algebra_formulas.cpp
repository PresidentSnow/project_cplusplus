#include <iostream>
#include <string> // Allow use string tasks
#include <cmath> // Library wiht mathematical tasks

/* Info about the folder below:
// Folder for manage the cpp exercises.
// From: https://www.examples.com/maths/math-formulas.html
*/

void recycle_nums(float &a, float &b, float &c)
{
    std::cout << "Introduce the number for the letter a: ";
    std::cin >> a;
    std::cout << "\n";
    std::cout << "Introduce the number for the letter b: ";
    std::cin >> b;
    std::cout << "\n";
    std::cout << "Introduce the number for the letter c: ";
    std::cin >> c;
    std::cout << "\n";
}

// a² – b² = (a – b)(a + b)
void formula_1(float a, float b)
{
    std::cout << "\nLet's calculate this formula: a² - b² = (a - b)(a + b)\n";

    std::cout << "The result is: " << pow(a,2) - pow(b,2) << " = " << (a - b) * (a + b) << std::endl;
}

// (a + b)² = a² + 2ab + b²
void formula_2(float a, float b)
{
    std::cout << "\nLet's calculate this formula: (a + b)² = a² + 2ab + b²\n";

    std::cout << "The result is: " << pow(a + b,2) << " = " << pow(a,2) + 2 * a * b + pow(b,2) << std::endl;
}

// a²+ b² = (a + b)² – 2ab
void formula_3(float a, float b)
{
    std::cout << "\nLet's calculate this formula: a²+ b² = (a + b)² - 2ab\n";

    std::cout << "The result is: " << pow(a,2) + pow(b,2) << " = " << pow(a + b,2) - 2 * a * b << std::endl;
}

// (a – b)² = a² – 2ab + b²
void formula_4(float a, float b)
{
    std::cout << "\nLet's calculate this formula: (a - b)² = a² - 2ab + b²\n";

    std::cout << "The result is: " << pow(a - b,2) << " = " << pow(a,2) - 2 * a * b + pow(b,2) << std::endl;
}

// (a + b + c)² = a² + b² + c² + 2ab + 2bc + 2ca
void formula_5(float a, float b, float c)
{
    std::cout << "\nLet's calculate this formula: (a + b + c)² = a² + b² + c² + 2ab + 2bc + 2ca\n";

    std::cout << "The result is: " << pow(a + b + c,2) << " = " 
    << pow(a,2) + pow(b,2) + pow(c,2) + 2 * a * b + 2 * b * c + 2 * c * a << std::endl;
}

// (a – b – c)² = a² + b² + c² – 2ab + 2bc – 2ca


// (a + b)³ = a³ + 3a²b + 3ab² + b³


// (a – b)³ = a³ – 3a²b + 3ab² – b³


// a³ – b³ = (a – b)(a² + ab + b²)


// a³ + b³ = (a + b)(a² – ab + b²)


// (a + b)⁴ = a⁴ + 4a³b + 6a²b² + 4ab³ + b⁴


// (a – b)⁴ = a⁴ – 4a³b + 6a²b² – 4ab³ + b⁴


// a⁴– b⁴ = (a – b)(a + b)(a² + b²)


// (aᵐ)(aⁿ) = aᵐ⁺ⁿ


// (ab)ᵐ = aᵐbᵐ


// (aᵐ)ⁿ = aᵐⁿ

int main ()
{
    // function initializes a and b, calls recycle_num to get user 
    // input, and then calls formula_1 to perform the calculation.
    float a, b, c;

    // Call the recycle_num function to get inputs
    recycle_nums(a, b, c);

    // Call the formula's function's to perform the calculation
    formula_1(a, b);
    formula_2(a, b);
    formula_3(a, b);
    formula_4(a, b);
    formula_5(a, b, c);
    return 0;
}