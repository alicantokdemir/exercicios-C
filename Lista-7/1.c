#include <stdio.h>
#include <stdlib.h>

/**
 * A prefeitura de uma cidade fez uma pesquisa entre seus habitantes coletando dados sobre
    salário, idade e sexo. Elabore um programa em C que leia esses dados para 20 pessoas,
    calcule e mostre os itens abaixo. Utilize structs.
    a) A média de salário da população;
    b) A média de idade da população;
    c) O maior salário;
    d) O percentual de mulheres com salário superior a R$ 1.000,00.
*/

struct Pessoa
{
    float salario;
    int idade;
    char sexo;
};

int main()
{
    int nHabitantes = 3, i, ch;
    float totalIdade = 0, totalMulheres = 0, totalMulheresSalarioSuperior1000 = 0;
    float totalSalario = 0, oMaiorSalario;
    struct Pessoa habitantes[nHabitantes];

    for (i = 0; i < nHabitantes; i++)
    {
        printf("Entre o salario do habitante %d: ", i + 1);
        scanf("%f", &habitantes[i].salario);
        totalSalario += habitantes[i].salario;
        if (!oMaiorSalario || oMaiorSalario < habitantes[i].salario)
        {
            oMaiorSalario = habitantes[i].salario;
        }

        printf("Entre o idade do habitante %d: ", i + 1);
        scanf("%d", &habitantes[i].idade);

        totalIdade += habitantes[i].idade;

        printf("Entre o sexo do habitante 'F' ou 'M' %d: \n", i + 1);
        while ((ch = getchar()) != '\n' && ch != EOF)
            ; // deleta o espaco
        scanf("%c", &habitantes[i].sexo);

        if (habitantes[i].sexo == 'F')
        {
            totalMulheres++;
            if (habitantes[i].salario > 1000)
            {
                totalMulheresSalarioSuperior1000++;
            }
        }
    }

    printf("\nA media de salario da populacao: %.2f\n", totalSalario / nHabitantes);
    printf("\nA media de idade da populacao: %.2f\n", totalIdade / nHabitantes);
    printf("\nO maior salario: %.2f\n", oMaiorSalario);
    printf("\nO percentual de mulheres com salário superior a R$ 1.000,00: %% %.2f\n", totalMulheres ? ((totalMulheresSalarioSuperior1000 / totalMulheres) * 100) : 0);

    return 0;
}