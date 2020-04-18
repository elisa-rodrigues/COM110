// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

#include <stdio.h>

// Exercício 3
// Faça um algoritmo que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%

int main()
{
    float salario;

    // Leitura das notas
    printf("Digite o valor do Salário:");
    scanf("%f", &salario);

    salario = salario * 1.25;
    printf(" O novo salaŕio é de R$ %.2f \n", salario );
    return 0;

}