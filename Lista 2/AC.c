#include <stdio.h>
#define tam 100000

int main()
{
    double A[tam], B[tam], soma = 0;
    int n;

    scanf ("%i", &n);

    for (int i=0; i<n; i++)
    {
        scanf ("%lf", &A[i]);
    }

    for (int i=0; i<n; i++)
    {
        scanf ("%lf", &B[i]);
    }

    for (int i=0; i<n; i++)
    {
        soma += A[i] * B[i];
    }

    printf ("%lf\n", soma);

    return 0;
}