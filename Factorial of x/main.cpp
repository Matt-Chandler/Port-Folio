#include <iostream>
#include <cassert>

int Factorial(int operand)
{
    if (operand < 0)
    {
        return 0;
    }

    if (operand <= 1)
    {
        return 1;
    }

    int factorial = 1;

    for (int index = 2; index <= operand; index++)
    {
        factorial *= index;
    }

    return factorial;
}

void TestNFactorial(int operand, int expectedFactorial)
{
    int actualFactorial = Factorial(operand);
    assert(expectedFactorial == actualFactorial);
    std::cout << operand << "! = " << actualFactorial << std::endl;
}

int main()
{
    TestNFactorial(-1, 0);
    TestNFactorial(0, 1);
    TestNFactorial(1, 1);
    TestNFactorial(2, 2);
    TestNFactorial(3, 6);
    TestNFactorial(4, 24);
    TestNFactorial(5, 120);
    TestNFactorial(6, 720);
    TestNFactorial(7, 5040);
    TestNFactorial(8, 40320);
    TestNFactorial(9, 362880);
    TestNFactorial(10, 3628800);

    return 0;
}