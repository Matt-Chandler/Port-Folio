#include <cassert>
#include <iostream>


int Fibonacci(int index)
{
	int First = 0;
	int Second = 1;
	int Third = 0;

	for (int i = 0; i < index; i++)
	{
		Third = First + Second;
		std::cout << First << "+" << Second << "=" << Third << std::endl;
		First = Second;
		Second = Third;
	}
	return 0;
}

int main()
{
	int result = Fibonacci(8);

	//assert(result == 2);

	return 0;
}