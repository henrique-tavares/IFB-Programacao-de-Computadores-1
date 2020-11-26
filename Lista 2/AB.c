#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double x, soma = 0, media = 0, des;

    scanf ("%i", &n);

    for (int i=0; i<n; i++)
    {
        scanf ("%lf", &x);
        soma += x*x;
        media += x;
    }
    
    media = media/n;
    media = media*media;
    soma = soma/n;

    des = soma-media;
    des = sqrt(des);

    printf ("%lf\n", des);
    return 0;
}