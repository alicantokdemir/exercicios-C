#include <stdio.h>
#include <stdlib.h>

/**
** Elabore um programa em C que declare um vetor de 50 posições, preencha cada posição desse vetor com 0 (zero) e mostre o conteúdo do vetor.
*/

int main()
{
    int vetorTmn = 50;
    int meuVetor[vetorTmn], i;

    for (i = 0; i < vetorTmn; i++)
    {
        meuVetor[i] = 0;
    }

    for (i = 0; i < vetorTmn; i++)
    {
        printf("%d", meuVetor[i]);
    }

    printf("\n");

    return 0;
}