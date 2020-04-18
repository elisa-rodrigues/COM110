// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

#include <stdio.h>

// Exercício 1
// Faça um algoritmo que receba três notas, calcule e mostre a média aritmética.

int main()
{
    float nota1, nota2, nota3;
    float notaFinal;

    // Leitura das notas
    printf("Digite o valor da Primeira Nota:");
    scanf("%f", &nota1);
    printf("Digite o valor da Segunda Nota:");
    scanf("%f", &nota2);
    printf("Digite o valor da Terceira Nota:");
    scanf("%f", &nota3);

    // Cálculo da média
    notaFinal = (nota1 + nota2 + nota3) / 3;

    // Impressão da nota final com duas casas decimais
    printf("A média final foi : %.2f\n", notaFinal);
    return 0;
}