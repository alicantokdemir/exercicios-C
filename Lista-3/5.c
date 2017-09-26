#include <stdlib.h>
#include <stdio.h>

/**
 * Elabore um programa em C que declare um vetor de 20 posições e preencha todas as suas posições por meio do teclado. Em seguida o programa deve encontrar e mostrar o maior valor contido no vetor.
*/

int main()
{
    int vetorTmn = 20;
    int meuVetor[vetorTmn], oMaior, i;

    for (i = 0; i < sizeof(meuVetor) / sizeof(int); i++)
    {
        printf("Vetor[%d] valor: ", i);
        scanf("%d", &meuVetor[i]);
        if (!oMaior || oMaior < meuVetor[i])
        {
            oMaior = meuVetor[i];
        }
    }

    printf("\n%d e o maior numero dentro do vetor.\n", oMaior);

    return 0;
}