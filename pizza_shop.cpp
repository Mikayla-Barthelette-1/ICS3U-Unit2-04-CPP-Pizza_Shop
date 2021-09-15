// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program calculates the cost of a pizza

#include <iostream>
#include <iomanip>

int main() {
    // this function calculates the cost of a pizza
    const float RENT = 1;
    const float LABOR = 0.75;
    const float COST_PER_INCH = 0.5;
    const float HST = 0.13;

    float diameter;
    float sub_total;
    float total;

    // Input
    std::cout << "Enter the diameter of your pizza (inch): ";
    std::cin >> diameter;

    // Process
    sub_total = RENT + LABOR + (diameter * COST_PER_INCH);
    total = sub_total * (1 + HST);

    // Output
    std::cout << std::endl;
    std::cout << "The cost for the pizza is: $" << std::fixed
    << std::setprecision(2) << std::setfill('0') << total << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
