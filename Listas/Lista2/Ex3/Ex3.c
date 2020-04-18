// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

#include <stdio.h>

// Exercício 3
// Faça um algoritmo que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a mensagem de aprovado ou reprovado, considerando para aprovação média 6.

int main()
{
    //declaração de variárveis de Leitura
    float primeira, segunda, terceira, quarta;
    float notaFinal;

    //Leitura de notas
    printf("Digite o primeira nota:");
    scanf("%f", &primeira);

    // Se a nota for maior que 10, está com um problema... se for menor que 0 também
    if (primeira > 10 || primeira < 0)
    {
        printf("Problema com a nota digitada... saindo \n");
        return 0;
    }

    printf("Digite o segunda nota:");
    scanf("%f", &segunda);

    // Se a nota for maior que 10, está com um problema... se for menor que 0 também
    if (segunda > 10 || segunda < 0)
    {
        printf("Problema com a nota digitada... saindo \n");
        return 0;
    }

    printf("Digite o terceira nota:");
    scanf("%f", &terceira);

    // Se a nota for maior que 10, está com um problema... se for menor que 0 também
    if (terceira > 10 || terceira < 0)
    {
        printf("Problema com a nota digitada... saindo \n");
        return 0;
    }

    printf("Digite a quarta nota:");
    scanf("%f", &quarta);

    // Se a nota for maior que 10, está com um problema... se for menor que 0 também
    if (quarta > 10 || quarta < 0)
    {
        printf("Problema com a nota digitada... saindo \n");
        return 0;
    }

    notaFinal = (primeira + segunda + terceira + quarta) / 4;

    if (notaFinal >= 6)
    {
        printf("O aluno foi APROVADO com uma nota de %.2f\n", notaFinal);
    }
    else
    {
        printf("O aluno foi REPROVADO com uma nota de %.2f\n", notaFinal);
    }

    return 0;
}