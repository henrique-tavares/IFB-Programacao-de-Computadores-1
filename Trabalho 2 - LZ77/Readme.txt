Para facilitar a compilação criei uma biblioteca chamada "lz77lib.a" com os arquivos "lz77encode.c" e "lz77decode.c".

Portanto, para compilar basta digitar o seguinte comando no terminal: "gcc <proragama>.c lz77lib.a -o <programa>".
Onde "<programa>" é o programa (sem a extensão: ".c" ou ".cpp"), no qual se deseja implementar a biblioteca.

Além claro, de incluir as bibliotecas: "lz77encode.h" e "lz77decode.h".

Para que tudo ocorra sem erros, o comando deverá ser executado numa pasta que contenha pelo menos os segintes arquivos:
"<programa>.c", "lz77lib.a", "lz77decode.h" e "lz77encode.h".
