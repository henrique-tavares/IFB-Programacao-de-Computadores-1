#include <stdio.h>
#include "lz77encode.h"
#define true 1
#define false 0

void compress(char *str, int k)
{
    int pos,         // variável para posição em relação a maior substring a ser usada
        tam_maior,   // tamanho da maior substring a ser usada
        tam,         // tamanho da atual da substring para comparação
        pos_aux,     // salvando a posição da atual substring relativa à janela
        indice = 0,  // posição em que se encontra na string dada pelo usuário
        i_aux,       // indice auxiliar para a posição da substring atual
        end = false; // para sinalizar se ocorreu o fim da string com o '\0' e adicioná-lo caso contrário

    //-------------------------------------------------|Primeira Tríade|-------------------------------------------------//
    printf("(-1,0,%c)", *str); // printando a primeira tríade

    str++;
    indice++;
    //-------------------------------------------------------------------------------------------------------------------//

    //----------------------------------------------|Algorítimo de compressão|-------------------------------------------//
    while (*str) // percorrendo a string, atuando como ponto de inicio para a compressão
    {

        // resetando a variavel de comparação dos tamanhos das subtrings da janela
        tam_maior = 0;

        // resetando a posição do primeiro caractere da substring da janela relativo ao ponto de inicio
        pos = 0;

        // percorrendo a janela de tamanho k para encontrar substring
        for (int i = indice - 1; i >= (indice - k) && i >= 0; i--)
        {
            // caso um caractere da janela seja igual ao ponto de inicio
            if (*(str - indice + i) == *(str))
            {
                tam = 0;
                i_aux = i;

                // percorrendo a substring da janela e a string a partir do ponto de inicio enquanto eles forem iguais
                for (int j = 0; *(str - indice + i_aux + j) == *(str + j); j++)
                {
                    // salvando o índice do caractere inicial da substring da janela
                    if (j == 0) 
                    {
                        pos_aux = -(-indice + i_aux + j);
                    }

                    // caso tenha o caractere seguinte coincida com o caractere incial da substring
                    if ((-indice + i_aux + j) >= 0)
                    {
                        i_aux = i - j;
                    }

                    tam++;
                }

                // caso a subtring encontrada seja maior que a anterior, ou seja a primeira
                if (tam > tam_maior)
                {
                    tam_maior = tam;
                    pos = pos_aux;
                }
            }
        }
        // saltando para o caractere seguinte a substring comprimida
        str += tam_maior;
        // salvando o indice do caractere acima
        indice += tam_maior;
        //---------------------------------------------------------------------------------------------------------------//

        //-------------------------------------------|Printando a tupla atual|-------------------------------------------//
        
        // caso seja o elemento final
        if (*str == '\0')
        {
            printf("(%i,%i,\\0)", pos, tam_maior);
            end = true;
        }
        else
        {
            printf("(%i,%i,%c)", pos, tam_maior, *str);
        }
        //---------------------------------------------------------------------------------------------------------------//

        // percorrendo a string e implementado a posição
        str++;
        indice++;
    }

    if (end == false) //caso o elemento final não tenha aparecido normalmente
    {
        printf("(0,0,\\0)");
    }
    putchar('\n');
}