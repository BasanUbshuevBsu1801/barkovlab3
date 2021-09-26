#include <math.h>
double summ2(double eps)
{
    double result = 0;
    {int i = 0;
    if (fabs(pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)))) > eps);
    {
        do
        {
            result += pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)));
                i++;
        } while (fabs(pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)))) > eps);
            i++;
    }
    }
    return result;
}
