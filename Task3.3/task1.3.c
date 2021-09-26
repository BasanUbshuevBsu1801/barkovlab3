#include <math.h>

double summ(int n)
{
    double result = 0;
    {int i = 0;
    if (i < n - 1)
    {
        do
        {
            result += pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)));
            ++i;
        } while (i < n - 1);
    }
    }
    return result;
}

