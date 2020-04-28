// Autora : Elisa de Cássia S. Rodrigues
// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

// Exercício 9
/*
Faça um programa que receba a hora atual no formato 24 horas (0, 1, 2, ..., 23) e imprima
o período do dia:
(a) "Manhã" (5h às 11h)
(b) "Tarde" (12h às 17h)
(c) "Noite" (18h às 4h)
*/

#include <stdio.h>

int main(void) {

  int hora, continua;

  do{

    printf("\nDigite a hora atual (0 a 23): ");
    scanf("%d", &hora);

    if(hora >= 5 && hora < 12){
      printf("Manhã");

    }else if(hora >= 12 && hora < 18){
      printf("Tarde");

    }else if((hora >= 0 && hora < 5) || (hora >= 18 && hora <= 23)){
      printf("Noite");
    
    }else{
      printf("Hora inválida!");
    }
      
    printf("\n\nDigite zero para sair: ");
    scanf("%d", &continua);
 
  }while(continua != 0);

  return 0;
}

