#include <stdio.h>
#include <stdlib.h>

// para aceitar acentuação  #include <locale.h>
// setlocale (LC ALL, ""); Colocar depos do "main"   depois apertar em ISO8..
int main(){

//4. Escrever um programa de computador que leia 5  números inteiros e, ao final, apresente a soma de  todos os números lidos.

int i;
int numero;
int soma;
for (i=0; i < 5; i++){
  printf("Digite um numero: \n");
  scanf("%d",&numero);
  soma += numero;
  

}

printf("SOMA DOS NUMEROS: %d\n",soma);


return 0;
}



