// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

#include <stdio.h>

/* 
Exercício 4
Suponha que em uma determinada empresa o chefe decida dar um aumento a todos os funcionário. Mas esse aumento depende do salário atual do funcionário:
    (a) Para salários menores ou igual a 1000,00 reais, o aumento será de 15%;
    (b) Para salários entre 1000,00 e 2000,00 reais, o aumento será de 10%;
    (c) Para salários maiores ou igual a 2000,00 reais, o aumento será de 5%.
    
    Escreva um algoritmo (fluxograma e pseudocódigo) que calcule o novo salário, dado o salário do funcionário.
*/
int main()
{
    // Declaração de variáveis
    float salario, aumento;

    // Leitura de Salário
    printf("Digite o salário do funcionário: R$ ");
    scanf("%f", &salario);

    // Lógica para descobrir o aumento
    if (salario <= 1000)
        aumento = 15;
    else if (salario < 2000)
        aumento = 10;
    else
        aumento = 5;

    // Calculando o aumento
    salario = salario * (1 + aumento / 100);

    // Mostrando o aumento
    printf(" O novo salário do funcionário é R$ %.2f ,com um aumento de %.2f%%\n", salario, aumento);
    return 0;
}