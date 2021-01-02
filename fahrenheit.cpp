// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Program converts celsius to fahrenheit

#include <iostream>
#include <string>


void fahrenheit() {
    // Function converts celsius to fahrenheit

    std::string celsius_string;
    int celsius;
    double temperature_in_fahrenheit;

    std::cout << "I convert celsius into fahrenheit!" << std::endl;

    while (true) {
        // Input
        std::cout << "Enter a temperature (ºC): ";
        std::cin >> celsius_string;

        try {
            celsius = std::stoi(celsius_string);
            break;
        } catch (std::invalid_argument) {
            std::cout << "This isn't a valid input" << std::endl;
        }
    }

    temperature_in_fahrenheit = celsius * (9.0 / 5) + 32;

    std::cout << "The fahrenheit conversion is "
    << temperature_in_fahrenheit << "ºF" << std::endl;
}

int main() {
    // Runs fahrenheit()

    fahrenheit();
}
