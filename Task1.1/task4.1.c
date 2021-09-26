#include <math.h>

int findFirstElement(double eps)
{
    int result_i = 0;
    for (int i = 0; fabs(pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)))) > eps; i++)
    {
        if (fabs(pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)))) > eps)
        {
            result_i = i;
        }
        else
        {
            break;
        }
    }
    return ++result_i;
}
