#include <stdio.h>
#include <stdlib.h>

// 2. Escreva um algoritmo que leia 5 valores inteiros e ao final  mostre:
// a) quantos números são pares;
// b) quantos números são impares;

int main()
{

    int i, numero;
    int contadorPar=0, contadorImpar = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o numero: \n");

        scanf("%d", &numero);
        if (numero % 2 == 0)
        {
            contadorPar++;
        }
        else
        {
            contadorImpar++;
        }
    }

    printf("Quantidade de numeros pares: %d\n", contadorPar);
    printf("Quantidade de numeros impares: %d\n", contadorImpar);

    return 0;
}