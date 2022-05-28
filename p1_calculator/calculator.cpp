#include <iostream>

namespace calculations{
    float add(float num1, float num2){
        return num1 + num2;
    }
    float sub(float num1, float num2){
        return num1 - num2;
    }
    float mult(float num1, float num2){
        return num1 * num2;
    }
    float div(float num1, float num2){
        return num1 / num2;
    }
    int mod(int num1, int num2){
        return num1 % num2;
    }
}

int main(int argc, char* argv[]){
    char op = ' ';

    float num1 = 0;
    float num2 = 0;

    std::cout << "Enter the required calculation operator (+, -, *, /, %): ";
    std::cin >> op;

    std::cout << "Enter your first number: ";
    std::cin >> num1;
    std::cout << "Enter your second number: "; 
    std::cin >> num2;

    switch(op){
        case '+':
            std::cout << "Addition Result: " << calculations::add(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << "Subtraction Result: " << calculations::sub(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << "Multiplication Result: " << calculations::mult(num1, num2) << std::endl;
            break;
        case '%':
            std::cout << "Modulus Result: " << calculations::mod(num1, num2) << std::endl;
            break;
        default:
            std::cout << "Enter a valid number";
    }

    /*std::cout << "Addition Result: " << calculations::add(num1, num2) << std::endl;
    std::cout << "Subtraction Result: " << calculations::sub(num1, num2) << std::endl;
    std::cout << "Multiplication Result: " << calculations::mult(num1, num2) << std::endl;
    std::cout << "Modulus Result: " << calculations::mod(num1, num2) << std::endl;*/
}