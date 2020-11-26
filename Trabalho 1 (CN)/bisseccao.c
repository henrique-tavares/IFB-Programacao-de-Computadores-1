#include <stdio.h>
#include <stdlib.h>
#include <math.h> //necessário usar a flag -lm no momento da compilação
#include "funcoes.h" //contém as funções utilizadas no código
#define iteracoes 10000

int main()
{
    int n;
    double a[7], l, r, m;

    scanf("%i", &n); //lendo o grau do polinômio
    getchar();

    for (int i = 0; i <= n; i++)
    {
        scanf("%lf", &a[i]); //lendo os coeficientes do polinômio
        getchar();
    }

    scanf("%lf", &l); //lendo o ponto incial do intervalo
    getchar();
    scanf("%lf", &r); //lendo o ponto final do intervalo
    getchar();

    for (long int i = 0; i <= iteracoes; i++)
    {

        m = l + ((r-l)/2);

        if (fabs(f_de_x(n, a, m)) <= 0.0001) //comparando a precisão da raiz
        {
            printf("\n%lf\n\n", m); //printando a raiz encontrada
            return 0;
        }

        if ((f_de_x(n, a, m) * f_de_x(n, a, l)) < 0) //verificando se a raiz está na segunda metade do intervalo
        {
            r = m; //atualizando o ponto final do intervalo de acordo com a condição acima
        }
        
        else //caso a raiz não esteja na segunda metade do intervalo
        {
            l = m; //atualizando o ponto inicial do intervalo de acordo com a condição acima
        }

        if (i == iteracoes)
        {
            printf("raiz nao encontrada\n"); //caso a raiz não seja encontrada
        }

    }

    return 0;
}