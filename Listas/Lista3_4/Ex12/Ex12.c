// Autora : Elisa de Cássia S. Rodrigues
// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

// Exercício 12
/*
Escreva um programa usando três estruturas de repetição ENQUANTO que imprima:
(a) Os números de 1 até 20.
(b) Os números de 20 até 1.
(c) Somente os números ímpares de 1 a 20.
*/

#include<stdio.h>

int main()
{
   int n;

   n = 1;
   while(n<=20)
   {
	printf("%d ", n);
        n = n + 1;
   }

   printf("\n\n"); 
   n = 20;
   while(n>=1)
   {
	printf("%d ", n);
	n = n - 1;
   }

   printf("\n\n"); 
   n = 1;
   while(n<=20)
   {
	printf("%d ", n);
        n = n + 2;
   }

   printf("\n\n"); 

   return 0;
}
