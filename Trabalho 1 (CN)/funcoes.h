#ifndef FUNCOES_H
#define FUNCOES_H

//função que calcula o fatorial de um inteiro
double fatorial(int n);

//função que calcula o valor do polinômio escolhido para um x qualquer
double f_de_x(int n, double a[], double x);

//função que calcula o valor polinômio de taylor até o grau n, para um x qualquer
//e compara o resultado com o do polinômio original
int f_de_x_taylor(int n, double at[], double x, double xf);

//função que calcula os coeficientes dos polinomios de taylor
void vetor_taylor(int n, double a[], double x, double xf);

#endif