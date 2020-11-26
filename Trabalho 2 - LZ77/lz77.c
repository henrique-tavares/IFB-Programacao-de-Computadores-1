#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lz77encode.h" //contém a função compress
#include "lz77decode.h" //contém a função decompress
#define true 1
#define false 0

int main()
{
    char *str = NULL;
    int tam, k = 6, i0;

    str = malloc(10002 * sizeof(char)); //alocando dinamicamente 10002 caracteres

    fgets(str, 10002, stdin);
    tam = strlen(str);

    if (*(str + tam - 1) == '\n') //retirando o '\n' da string
    {
        *(str + tam - 1) = '\0';
    }

    //--------------------------------------|Descompressão|--------------------------------------//
    if (*str == '(')
    {
        decompress(str); //chamando a função de descompressão
    }
    //-------------------------------------------------------------------------------------------//


    //---------------------------------------|Compressão|----------------------------------------//
    else
    {
        // for (int i = 0; *(str + i) != '\0'; i++)
        // {
        //     //guardando a posição do final da string a ser compactada
        //     if (*(str + i) == '\\' && *(str + i + 1) == '0')
        //     {
        //         i0 = i;
        //     }

        //     //salvando o tamanho da janela k
        //     if ((*(str + i) == 'k' || *(str + i) == 'K') && *(str + i + 2) == '=' && (int)*(str + i + 4) >= 48 && (int)*(str + i + 4) <= 57)
        //     {
        //         k = atoi(str + i + 4);
        //     }
        // }

        // //reduzindo a string original, para a string a ser compactada
        // for (int i = tam-2; i >= i0; i--) 
        // {
        //     *(str + i) = '\0';
        // }

        compress(str, k); //chamando a função de compressão
    }
    //-------------------------------------------------------------------------------------------//

    free(str); //liberando o ponteiro

    return 0;
}