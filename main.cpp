//Replicate the game mastermind in a console application.
//Used classes to seperate actions that can be performed by Codemaker and Codebreaker players.

#include <iostream>
#include <array>

class Codebreaker
{
public:

    int score = 0;
    int attempts = 0;
    const char* name;

    std::array<int, 4> guessCode() //Codebreaker makes thier attempt to guess the code, the following function gathers thier inputs.
    {
        std::array<int, 4> inputCode;
        std::cout << "Enter 4 numbers as a guess.\n1:";
        std::cin >> inputCode[0];
        std::cout << "\n2:";
        std::cin >> inputCode[1];
        std::cout << "\n3:";
        std::cin >> inputCode[2];
        std::cout << "\n4:";
        std::cin >> inputCode[3];
        std::cout << "Your guess is:" << inputCode[0] << ", " << inputCode[1] << ", " << inputCode[2] << ", " << inputCode[3] << "\n(Press any key to continue)";
        std::cin.get();

        system("CLS");
        ++attempts;

        return inputCode;
    }
};

class Codemaker
{
public:

    int score = 0;
    int attempts = 0;
    const char* name;

    std::array<int, 4> createTargetCode() //Codemaker creates a code, the following function gathers thier inputs.
    {
        std::array<int, 4> targetCode;
        bool codeInvalid = true; //Array will be invalid by default because nothing has been entered yet.

        while (codeInvalid)
        {
            std::cout << "Enter 4 numbers to create a code.\n1:";
            std::cin >> targetCode[0];
            std::cout << "\n2:";
            std::cin >> targetCode[1];
            std::cout << "\n3:";
            std::cin >> targetCode[2];
            std::cout << "\n4:";
            std::cin >> targetCode[3];

            for (int i = 0; i <= 3; ++i)
            {
                if ((targetCode[i] >= 1) && (targetCode[i] <= 4))
                {
                    codeInvalid = false;
                }
                else
                {
                    std::cout << "\nThe numbers in your code must be between 1 and 4.\n\n";
                    codeInvalid = true;
                    break;
                }
            }
        }

        std::cout << "Your code is: " << targetCode[0] << ", " << targetCode[1] << ", " << targetCode[2] << ", " << targetCode[3] << "\n(Press any key to continue)";
        std::cin.get();
        system("CLS");
        return targetCode;
    }
};

void evaluateCode(std::array<int, 4> targetCode, std::array<int, 4> codeGuessed, int codebreakerAttempts, int codebreakerScore, int codemakerScore)
{
    if (targetCode != codeGuessed)
    {
        std::cout << "Lets see how close you were\n-1-    -2-    -3-    -4-\n";

        //Evaluate 1st Number
        if ((codeGuessed[0] == targetCode[0]) || (codeGuessed[0] == targetCode[1]) || (codeGuessed[0] == targetCode[2]) || (codeGuessed[0] == targetCode[3]))
        {
            std::cout << " ~";
        }
        else if ((codeGuessed[0] != targetCode[0]) || (codeGuessed[0] != targetCode[1]) || (codeGuessed[0] != targetCode[2]) || (codeGuessed[0] != targetCode[3]))
        {
            std::cout << " X";
        }

        //Evaluate 2nd Number
        if ((codeGuessed[1] == targetCode[0]) || (codeGuessed[1] == targetCode[1]) || (codeGuessed[1] == targetCode[2]) || (codeGuessed[1] == targetCode[3]))
        {
            std::cout << "      ~";
        }
        else if ((codeGuessed[1] != targetCode[0]) || (codeGuessed[1] != targetCode[1]) || (codeGuessed[1] != targetCode[2]) || (codeGuessed[1] != targetCode[3]))
        {
            std::cout << "      X";
        }

        //Evaluate 3rd Number
        if ((codeGuessed[2] == targetCode[0]) || (codeGuessed[2] == targetCode[1]) || (codeGuessed[2] == targetCode[2]) || (codeGuessed[2] == targetCode[3]))
        {
            std::cout << "      ~";
        }
        else if ((codeGuessed[2] != targetCode[0]) || (codeGuessed[2] != targetCode[1]) || (codeGuessed[2] != targetCode[2]) || (codeGuessed[2] != targetCode[3]))
        {
            std::cout << "      X";
        }

        //Evaluate 4th Number
        if ((codeGuessed[3] == targetCode[0]) || (codeGuessed[3] == targetCode[1]) || (codeGuessed[3] == targetCode[2]) || (codeGuessed[3] == targetCode[3]))
        {
            std::cout << "      ~";
        }
        else if ((codeGuessed[3] != targetCode[0]) || (codeGuessed[3] != targetCode[1]) || (codeGuessed[3] != targetCode[2]) || (codeGuessed[3] != targetCode[3]))
        {
            std::cout << "      X";
        }
    }

    if (targetCode == codeGuessed)
    {
        codebreakerScore =
    }
}

char endRound(const char* codemakerName, const char* codebreakerName, int codemakerScore, int codebreakerScore, int codebreakerAttempts)
{
    std::cout << "Congratulations, the codebreaker successfully guessed the code\n\n";
    codemakerScore += ();

    std::cout << "The current score is:\n" << codemakerName << ":" << codemakerScore << "\n" << codebreakerName << ":" << codebreakerScore << std::endl;

prompt:
    std::cout << "Would you like to have another game? (y/n)";

    char gameContinue;
    std::cin >> gameContinue;

    if (gameContinue != 'y' || 'n')
    {
        std::cout << "Your response must be either 'y' or 'n', for yes or no respectivly.\n\n";
        goto prompt;
    }
    return gameContinue;
}

int main()
{
    Codebreaker Codebreaker;
    Codemaker Codemaker;

    std::array<int, 4> targetCode = Codemaker.createTargetCode(); //Codemaker creates target code

    std::array<int, 4> codeGuessed = { 0, 0, 0, 0 };

    char gameContinue = 'y';

    while (gameContinue = 'y')
    {
        codeGuessed = Codebreaker.guessCode();
        evaluateCode(targetCode, codeGuessed, Codebreaker.attempts, Codebreaker.score, Codemaker.score);
        gameContinue = endRound(Codemaker.name, Codebreaker.name, Codemaker.score, Codebreaker.score, Codebreaker.attempts);

        if (gameContinue == 'n')
        {
            if (Codebreaker.score > Codebreaker.score)
            {
                std::cout << Codebreaker.name << " won the game!\n";
            }
            else
            {
                std::cout << Codemaker.name << " won the game!\n";
            }
            break;
        }
    }

    return 0;
}