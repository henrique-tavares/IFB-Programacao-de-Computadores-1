#include <stdio.h>
#include <math.h>
#include "funcoes.h"

double fatorial(int n)
{
    double x = 1;

    for (int i = 2; i <= n; i++)
    {
        x *= i; //calculando o fatorial
    }

    return x; //retornando o fatorial
}

double f_de_x(int n, double a[], double x) 
{
    double soma = 0;

    for (int i = 0; i <= n; i++)
    {
        soma += a[i] * pow(x, i); //calculando o valor do polinômio
    }

    return soma; // retornando o valor calculado
}

int f_de_x_taylor(int n, double at[], double x, double xf)
{
    double soma = 0;

    for (int i = 0; i <= n; i++)
    {
        soma += (at[i] * pow(x, i)) / fatorial(i); //calculando os polinomios de taylor de indice i + 1

        printf("%i %lf %lf\n", i + 1, soma, xf); //printando o indice e os valores do poloinômio de taylor e do polinômio original

        if (fabs(soma - xf) <= 0.001) //comparando a precisão do polinômio de taylor
            return 0;
    }

    return 0;
}

void vetor_taylor(int n, double a[], double x, double xf)
{
    double at[7];

    for (int i = 0; i <= n; i++)
    {
        at[i] = a[i]; //copiando os coeficientes para um outro vetor
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            at[i] *= j; //multiplicando os coeficientes pelos fatoriais de seus graus
        }
    }

    f_de_x_taylor(n, at, x, xf); //chamada da função para calcular os polinômios de taylor e fazer a comparação
}