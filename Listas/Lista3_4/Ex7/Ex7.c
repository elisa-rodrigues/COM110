// Autora : Elisa de Cássia S. Rodrigues
// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

// Exercicio 7
/*
O índice de massa corporal (IMC) é utilizado para identicar o peso ideal de uma pessoa.
O cálculo do IMC é feito dividindo a massa pelo quadrado da altura. Escreva um programa
que, dada a massa e a altura de uma pessoa, imprima o valor do seu IMC.
*/

#include <stdio.h>

int main(void) {

  float peso, altura;
  int continua = 0;

  do{

    printf("\nDigite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if(altura > 0){
      printf("\nIMC: %.2f", peso / (altura * altura) );
    }

    printf("\n\nDigite zero para sair: ");
    scanf("%d", &continua);
 
  }while(continua != 0);

  return 0;
}
