/*************************************************************************
Exercício 3
 
Escreva um algoritmo que ofereça ao usuário um menu com três opções de 
escolha (1, 2 ou 3) até que uma delas seja escolhida.

**************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void) {
  
int opcao;
  
  do{
    printf("\nEscolha uma opção: ");
    printf("\n1. Opcao 1 ");
    printf("\n2. Opcao 2 ");
    printf("\n3. Opcao 3");
    
    printf("\n\nOpcao: ");
    scanf("%d", &opcao);
    
  } while(opcao < 1 || opcao > 3);
  
  switch(opcao)
  {
    case 1: 
      break;
    
    case 2: 
      break;
    
    case 3: 
      break;
    
    default: 
      break;
  }
  
  return 0;
}
