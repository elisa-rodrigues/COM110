// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

#include <stdio.h>

/*
Exerćicio 5
Escreva um algoritmo que leia a idade de uma pessoa e informe sua classe eleitoral:
    (a) Não eleitor (abaixo de 16 anos);
    (b) Eleitor obrigatório (entre 18 e 65 anos, inclusive);
    (c) Eleitor facultativo (entre 16 e 18 anos ou acima dos 65 anos).
*/

int main()
{
    // Declaração de variáveis
    float idade;

    // Leitura de Salário
    printf("Digite a idade do eleitor: ");
    scanf("%f", &idade);

    if (idade < 16)
    {
        printf("A pessoa não é eleitora");
    }
    else if (idade < 18)
    {
        printf("A pessoa é eleitora facultativa");
    }
    else if (idade <= 65)
    {
        printf("A pessoa é eleitora obrigatória");
    }
    else
    {
        printf("A pessoa é eleitora facultativa");
    }
    printf("\n");
    return 0;
}