// Autora : Elisa de Cássia S. Rodrigues
// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

// Exercício 11
/*
Escreva um programa que calcule e imprima a idade de uma pessoa, com base nos seguintes dados de entrada:
(a) Dia, mês e ano de nascimento de uma pessoa.
(b) Dia, mês e ano atual.
*/

#include<stdio.h>

int main()
{
   int idade, dia_nasc, mes_nasc, ano_nasc, dia_atual, mes_atual, ano_atual;
   int continuar;

   do
   {
	   printf("Digite o dia do nascimento: ");   
	   scanf("%d", &dia_nasc);

	   printf("Digite o mês do nascimento: ");   
	   scanf("%d", &mes_nasc);

	   printf("Digite o ano do nascimento: ");   
	   scanf("%d", &ano_nasc); 

	   printf("Digite o dia atual: ");   
	   scanf("%d", &dia_atual);

	   printf("Digite o mês atual: ");   
	   scanf("%d", &mes_atual);

	   printf("Digite o ano atual: ");   
	   scanf("%d", &ano_atual); 

	   idade = ano_atual - ano_nasc; 

	   if((mes_atual < mes_nasc) || (mes_atual == mes_nasc && dia_atual < dia_nasc) ){
		idade = idade - 1;
	   }

	   printf("Idade: %d", idade); 

	   printf("\n\nDigite 0 para sair: ");   
	   scanf("%d", &continuar);

   }while(continuar != 0);

   return 0;
}
