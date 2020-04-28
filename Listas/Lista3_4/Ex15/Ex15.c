// Autora : Elisa de Cássia S. Rodrigues
// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

// Exercício 15
/*
Escreva um programa que leia um número inteiro n>=2 e imprima um triângulo retângulo. Por exemplo, se n=3. (Dica: use laços aninhados.)
#
# #
# # #
*/


#include<stdio.h>

int main()
{
   int n;

   printf("Digite o número de linhas do triângulo: ");   
   scanf("%d", &n);

   for(int i=0; i<n; i++)
   {
      for(int j=0; j<=i; j++)
      {
         printf("#"); 
      }
      printf("\n");  	
   }

   return 0;
}
