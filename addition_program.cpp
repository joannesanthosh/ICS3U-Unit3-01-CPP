// Copyright (c) 2022 Joanne Santhosh All rights reserved
//
// Created by: Joanne Santhosh
// Created on: Sept 2022
// This program adds two numbers together

#include <cmath>
#include <iostream>

int main() {
    // This function adds two numbers together
    int firstNumber;
    int secondNumber;
    double sumOfTwoNumbers;

    // input
    std::cout << "Enter the first number (integer): ";
    std::cin >> firstNumber;
    std::cout << "Enter the second number (integer): ";
    std::cin >> secondNumber;

    // process
    sumOfTwoNumbers = firstNumber + secondNumber;

    // output
    std::cout << "" << std::endl;
    std::cout << "The sum is " << sumOfTwoNumbers;
    std::cout << "\nDone." << std::endl;
}
