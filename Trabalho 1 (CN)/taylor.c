#include <stdio.h>
#include <stdlib.h>
#include <math.h> //necessário usar a flag -lm no momento da compilação
#include "funcoes.h" //contém as funções utilizadas no código

int main()
{
    int n, q;
    double a[7], x[100], xf;

    scanf("%i", &n); //lendo o grau do polinômio
    getchar();

    for (int i = 0; i <= n; i++)
    {
        scanf("%lf", &a[i]); //lendo os coeficientes do polinômio
        getchar();
    }

    scanf("%i", &q); //lendo a quantidade de "x" que serão calculados

    for (int i = 0; i < q; i++)
    {
        scanf("%lf", &x[i]); //lendo os "x"
        getchar();
    }

    putchar('\n');
    for (int i = 0; i < q; i++)
    {
        xf = f_de_x(n, a, x[i]); //calculando o valor do polinomio para os "x"

        vetor_taylor(n, a, x[i], xf); //calculando os valores dos polinomios de taylor e comparando-os com o valor do polinômio original
        
        putchar('\n');
    }

    return 0;
}