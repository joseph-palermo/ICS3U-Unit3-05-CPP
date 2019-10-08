// Copyright (c) 2019 Joseph Palermo All rights reserved
//
// Created by: Joseph Palermo
// Created on: October 2019
// This program shows the user the month in relation to an integer

#include <iostream>
#include <string>

int main() {
    // This program shows the user the month in relation to an integer
    std::string monthNumberAsString;
    int monthAsInt;

    // input
    std::cout << "Write an integer (1-12): ";
    std::cin >> monthNumberAsString;

    monthAsInt = atoi(monthNumberAsString.c_str());


    // process
    switch (monthAsInt) {
        case 1 :
            std::cout << "The month is January!" << std::endl;
            break;
        case 2 :
            std::cout << "The month is February!" << std::endl;
            break;
        case 3 :
            std::cout << "The month is March!" << std::endl;
            break;
        case 4 :
            std::cout << "The month is April!" << std::endl;
            break;
        case 5 :
            std::cout << "The month is May!" << std::endl;
            break;
        case 6 :
            std::cout << "The month is June!" << std::endl;
            break;
        case 7 :
            std::cout << "The month is July!" << std::endl;
            break;
        case 8 :
            std::cout << "The month is August!" << std::endl;
            break;
        case 9 :
            std::cout << "The month is September!" << std::endl;
            break;
        case 10 :
            std::cout << "The month is October!" << std::endl;
            break;
        case 11 :
            std::cout << "The month is November!" << std::endl;
            break;
        case 12 :
            std::cout << "The month is December!" << std::endl;
            break;
        default :
            std::cout << "Please insert an integer (1-12)!" << std::endl;
    }
}
