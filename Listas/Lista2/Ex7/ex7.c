#include <stdio.h>

/*
Exercício 7
Escreva um algoritmo que leia dois números e imprima-os em ordem crescente. 
Considere que os números possam ser iguais.
    (a) Use apenas uma comparação entre os números!
    (b) Use apenas uma instrução ESCREVA no seu algoritmo!
*/

void main()
{

    // declaração de variáveis de Leitura
    float primeiro, segundo;
    // declaração de variáveis de resultado
    float num_maior, num_menor;

    // leitura de números
    printf("Digite o primeiro número:");
    scanf("%f", &primeiro);
    printf("Digite o segundo número:");
    scanf("%f", &segundo);

    // condicionais de comparação para ordenação
    if (primeiro > segundo)
    {
        num_maior = primeiro;
        num_menor = segundo;
    }
    else
    {
        num_maior = segundo;
        num_menor = primeiro;
    }

    // impressão do resultado
    printf(" Os números em ordem crescente são: %.f , %.f \n", num_maior, num_menor);
    
    return 0;
}
