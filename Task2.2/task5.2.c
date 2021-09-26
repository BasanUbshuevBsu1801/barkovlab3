#include <math.h>


int findFirstNegativeElement(double eps)
{
    int i = 0;
    while ((fabs(pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i))) > eps) && ((pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)))) < 0)) - 1);
    {
        i++;
    }

    return ++i;
}
