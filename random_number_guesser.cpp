// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: October 2019
// This program gets user to guess a number
// with user input

#include <iostream>
#include <cstdlib>
#include <string>
int rand();

int main() {
    std::string integer_as_string;
    int integer_as_number;


    while (true) {
        // input
        std::cout << "Guess a number between 0-9: ";
        std::cin >> integer_as_string;
        try {
            integer_as_number = std::stoi(integer_as_string);
            if (integer_as_number == (rand() % 10) + 1) {
                std::cout << "You won, you guessed the number" << std::endl;
                break;
            } else {
                (integer_as_number != (rand() % 10) + 1);
                std::cout << "Wrong, try again" << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "Not an integer" << std::endl;
        }
    }
}
