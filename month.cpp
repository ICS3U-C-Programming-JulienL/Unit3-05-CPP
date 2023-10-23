// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: October 23, 2023
// This program is used to show numbers represented as months

#include <iostream>

int main() {
    // declare variables
    int monthNumber;

    // get the user integer
    std::cout << "This program shows numbers represented as months.";
    std::cout << "ex. 1 represents January.";
    std::cout<< "Enter a number :";
    std::cin >> monthNumber;

    // use a switch case to show what numbers the months are represented by
    switch (monthNumber) {
        case 1 :
            std::cout << monthNumber << "represents January.";
            break;

        case 2:
            std::cout << monthNumber << "represents February.";
            break;

        case 3:
            std::cout << monthNumber << "represents March.";
            break;

        case 4:
            std::cout << monthNumber << "represents April.";
            break;

        case 5:
            std::cout << monthNumber << "represents May.";
            break;

        case 6:
            std::cout << monthNumber << "represents June.";
            break;

        case 7:
            std::cout << monthNumber << "represents July.";
            break;

        case 8:
            std::cout << monthNumber << "represents August.";
            break;

        case 9:
            std::cout << monthNumber << "represents September.";
            break;

        case 10:
            std::cout << monthNumber << "represents October.";
            break;

        case 11:
            std::cout << monthNumber << "represents November.";
            break;

        case 12:
            std::cout << monthNumber << "represents December.";
            break;

        // tell the user to enter an int between 1 and 12 if they did otherwise
        std::cout << "Please enter a number between 1 and 12." << std::endl;
    }
}
