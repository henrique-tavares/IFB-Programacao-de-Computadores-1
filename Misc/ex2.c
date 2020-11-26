#include <stdio.h>
#include <stdlib.h>
#define tam 10000
#define true 1
#define false 0

int main(int argc, char *argv[])
{
    int n, primos[tam], primo = 3, busca, i = 0;
    primos[0] = 2;

    n = atoi(argv[1]);

    while (i < n)
    {
        busca = false;
        for (int j = i; j >= 0; j--)
        {
            if ((primo % primos[j]) == 0)
            {
                busca = true;
            }
        }

        if (busca == true)
        {
            primo++;
        }

        else if (busca == false)
        {
            primos[i + 1] = primo;
            i++;
            //printf("\n%i", primo);
        }
    }

    putchar('\n');

    /*for (int i = 0; i < n; i++)
    {
        printf("%i ", primos[i]);
    }*/

    printf("\n\n");

    return 0;
}