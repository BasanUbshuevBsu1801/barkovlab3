#include <stdio.h>
#include <math.h>

void print(int n, int k)
{
	double result = 0;
	int c = 0;
	{int i = 0;
	if (i < n - 1)
	{
		do
		{
			result = pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)));
			if (i == c * k)
			{
				c++;
				++i;
				continue;
			}
			else
			{
				printf(" Result: %f\n", result);
			}
			++i;

		} while (i < n - 1);
	}
	}
}
