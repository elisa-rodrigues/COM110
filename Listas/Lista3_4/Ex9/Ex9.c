// Autora : Elisa de Cássia S. Rodrigues
// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

/*

Faça um programa que imprima na tela a mensagem de saudação a seguir, usando para
isso uma estrutura de repetição.
#######################
#                     #
#                     #
#   SEJA BEM-VINDO    #
# 		      #
#                     #
#######################

*/


#include<stdio.h>

int main()
{
  float velocidade_veiculo, velocidade_via;
  char continuar;

  for(int i=1; i<=7; i++)
  {
    for(int j=1; j<=20; j++)
    {
      if(i==1 || i==7){
        printf("#");
      }else if(i==4){
        if(j==1 || j==20){
          printf("#");
        }else{
          printf("  SEJA BEM-VINDO  ");
          j = 19;
        }   
      }else{
        if(j==1 || j==20){
          printf("#");
        }else{
          printf(" ");
        }
      }
    }
    printf("\n");  
  }
  return 0;
}
