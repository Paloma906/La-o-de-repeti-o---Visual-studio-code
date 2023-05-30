#include <stdio.h>
#include <stdlib.h>

// A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,  coletando dados sobre o salário e número de filhos. A prefeitura  deseja saber:
// a) total de famílias que responderam a pesquisa;
// b) média do salário da população;
// c) média do número de filhos;
// O final da leitura de dados se dará com a entrada de um salário negativo.

int main()
{

    float mediaSalario, salario, mediaFilho, somaFilho, somaSalario;
    float quantidadeFilhos, contadorSalario, contadorFilho, contadorFamilia;

    do
    {
        printf("Diga o seu salario:");
        scanf("%f", &salario);

        if (salario >= 0)
        {
            somaSalario += salario;

            printf("Diga quantos filhos tem:");
            scanf("%f", &quantidadeFilhos);
            somaFilho += quantidadeFilhos;

            contadorFamilia++;
        }

    } while (salario >= 0);

    mediaSalario = somaSalario / contadorFamilia;
    mediaFilho = somaFilho / contadorFamilia;

    printf("A media de filhos: %.2f\n", mediaFilho);
    printf("A media de salario: %.2f\n", mediaSalario);
    printf("Total de pessoas que responderam: %f", contadorFamilia);

    return 0;
}