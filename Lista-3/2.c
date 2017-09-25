#include <stdio.h>
#include <stdlib.h>

/**
** Elabore um programa em C que declare um vetor de 30 posições e preencha todas as suas posições por meio do teclado e mostre o conteúdo do vetor.
*/

int main()
{
    int vetorTmn = 30;
    int meuVetor[vetorTmn], i;

    for (i = 0; i < vetorTmn; i++)
    {
        printf("Entre um numero inteiro para preencher vetor[%d]: ", i);
        scanf("%d", &meuVetor[i]);
    }

    for (i = 0; i < vetorTmn; i++)
    {
        printf("%d", meuVetor[i]);
    }

    printf("\n");

    return 0;
}