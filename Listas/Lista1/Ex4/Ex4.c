// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

#include <stdio.h>

// Exercício 4
// Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

int main()
{
    float salario, aumento;

    // Leitura das notas
    printf("Digite o valor do Salário R$ ");
    scanf("%f", &salario);
    printf("Digite o percentual do aumento:");
    scanf("%f", &aumento);

    // Verificando se o aumento é de fato positivo
    if (aumento < 0)
    {
        printf("O funcionário deve receber aumento e não desconto... saindo");
        return 0;
    }

    // Calculando o salário novo com o aumento proposto
    salario = salario * (1 + aumento / 100);
    printf(" O novo salaŕio é de R$ %.2f , com um aumento de %.2f%% \n", salario, aumento);
    return 0;
}