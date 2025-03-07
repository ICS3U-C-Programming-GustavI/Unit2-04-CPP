// Copyright (c) 2025 Gustav I All rights reserved.
// Created by: Gustav I
// Created on: March 4, 2025
// This program calculates and displays the area and circumference of a circle
// with a fixed radius of 12 units.

#include <cmath>  // For M_PI
#include <iomanip>
#include <iostream>

int main() {
    // Fixed radius
    const int radius = 12;

    // Process
    const float area = M_PI * std::pow(radius, 2);  // Area = π * r^2
    const float circumference = 2 * M_PI * radius;  // Circumference = 2 * π * r

    // Output
    std::cout << std::fixed << std::setprecision(2);
    // Format to 2 decimal places
    std::cout << "\nThe area of your circle is " << area
              << " square units." << std::endl;
    std::cout << "The circumference of your circle is "
              << circumference << " units." << std::endl;

    return 0;
}
