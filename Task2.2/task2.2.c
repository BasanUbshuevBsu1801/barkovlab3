#include <math.h>

double summ2(double eps)
{
	double result = 0;
	{int i = 0;
	while (fabs(pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)))) > eps);
	{
		result += pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)));
		++i;
	}
	}
	return result;
}
