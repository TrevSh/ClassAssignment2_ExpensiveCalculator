// ClassAssignment2_ExpensiveCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
 https://pisaucer.github.io/book-c-plus-plus/Beginning_Cpp_Through_Game_Programming.pdf
 
    Understanding Order of Operations
Just as in algebra, arithmetic expressions in Cþþ are evaluated from left to right.
But some operators have a higher precedence than others and are evaluated first,
regardless of position. Multiplication, division, and modulus have equal precedence, which is higher than the precedence level that addition and subtraction
share.
The next line of code provides an example to help drive this home. Because
multiplication has higher precedence than addition, you calculate the results of
the multiplication first. So the expression 7 þ 3*5 is equivalent to 7 þ 15, which
evaluates to 22.
If you want an operation with lower precedence to occur first, you can use
parentheses, which have higher precedence than any arithmetic operator. So in
the next statement, the expression (7 þ 3) * 5 is equivalent to 10 * 5, which
evaluates to 50.
*/

int main()
{
    std::cout << "7 + 3 = " << 7 + 3 << '\n';
    std::cout << "7 - 3 = " << 7 - 3 << '\n';
    std::cout << "7 * 3 = " << 7 * 3 << '\n';

    std::cout << "7 / 3 = " << 7 / 3 << '\n';
    std::cout << "7.0 / 3.0 = " << 7.0 / 3.0 << '\n';

    std::cout << "7 % 3 = " << 7 % 3 << '\n';

    std::cout << "7 + 3 * 5 = " << 7 + 3 * 5 << '\n';
    std::cout << "(7 + 3) * 5 = " << (7 + 3) * 5 << '\n';

    return 0;
}
