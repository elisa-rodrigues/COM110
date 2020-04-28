// Autora : Elisa de Cássia S. Rodrigues
// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

/*

Exercicio 5

Quantos segundos existem em x minutos? Escreva um programa que receba uma quan-
tidade de minutos e imprima quantos segundos existem.

*/

#include <stdio.h>

int main(void) {

  int minutos, segundos;

  printf("Digite uma quantidade de minutos: ");
  scanf("%d", &minutos);

  segundos = 0;

  for(int i=0; i<minutos; i++){
    segundos = segundos + 60;
  }

  printf("%d minutos = %d segundos", minutos, segundos);

  return 0;
}
