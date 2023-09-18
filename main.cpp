#include <iostream>
#include "MyComplex.h"

//cmake -G "MinGW Makefiles" ../

int main()
{
    std::cout << "Beginning of program... " << std::endl;

    char op;
    MyComplex num1, num2, result;

    std::cout << "Enter an operator (+, -, *): ";
    std::cin >> op;

    std::cout << "\nEnter the first complex number (real imag): ";
    std::cin >> num1.Real >> num1.Imag;
    std::cout << "\nThe first complex number : "; 
    num1.print();

    std::cout << "\nEnter the second complex number (real imag): ";
    std::cin >> num2.Real >> num2.Imag;
    std::cout << "\nThe second complex number : "; 
    num2.print();

    std::cout << "\n----------------------------------" << std::endl;
    
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        default:
            std::cout << "Error: Invalid operator";
            return 0;
    }
    std::cout << "Result: ";
    result.print();
    return 0;
}