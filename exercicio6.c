#include <stdio.h>
#include <stdlib.h>

// 8. Faça um algoritmo que leia uma quantidade não
// determinada de números positivos. Calcule:
// a) quantidade de números pares e ímpares;
// b) média de valores pares

// O número que encerrará a leitura será zero.

int main()
{

    int numero;
    int contadorPar = 0, contadorImpar = 0;
    float mediaPar, somaPar;
    do
    {
        printf("Digite um numero positivo:");
        scanf("%d",&numero);

        

        if (numero % 2 == 0)
        {
            contadorPar++;
            somaPar += numero;
        }
        else
        {
            contadorImpar++;
        }

    } while (numero != 0);     // "!=" é símbolo para diferente

    mediaPar = somaPar / contadorPar;

   

    printf("Quantidade de numeros pares: %d\n", contadorPar);
    printf("Quantidade numeros impares: %d\n", contadorImpar);
    printf("A media dos valores pares: %.2f\n", mediaPar);

    return 0;
}