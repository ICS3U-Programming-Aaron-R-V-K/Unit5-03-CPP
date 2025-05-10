// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: May 9, 2025
// This program uses a function to calculate
// the percentage mark based on the user grade level
// It returns -1 if the input is invalid.

#include <iostream>
#include <string>


int calcMark(std::string level) {
    // IF statement for each level using if...else if...else statements
    // returning the corresponding value for the level
    if (level == "4+")
        return 98;
    else if (level == "4")
        return 90;
    else if (level == "4-")
        return 83;
    else if (level == "3+")
        return 78;
    else if (level == "3")
        return 75;
    else if (level == "3-")
        return 71;
    else if (level == "2+")
        return 68;
    else if (level == "2")
        return 65;
    else if (level == "2-")
        return 61;
    else if (level == "1+")
        return 58;
    else if (level == "1")
        return 55;
    else if (level == "1-")
        return 51;
    else if (level == "0")
        return 50;
    // else statement returning -1 for Invalid input
    else
        return -1;
}

int main() {
    // Get user input as a string
    std::string levelAsStr;
    std::cout << "Enter your grade level: ";
    std::cin >> levelAsStr;

    // Call the function and store the value returned in a variable
    int calcGrade = calcMark(levelAsStr);

    // If statement for any Invalid input
    if (calcGrade == -1) {
        std::cout << "Invalid input" << std::endl;
    // Displaying the grade
    } else {
        std::cout << "Your grade is " << calcGrade << std::endl;
    }
}
