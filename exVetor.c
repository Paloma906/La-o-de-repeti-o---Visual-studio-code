#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{

setlocale(LC_ALL, ""); //para aceitar acentos.

int i, numeros[3];
char nomes[3][250]; // o primeiro colchete √© quantas posi√ßoes o vetor tem e o segundo colchete indica quantos caracteres aceita.


for (i = 0; i < 3; i++)
{

    printf("Digite o %d™ numero: ", i+1);
    gets(nomes[i]);

}

printf("\n");

for (i=0; i<3; i++){
    printf("%d∫ nome: %s \n", i+1, nomes[i]);
}

return 0;
}