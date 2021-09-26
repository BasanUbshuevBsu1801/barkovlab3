#include <math.h>

int findFirstNegativeElement(double eps)
{
    int i = 0;
    if ((fabs(pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i))) > eps) && ((pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)))) < 0)) - 1);
    {
        do
        {
            i++;
        } while ((fabs(pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i))) > eps) && ((pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)))) < 0)) - 1);
    }

    return i;
}
