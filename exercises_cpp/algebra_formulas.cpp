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
    std::cout << "\nLet's calculate the 1st formula: a² - b² = (a - b)(a + b)\n";

    std::cout << "The result is: " << std::pow(a, 2) - std::pow(b, 2) << " = " 
    << (a - b) * (a + b) << std::endl;
}

// (a + b)² = a² + 2ab + b²
void formula_2(float a, float b)
{
    std::cout << "\nLet's calculate the 2nd formula: (a + b)² = a² + 2ab + b²\n";

    std::cout << "The result is: " << std::pow(a + b, 2) << " = " 
    << std::pow(a, 2) + 2 * a * b + std::pow(b, 2) << std::endl;
}

// a²+ b² = (a + b)² – 2ab
void formula_3(float a, float b)
{
    std::cout << "\nLet's calculate the 3rd formula: a²+ b² = (a + b)² - 2ab\n";

    std::cout << "The result is: " << std::pow(a, 2) + std::pow(b, 2) << " = " 
    << std::pow(a + b, 2) - 2 * a * b << std::endl;
}

// (a – b)² = a² – 2ab + b²
void formula_4(float a, float b)
{
    std::cout << "\nLet's calculate the 4th formula: (a - b)² = a² - 2ab + b²\n";

    std::cout << "The result is: " << std::pow(a - b, 2) << " = " 
    << std::pow(a, 2) - 2 * a * b + std::pow(b, 2) << std::endl;
}

// (a + b + c)² = a² + b² + c² + 2ab + 2bc + 2ca
void formula_5(float a, float b, float c)
{
    std::cout << "\nLet's calculate the 5th formula: (a + b + c)² = a² + b² + c² + 2ab + 2bc + 2ca\n";

    std::cout << "The result is: " << std::pow(a + b + c,2) << " = " 
    << std::pow(a, 2) + std::pow(b, 2) + std::pow(c, 2) + 2 * a * b + 2 * b * c + 2 * c * a << std::endl;
}

// (a – b – c)² = a² + b² + c² – 2ab + 2bc – 2ca
void formula_6(float a, float b, float c)
{
    std::cout << "\nLet's calculate the 6th formula: (a - b - c)² = a² + b² + c² - 2ab + 2bc - 2ca\n";

    std::cout << "The result is: " << std::pow(a - b - c, 2) << " = " 
    << std::pow(a, 2) + std::pow(b, 2) + std::pow(c, 2) - 2 * a * b + 2 * b * c - 2 * c * a << std::endl;
}

// (a + b)³ = a³ + 3a²b + 3ab² + b³
void formula_7(float a, float b, float c)
{
    std::cout << "\nLet's calculate the 7th formula: (a + b)³ = a³ + 3a²b + 3ab² + b³\n";
    std::cout << "The result is: " << std::pow(a + b, 3) << " = " 
    << std::pow(a, 3) + 3 * std::pow(a, 2) * b + 3 * a * std::pow(b, 2) + std::pow(b, 3) << std::endl;
}

// (a – b)³ = a³ – 3a²b + 3ab² – b³
void formula_8(float a, float b, float c)
{
    std::cout << "\nLet's calculate the 8th formula: (a - b)³ = a³ - 3a²b + 3ab² - b³\n";
    std::cout << "The result is: " << std::pow(a - b, 3) << " = "
    << std::pow(a, 3) - 3 * std::pow(a, 2) * b + 3 * a * std::pow(b, 2) - std::pow(b, 3) << std::endl;
}

// a³ – b³ = (a – b)(a² + ab + b²)
void formula_9(float a, float b, float c)
{
    std::cout << "\nLet's calculate the 9th formula: a³ - b³ = (a - b)(a² + ab + b²)\n";
    std::cout << "The result is: " << std::pow(a, 3) - std::pow(b, 3) << " = "
    << (a - b) * (std::pow(a, 2) + a * b + std::pow(b, 2)) << std::endl;
}

// a³ + b³ = (a + b)(a² – ab + b²)
void formula_10(float a, float b, float c)
{
    std::cout << "\nLet's calculate the 10th formula: a³ + b³ = (a + b)(a² - ab + b²)\n";
    std::cout << "The result is: " << std::pow(a, 3) + std::pow(b, 3) << " = "
    << (a + b) * (std::pow(a, 2) - a * b + std::pow(b, 2)) << std::endl;
}

// (a + b)⁴ = a⁴ + 4a³b + 6a²b² + 4ab³ + b⁴
void formula_11(float a, float b, float c)
{
    std::cout << "\nLet's calculate the 11th formula: (a + b)⁴ = a⁴ + 4a³b + 6a²b² + 4ab³ + b⁴\n";
    std::cout << "The result is: " << std::pow(a + b, 4) << " = "
    << 4 * std::pow(a, 4) * b + 6 * std::pow(a, 2) * std::pow(b, 2) + 
    4 * a * std::pow(b, 3) + std::pow(b, 4) << std::endl;
}

// (a – b)⁴ = a⁴ – 4a³b + 6a²b² – 4ab³ + b⁴
void formula_12(float a, float b, float c)
{
    std::cout << "\nLet's calculate 12th formula: (a - b)⁴ = a⁴ - 4a³b + 6a²b² - 4ab³ + b⁴\n";
    std::cout << "The result is: " << std::pow(a - b, 4) << " = "
    << std::pow(a, 4) - 4 * std::pow(a, 3) * b + 6 * std::pow(a, 2) * 
    std::pow(b, 2) - 4 * a * std::pow(b, 3) + std::pow(b, 4) << std::endl;
}

// a⁴– b⁴ = (a – b)(a + b)(a² + b²)
void formula_13(float a, float b, float c)
{
    std::cout << "\nLet's calculate the 13th formula: a⁴ - b⁴ = (a - b)(a + b)(a² + b²)\n";
    std::cout << "The result is: " << std::pow(a, 4) - std::pow(b, 4) << " = "
    << (a - b) * (a + b) * (std::pow(a, 2) + std::pow(b, 2)) << std::endl;
}

// (aᵐ)(aⁿ) = aᵐ⁺ⁿ
// instead of n, i will use b
// instead of m, i will use c
void formula_14(float a, float b, float c)
{
    std::cout << "\nLet's calculate the 14th formula: (aᵐ)(aⁿ) = aᵐ⁺ⁿ\n";
    std::cout << "The result is: " << (std::pow(a, c)) * (std::pow(a, b)) << " = "
    << std::pow(a, c + b) << std::endl;
}

// (ab)ᵐ = aᵐbᵐ
// instead m, i will use the c.
void formula_15(float a, float b, float c)
{
    std::cout << "\nLet's calculate the 15th formula: (ab)ᵐ = aᵐbᵐ\n";
    std::cout << "The result is: " << std::pow(a * b, c) << " = "
    << std::pow(a, c) * std::pow(b, c) << std::endl;
}

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
    formula_6(a, b, c);
    formula_7(a, b, c);
    formula_8(a, b, c);
    formula_9(a, b, c);
    formula_10(a, b, c);
    formula_11(a, b, c);
    formula_12(a, b, c);
    formula_13(a, b, c);
    formula_14(a, b, c);
    formula_15(a, b, c);
    return 0;
}