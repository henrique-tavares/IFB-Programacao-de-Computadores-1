#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lz77decode.h"

void decompress(char *compressed_str)
{
    // estrutura da tripla (x,y,c) -- sendo 'c' o char a ser colocado na string final

    int pos,             // variável "x" da tripla  
        tam,             // variável "y" da tripla
        tam_d,           // tamanho da string final = strlen
        tam_total = 1;   // variável de realocação

    char letra,          // variável "c" da tripla
        *decom = NULL;   // string com o resultado da descompressão

    decom = malloc(1 * sizeof(char)); // iniciando a alocação da string

    while (*compressed_str)           // percorrendo a string
    {
        if (*compressed_str == '(')   // verificar primeiro elemento da tripla "x"
        {
            compressed_str++;
            
            //----------------------------------|Lendo as entradas|----------------------------------//

            // caso seja um valor negativo, ou seja, a primeira posição
            if (*compressed_str == '-')
            {
                pos = -1;
            }

            // obtendo o valor de "x" da tripla
            else
            {
                pos = atoi(compressed_str);
            }


            // procurando a próxima virgula, para leitura do parametro "y"
            while (*compressed_str != ',')
            {
                compressed_str++;
            }
            compressed_str++;


            tam = atoi(compressed_str);                       // obtendo o valor de "y" da tripla            
            tam_total += tam + 1;                             // contando o tamanho atual da string
            decom = realloc(decom, tam_total * sizeof(char)); // atualizando o tamanho da string final
            

            // procurando a próxima virgula, para ler o caractere da tripla "c"
            while (*compressed_str != ',')
            {
                compressed_str++;
            }
            compressed_str++;


            // converte a representação "\0" para '\0'
            if (*compressed_str == '\\' && *(compressed_str + 1) == '0')
            {
                letra = '\0';
            }

            // salvando o caractere "c" da tripla
            else
            {
                letra = *compressed_str; 
            }
            compressed_str++;
            //---------------------------------------------------------------------------------------//


            //-----------------------------|Algorítimo de descompressão|-----------------------------//

            tam_d = strlen(decom);

            // Primeira tripla
            if (pos == -1)
            {
                *decom = letra;
                *(decom + 1) = '\0';
            }
            // Caso seja apenas a adição de uma letra
            else if (pos == 0) 
            {
                *(decom + tam_d) = letra;
                *(decom + tam_d + 1) = '\0';
            }
            // adicionando substring segundo os parametros da tripla
            else
            {
                int i, // inicio da substring a ser replicada
                    j; // tamanho da replicação

                for (i = tam_d - pos, j = 0; j < tam; i++, j++)
                {
                    // resetando o início da string quando "x" passa do tamanho de "y"
                    if (i == tam_d)
                    {
                        i = tam_d - pos;
                    }
                    *(decom + j + tam_d) = *(decom + i);
                }

                // adicionando "c" da tripla ao final do algorítimo
                *(decom + tam_d + tam) = letra;

                // adicionando o '\0' ao final da string, para que tudo ocorra bem
                *(decom + tam_d + tam + 1) = '\0';
            }
            //---------------------------------------------------------------------------------------//
        }
        compressed_str++;
    }

    //------------------------------------|Printando o resultado|------------------------------------//
    tam_d = strlen(decom);
    
    for (int i = 0; i < tam_d; i++)
    {
        printf("%c", *(decom + i));
    }
    putchar('\n');
    //printf("\n%i %li\n", tam_total, strlen(decom));
    //-----------------------------------------------------------------------------------------------//

    free(decom); //liberando o ponteiro
}