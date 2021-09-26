#include <math.h>

int findFirstNegativeElement(double eps)
{
    int result_i = 0;
    for (int i = 0; (fabs(pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i)))) > eps) && ((pow(-1, i) * ((i + 1) / (pow(3, i) + pow(2, i))) < 0)); ++i)
    {
        result_i = i;
    }
    return ++result_i;
}
