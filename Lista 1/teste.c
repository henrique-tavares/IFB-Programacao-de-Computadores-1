#include <stdio.h>
#include <math.h>
#define true 1
#define false 0
#define iteracoes 16

int main ()
{
    double x = 3;
    double x0 = 1;
    int i = 4; 
    for (int j=0; j<i; j++)
    {
        x0 *= x;
    }

    printf ("\n%lf\n", x0);

    return 0;
}