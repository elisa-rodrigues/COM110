// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

#include <stdio.h>

// Exercício 2
// Faça um algoritmo que receba três números que mostre o menor e o maior deles.

int main()
{
    //declaração de variárveis de Leitura
    float primeiro, segundo, terceiro;
    float maior, menor;

    //Leitura de Números
    printf("Digite o primeiro número:");
    scanf("%f", &primeiro);
    printf("Digite o segundo número:");
    scanf("%f", &segundo);
    printf("Digite o terceiro número:");
    scanf("%f", &terceiro);

    // Primeira Atribuição
    maior = primeiro;
    menor = primeiro;

    // Verificando qual o maior
    if(segundo > maior)
        maior = segundo;
    
    if (terceiro > maior)  
        maior = terceiro;

    // Verificando qual o menor
    if(segundo < menor)
        menor = menor;
    
    if (terceiro < menor)  
        menor = terceiro;

      
    printf("O menor é %.2f e o maior é %.2f \n", maior, menor);
    return 0;
}
