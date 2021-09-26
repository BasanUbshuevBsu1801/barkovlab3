#include <math.h>

int findFirstElement(double eps)
{
    int i = 0;
    if (fabs(pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)))) > eps)
    {
        do
        {
            if (fabs(pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)))) > eps)
            {
                ++i;
            }
            else
            {
                break;
            }
        } while (fabs(pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)))) > eps);
    }
    return i;
}
