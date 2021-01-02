// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Program prints integers in the range of 1000 and 2000

#include <iostream>
#include <string>


void fahrenheit() {
    // Function converts celcius fahrenheit

    std::string celsius_string;
    int celsius;
    double temperature_in_fahrenheit;

    std::cout << "I convert celcius into farenheit!" << std::endl;

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
