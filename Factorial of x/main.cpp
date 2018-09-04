#include <iostream>
#include <cassert>

int factorial(int factSel)
{
    std::cout << factSel << "! = ";
    if (factSel < 0)
    {
        return 0;
    }


    if (factSel == 0 || factSel == 1)
    {
        int result = 1;
        return result;
    }

    int result = 0;
    int index = 2;
    int factor = 1;

    for (int lpCount = 1; lpCount < factSel; lpCount++)
    {
        //Index * Factor = Result, Factor = Result
        result = (index * factor);
        factor = result; 
        index++;
    }

    return result;
}


int main()
{
    int answer = 0;

    answer = factorial(-1);
    assert(answer == 0);
    std::cout << answer << std::endl;

    answer = factorial(0);
    assert(answer == 1);
    std::cout << answer << std::endl;

    answer = factorial(1);
    assert(answer == 1);
    std::cout << answer << std::endl;

    answer = factorial(2);
    assert(answer == 2);
    std::cout << answer << std::endl;

    answer = factorial(3);
    assert(answer == 6);
    std::cout << answer << std::endl;

    answer = factorial(4);
    assert(answer == 24);
    std::cout << answer << std::endl;

    answer = factorial(5);
    assert(answer == 120);
    std::cout << answer << std::endl;

    answer = factorial(6);
    assert(answer == 720);
    std::cout << answer << std::endl;

    answer = factorial(7);
    assert(answer == 5040);
    std::cout << answer << std::endl;

    answer = factorial(8);
    assert(answer == 40320);
    std::cout << answer << std::endl;

    answer = factorial(9);
    assert(answer == 362880);
    std::cout << answer << std::endl;

    answer = factorial(10);
    assert(answer == 3628800);
    std::cout << answer << std::endl;

    return 0;
}