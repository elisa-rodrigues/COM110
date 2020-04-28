// Autora : Elisa de Cássia S. Rodrigues
// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

/*************************************************************************
Exercício 2
 
Escreva um algoritmo que leia um inteiro positivo n e imprima o 
resultado das potências de 3, de 0 até n (3^0, 3^1, 3^2, ..., 3^n). 

**************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void) {
  
  int n, resultado, potencia;  
  
  printf("\n\nDigite n: ");
  scanf("%d", &n);
  
  for(potencia=0; potencia<=n; potencia++)
  {
      resultado = pow(3, potencia);
      printf(" 3^%d = %d \n", potencia, resultado);
  }
  
  return 0;
}
