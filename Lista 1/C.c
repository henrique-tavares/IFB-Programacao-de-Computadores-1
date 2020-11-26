#include <stdio.h>
#define iteracoes 10000

int main()
{
    long double pi = 0;

    for (int n=0; n<iteracoes; n++)
    {
        pi += 2.0/((4*n+1)*(4*n+3));
        //printf ("\n%lf %i\n", pi, n);
    }

    pi = pi*4;

    printf("%.10Lf\n", pi);
    return 0;
}