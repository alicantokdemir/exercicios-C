#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
** Elabore um programa em C que preencha um vetor com 15 números inteiros e verifique a existência de elementos iguais a 30, mostrando as posições em que apareceram.
*/

int main()
{
    int vetorTmn = 15;
    int i, meuVetor[vetorTmn];
    // precisamos disso para criar um semente, isso serve para numeros criados sejam diferentes cada segundo/execuçao
    srand(time(NULL));

    for (i = 0; i < vetorTmn; i++)
    {
        // preencha com um número aleatório entre [28 - 32]
        meuVetor[i] = (rand() % 5) + 28;
        printf("vetor[%d]: %d\n", i, meuVetor[i]);
    }

    for (i = 0; i < vetorTmn; i++)
    {
        if (meuVetor[i] == 30)
        {
            printf("igual a 30, item posicao: %d\n", i);
        }
    }

    return 0;
}