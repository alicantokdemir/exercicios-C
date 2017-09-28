#include <stdio.h>
#include <stdlib.h>

/**
 * Elabore um programa em C que receba e armazene num vetor as notas escolares de uma turma, calcule e mostre a média da turma. O programa deve também determinar e mostrar quantos alunos obtiveram nota maior que a média da turma.
*/

int main()
{
    int nAlunos = 10, nAlunosMaiorDoQueMedia, i;
    float notas[nAlunos], notasTotal, mediaTurma;

    for (i = 0; i < nAlunos; i++)
    {
        printf("\nEntre nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        notasTotal += notas[i];
    }

    mediaTurma = notasTotal / nAlunos;

    for (i = 0; i < nAlunos; i++)
    {
        if (notas[i] > mediaTurma)
        {
            nAlunosMaiorDoQueMedia++;
        }
    }

    printf("\nMedia Turma: %.2f, qtd alunos que obtiveram nota maior do que media: %d\n", mediaTurma, nAlunosMaiorDoQueMedia);

    return 0;
}