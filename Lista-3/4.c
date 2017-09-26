#include <stdlib.h>
#include <stdio.h>

/**
 * Elabore um programa em C que declare um vetor de 10 posições e preencha todas as suas posições por meio do teclado. Em seguida o algoritmo deve contar e mostrar a quantidade de números pares contidas no vetor.
*/

int main()
{
    int vetorTmn = 10;
    int meuVetor[vetorTmn], i, numPares;

    for (i = 0; i < vetorTmn; i++)
    {
        printf("Vetor[%d] valor: ", i);
        scanf("%d", &meuVetor[i]);
        if (meuVetor[i] % 2 == 0)
        {
            numPares++;
        }
    }

    printf("\n%d numeros sao pares.\n", numPares);

    return 0;
}