/*

Escreva um programa que leia vários números inteiros até que se digite um número nega-
tivo. Em seguida, imprima o maior e o menor dentre os números lidos. Use a estrutura
de repetição FAÇA...ENQUANTO 

*/

#include<stdio.h>

int main()
{
  int n, menor=-1, maior=-1;
  
  do
  {
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    if(n >= 0){
      
      if(menor < 0){
        
        menor = n;
        maior = n;
      
      }else{
        
        if(n < menor){
          menor = n;      
        }
      
        if(n > maior){
          maior = n;
        }
      }
    }
    
  }while(n >= 0);
  
  if(menor < 0){
    
    printf("Nenhum número foi digitado!");

  }else{
  
    printf("Maior número digitado: %d \n", maior);
    printf("Menor número digitado: %d \n", menor);
    
  }
  
  return 0;
}
