#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double m, r, invest;

    scanf ("%lf", &m);
    scanf ("%i", &n);
    scanf ("%lf", &r);

    r = r/100;

    invest = m*pow((1+r),n);

    printf ("%.2lf\n", invest);
    return 0;
}