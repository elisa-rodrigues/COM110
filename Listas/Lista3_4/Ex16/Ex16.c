// Autora : Elisa de Cássia S. Rodrigues
// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

// Exercício 16 
/* 
Faça um programa que receba dois números inteiros n1 e n2, calcule e imprima a tabuada
(de 0 até 10) de todos os números entre n1 e n2. Por exemplo, para n1 = 1 e n2 = 3, imprima:
1 x 0 = 0     2 x 0 = 0     3 x 0 = 0
1 x 1 = 1     2 x 1 = 2     3 x 1 = 3
1 x 2 = 2     2 x 2 = 4     3 x 2 = 6
1 x 3 = 3     2 x 3 = 6     3 x 3 = 9
1 x 4 = 4     2 x 4 = 8     3 x 4 = 12
1 x 5 = 5     2 x 5 = 10    3 x 5 = 15
1 x 6 = 6     2 x 6 = 12    3 x 6 = 18
1 x 7 = 7     2 x 7 = 14    3 x 7 = 21
1 x 8 = 8     2 x 8 = 16    3 x 8 = 24
1 x 9 = 9     2 x 9 = 18    3 x 9 = 27
1 x 10 = 10   2 x 10 = 20   3 x 10 = 30
*/

#include <stdio.h>

int main()
{
  int n1, n2;
  
  printf("Digite o primeiro número: ");
  scanf("%d", &n1);
  
  printf("Digite o primeiro número: ");
  scanf("%d", &n2);
  
  for(int i=n1; i<=n2; i++)
  {
    for(int j=0; j<=10; j++)
    {
      printf("%d x %d \n",i,j);
    }
    printf("\n");
  }  
  
  return 0;
}
