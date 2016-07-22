#include <iostream>
#include <cstdio>

int main()
{
	const int UPPER_BOUND=1000;
	int total=0;

	for(int i=0; i<UPPER_BOUND; i++)
	{
		if((i % 3 == 0) || (i % 5 == 0))
		{
			total+=i;
		}
	}

std::cout << "Total of all numbers below " << UPPER_BOUND << " that are multiples of 3 and 5: " << total;
	std::getchar();
}