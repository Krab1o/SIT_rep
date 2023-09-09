#include <iostream>

void FibFunction(int n)
{
	int pPrevious = 0;
	int previous = 1;
	std::cout << pPrevious << '\n' << previous << '\n';	
	int currentValue;	

	for (int i = 2; i < n; i++)
	{
		currentValue = pPrevious + previous;
		pPrevious = previous;
		previous = currentValue;
		std::cout << currentValue << '\n';
	}
}

int main()
{
	FibFunction(10);
	return 0;
}
