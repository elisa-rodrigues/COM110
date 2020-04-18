// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

#include <stdio.h>
#include <math.h>

// Exercício 1
// Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa

int main()
{

    // declaração de variáveis de Leitura
    float catetoOposto, catetoAdjacente;
    // Declaração do resultado
    float hipotenusa;

    // Leitura dos dados
    printf("Digite o valor do cateto oposto:");
    scanf("%f", &catetoOposto);

    printf("Digite o valor do cateto adjacente:");
    scanf("%f", &catetoAdjacente);

    // Calculando a Hipotenusa (funções de Math.h)
    hipotenusa = sqrt(pow(catetoOposto, 2) + pow(catetoAdjacente, 2));

    printf("A hipotenusa é: %.2f\n", hipotenusa);
    return 0;
}