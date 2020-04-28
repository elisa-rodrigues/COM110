// Autora : Elisa de Cássia S. Rodrigues
// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

/*
Exercicio 6

Escreva um programa que leia dois números reais e imprima o resultado das quatro
operações básicas (adição, subtração, multiplicação e divisão) sobre esses números.

*/

#include <stdio.h>

int main(void) {

  int n1, n2;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  printf("\nOperações básicas: ");
  for(int i=0; i<4; i++){
    if(i == 0)
      printf("\n %d + %d = %d", n1, n2, n1+n2);
    
    else if(i == 1)
      printf("\n %d - %d = %d", n1, n2, n1-n2);  

    else if(i == 2)
      printf("\n %d * %d = %d", n1, n2, n1*n2);  

    else if(i == 3){
      if(n2 != 0){
        printf("\n %d / %d = %d", n1, n2, n1/n2);
      }else{
        printf("\n Divisão por zero não é possível!");
      }
    }
  }

  return 0;
}
