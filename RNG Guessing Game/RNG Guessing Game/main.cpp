#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Header.h"

int main()
{
    int userInput = 0;

    int targetNumber = generateNumber(); //Call generate number function and assign target number the return value.

    std::cout << "A random number between 1 and 20 has been generated\nEnter a number to make a guess!" << std::endl;

    guessNumber(userInput, targetNumber);

    return 0;
}

int generateNumber()
{
    srand(time(NULL));
    int targetNumber = (rand() % 20 + 1);

    return targetNumber;
}

void guessNumber(int userInput, int targetNumber)
{
    while (userInput != targetNumber)
    {
        std::cin >> userInput;

        if (userInput == targetNumber)
        {
            std::cout << "You guessed correctly! The answer was " << targetNumber << std::endl;
            break;
        }

        if (userInput < targetNumber)
        {
            std::cout << "Too low, try and guess higher!" << std::endl;
        }

        if (userInput > targetNumber)
        {
            std::cout << "Too high, try and guess lower!" << std::endl;
        }
    }
}