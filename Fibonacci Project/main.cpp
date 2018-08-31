#include <cassert>
#include <iostream>


int Fibonacci(int index)
{
	if (index < 1)
	{
		return 0;
	}
	
	int first = 0;
	
	if (index == 1)
	{
		return first;
	}
	
	int second = 1;

	if (index == 2)
	{
		return second;
	}
	
	int next = 0;

	for (int i = 3; i <= index; i++)
	{
		next = first + second;
		first = second;
		second = next;
	}

	return next;
}

int main()
{
	int result = Fibonacci(0);
	assert(result == 0);

	result = Fibonacci(1);
	assert(result == 0); //Tests to see if the return value from function 'Fibonacci' is equal to users selection. 

	result = Fibonacci(2);
	assert(result == 1);

	result = Fibonacci(3);
	assert(result == 1);

	result = Fibonacci(4);
	assert(result == 2);

	result = Fibonacci(10);
	assert(result == 34);
	return 0;
}