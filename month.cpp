// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: October 23, 2023
// This program is used to show numbers represented as months

#include <iostream>

int main() {
    // declare variables
    int monthNumber;

    // get the month number
    std::cout << "This program shows numbers represented as months";
    std::cout << " (ex. 1 represents January).";
    std::cout<< " Enter a number : ";
    std::cin >> monthNumber;

    // use a switch case to show what numbers the months are represented by
    switch (monthNumber) {
        case 1 :
            std::cout << monthNumber << " represents January. \n";
            break;

        case 2:
            std::cout << monthNumber << " represents February. \n";
            break;

        case 3:
            std::cout << monthNumber << " represents March. \n";
            break;

        case 4:
            std::cout << monthNumber << " represents April. \n";
            break;

        case 5:
            std::cout << monthNumber << " represents May. \n";
            break;

        case 6:
            std::cout << monthNumber << " represents June. \n";
            break;

        case 7:
            std::cout << monthNumber << " represents July. \n";
            break;

        case 8:
            std::cout << monthNumber << " represents August. \n";
            break;

        case 9:
            std::cout << monthNumber << " represents September. \n";
            break;

        case 10:
            std::cout << monthNumber << " represents October. \n";
            break;

        case 11:
            std::cout << monthNumber << " represents November. \n";
            break;

        case 12:
            std::cout << monthNumber << " represents December. \n";
            break;

        // tell the user to enter an int between 1 and 12 if they did otherwise
        default :
        std::cout << "Please enter an integer between 1 and 12. \n"
        << std::endl;
    }
}
