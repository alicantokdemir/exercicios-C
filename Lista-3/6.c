#include <stdlib.h>
#include <stdio.h>

/**
 * A amplitude de uma relação de números reais é a diferença entre o maior e o menor valor da relação. Por exemplo, a amplitude de 5, 7, 15, 2, 23, 21, 3, 6 é 23-2=21. Elabore um programa em C recebe uma relação de números e forneça a sua amplitude.
*/

int main()
{
    int vetorTmn = 10;
    int meuVetor[vetorTmn], i, oMaior, oMenor;

    // temos que inicializar primeiro
    printf("Vetor[%d] valor: ", 0);
    scanf("%d", &meuVetor[0]);
    oMaior = meuVetor[0];
    oMenor = meuVetor[0];

    for (i = 1; i < vetorTmn; i++)
    {
        printf("Vetor[%d] valor: ", i);
        scanf("%d", &meuVetor[i]);

        if (oMaior < meuVetor[i])
        {
            oMaior = meuVetor[i];
        }

        if (oMenor > meuVetor[i])
        {
            oMenor = meuVetor[i];
        }
    }

    printf("\nA amplitude do relacao e %d\n", oMaior - oMenor);

    return 0;
}