// Autora : Elisa de Cássia S. Rodrigues
// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

// Exercício 1 
// Escreva um algoritmo que leia um inteiro positivo x e imprima o resultado das potências de x, de 0 até 10 (x^0, x^1, x^2, ..., x^10). 

#include <stdio.h>
#include <math.h>

int main(void) {
  
  int x, resultado, potencia;
          
  printf("Digite x: ");
  scanf("%d", &x);
  
  for(potencia=0; potencia<=10; potencia++)
  {
      resultado = pow(x, potencia);
      printf(" x^%d = %d \n", potencia, resultado);
  }
  
  return 0;
}
