// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

#include <stdio.h>
#include <math.h>
/*
Exercício 6
Escreva um algoritmo que leia três números. Em seguida, peça ao usuário que escolha uma dentre três opções de média a ser calculada.
    (a) Média aritmética: (n1 + n2 + n3)/3
    (b) Média geométrica: (n1 ∗ n2 ∗ 3)^(1/3)
    (c) Média ponderada:  ((1 ∗ n1) + (2 ∗ n2) + (3 ∗ n3))/6
*/

int main()
{
    //declaração de variárveis de Leitura
    float primeiro, segundo, terceiro, media;
    int opcao;

    //Leitura de Números
    printf("Digite o primeiro número:");
    scanf("%f", &primeiro);
    printf("Digite o segundo número:");
    scanf("%f", &segundo);
    printf("Digite o terceiro número:");
    scanf("%f", &terceiro);
    printf("-------------------------------\n");
    printf("1 - Calcula a média aritmética\n2 - Calcula a média geométrica\n3 - Calcula a média ponderada\n");
    printf("-------------------------------\n");
    printf("-- Digite sua opção: ");
     // Calculando as médias propostas
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        media = (primeiro + segundo + terceiro) / 3;
    }
    else if (opcao == 2)
    {
        media = cbrt(primeiro * segundo * terceiro);
    }
    else if (opcao == 3)
    {
        media = ((primeiro) + (2 * segundo) + (3 * terceiro)) / 6;
    }
    else
    {
        printf("Opção inválida... saindo \n");
        return 0;
    }

    // Mostrando o resultado
    printf("O resultado é : %.2f \n", media);

    return 0;
}