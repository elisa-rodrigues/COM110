// Autora : Elisa de Cássia S. Rodrigues
// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

/*
Escreva um programa que leia dois números reais: velocidade do veículo e velocidade máxima da via. 
Em seguida, calcule o percentual em que a velocidade do veículo ultrapassou a velocidade máxima da 
via e imprima o valor da multa que o motorista deverá pagar, com base na seguinte tabela:
(a) Velocidade igual ou menor que o limite permitido: "Não houve multa."
(b) Velocidade até 20% acima do permitido: "O valor da multa é R$ 85,13."
(c) Velocidade entre 20% e 50% acima do permitido: "O valor da multa é R$ 127,69."
(d) Velocidade acima de 50% do permitido: "O valor da multa é R$ 574,62"

*/


#include<stdio.h>

int main()
{
   float velocidade_veiculo, velocidade_via;
   int continuar;

   do{
      printf("Digite a velocidade do veículo: ");   
      scanf("%f", &velocidade_veiculo);

      printf("Digite a velocidade máxima da via: ");   
      scanf("%f", &velocidade_via);

      if(velocidade_veiculo <= velocidade_via){
        printf("Não houve multa.");

      }else if(velocidade_veiculo <= (velocidade_via + velocidade_via * 0.2)){
        printf("O valor da multa é R$ 85,13.");

      }else if(velocidade_veiculo <= (velocidade_via + velocidade_via * 0.5)){
        printf("O valor da multa é R$ 127,69.");

      }else{
        printf("O valor da multa é R$ 574,62.");

      }

      printf("\nDigite 0 para sair: ");   
      scanf("%d", &continuar);	

   }while(continuar != 0);
   
   return 0;
}
