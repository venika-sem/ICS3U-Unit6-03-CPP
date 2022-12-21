// Copyright (c) 2022 Venika Sem All rights reserved

// Created by: Venika Sem
// Created on: Dec 2022
/* This program generates ten numbers and find the smallest*/


#include <array>
#include <iostream>
#include <random>

template <size_t N>
int findingNumber(std::array<int, N> randomList) {
    // This function finds the smallest number
    int smallestNumber;

    for (int counter = 0; counter < randomList.size(); counter++) {
        if (randomList[counter] < smallestNumber) {
            smallestNumber = randomList[counter];
        }
    }
    return smallestNumber;
}

int main() {
    std::array<int, 10> generatedRandomList;
    int randomNumber;
    int smallestNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 100);

    std::cout << "Here is a list of random numbers:" << std::endl;
    std::cout << "" << std::endl;

    for (int counter = 0; counter < 10; counter++) {
        randomNumber = idist(rgen);
        generatedRandomList[counter] = randomNumber;
        std::cout << "The random number " << counter + 1
        << " is:" << randomNumber << std::endl;
    }
    smallestNumber = findingNumber(generatedRandomList);

    std::cout << "" << std::endl;
    std::cout << "The smallest number is " << smallestNumber << std::endl;

    std::cout << "\nDone." << std::endl;
}
