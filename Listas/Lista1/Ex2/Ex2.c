// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

#include <stdio.h>

// Exercício 2
// Faça um algoritmo que receba três notas e seus pesos, calcule e mostre a média ponderada.

int main()
{
    float nota1, nota2, nota3;
    float peso1, peso2, peso3;

    float notaFinal;

    // Leitura das notas e pesos
    printf("Digite o valor da Primeira Nota:");
    scanf("%f", &nota1);
    printf("Digite o peso da Primeira Nota:");
    scanf("%f", &peso1);

    printf("Digite o valor da Segunda Nota:");
    scanf("%f", &nota2);
    printf("Digite o peso da Segunda Nota:");
    scanf("%f", &peso2);

    printf("Digite o valor da Terceira Nota:");
    scanf("%f", &nota3);
    printf("Digite o peso da Terceira Nota:");
    scanf("%f", &peso3);

    // Cálculo da média
    notaFinal = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    // Impressão da nota final com duas casas decimais
    printf("A média final foi : %.2f\n", notaFinal);
    return 0;
}