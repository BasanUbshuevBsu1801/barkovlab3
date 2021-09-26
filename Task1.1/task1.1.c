#include <math.h>

double summ(int n)
{
    double result = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        result = result + pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)));
    }
    return result;
}

