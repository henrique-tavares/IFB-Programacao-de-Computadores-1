#include <stdio.h>
#include <stdlib.h>

double fatorial(int n)
{
    return (n > 1) ? n * fatorial(n-1) : 1;
}

int main()
{
    int n;

    do
    {
        printf("\nDigite um inteiro positivo: ");
        scanf("%i", &n);
        getchar();
        system("clear");

    } while (n < 0);

    if (n > 15) printf("\nFatorial de %i = %e\n\n", n, fatorial(n));

    else printf("\nFatorial de %i = %.0lf\n\n", n, fatorial(n));

    return 0;
}