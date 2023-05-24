#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//1. Escreva um algoritmo que pergunte ao usuário se deseja inserir  mais uma nota, se a resposta do usuário for “NÃO”, o programa  fará a média aritmética das notas informadas e mostrará a média  aritmética para o usuário. 
//Obs.: Use um contador dentro do laço de repetição para contar a  quantidade e iterações (loops).


int main(){
    
    float nota,soma;
    char resposta[50];
    float media;
    int contador;
    
    do
    {
        printf("digite a nota:\n");
        scanf("%f",&nota);

        fflush(stdin); // pra mais uma nota

        
        contador++;
        soma += nota;
        

        printf("Deseja digitar mais uma nota?");
        gets(resposta);

    } while (strcmp(resposta,"sim") ==0);
       
        media = soma/contador;
    
        printf("A media aritmetica: %.2f\n",media);

    return 0;
        



}