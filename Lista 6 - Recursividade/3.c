#include <stdio.h>
#include <stdlib.h>

#define int_max 2147483647
#define int_min -2147483647

int bits(int n)
{
    return (n/2 > 0) ? 1 + bits(n/2) : 1;
}

int main()
{
    int n;

    do
    {
        printf("\nDigite um inteiro positivo: ");
        scanf("%d", &n);
        getchar();

        if (n > int_max || n < int_min) printf("\nERRO! Fora dos limites de um inteiro de 32 bits\n");

    } while (n > int_max || n < int_min);

    printf("\nQuantidade de bits = %i\n\n", bits(n));

    return 0;
}