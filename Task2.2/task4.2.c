#include <math.h>

int findFirstElement(double eps)
{
    int i = 0;
    while (fabs(pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)))) > eps)
    {
        if (fabs(pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)))) > eps)
        {
            i++;
        }
        else
        {
            break;
        }
    }
    return i;

}
