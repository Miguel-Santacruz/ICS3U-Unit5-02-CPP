// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: May 2022
// This program finds area of a triangle

#include <iostream>
#include <string>

void calculateArea(float length, float height) {
    // calculate area
    float area;

    // process
    area = length * height / 2;

    // output
    std::cout << "The area of this triangle is " << area << " cm²" << std::endl;
}


main() {
    // This function gets length and height
    std::string lengthAsString;
    std::string heightAsString;
    float length;
    float height;

    // input
    std::cout << "Enter the base length of the triangle (cm): ";
    std::cin >> lengthAsString;
    std::cout << "Enter the height of the triangle (cm): ";
    std::cin >> heightAsString;
    try {
        length = std::stof(lengthAsString);
        height = std::stof(heightAsString);
        std::cout << std::endl;
        if (length < 0 || height < 0) {
            std::cout << "Invalid input" << std::endl;
        } else {
            calculateArea(length, height);
        }
    } catch (std::invalid_argument) {
        std::cout << "Those are not numbers" << std::endl;
    }
}
