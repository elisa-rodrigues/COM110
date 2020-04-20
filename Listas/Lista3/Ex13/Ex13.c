/*

Escreva um programa que leia dois números inteiros e imprima todos os números inteiros
entre os dois números lidos. Use a estrutura de repetição PARA.

*/

#include<stdio.h>

int main()
{
   int n1, n2;

   printf("Digite o primeiro número inteiro: ");   
   scanf("%d", &n1);

   printf("\nDigite o segundo número inteiro: ");   
   scanf("%d", &n2);

   for(int i=n1; i<=n2; i++)
   {
	printf("%d ", i);
   }

   printf("\n");  
 
   return 0;
}
