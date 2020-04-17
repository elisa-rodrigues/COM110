/**************************************************************************************** 
Exercício 8 - Escreva um algoritmo que leia três números e imprima-os em ordem crescente. 
Considere que os números possam ser iguais.
*****************************************************************************************/

#include <stdio.h>

// Segunda resolução do Exercício 8 - ex8.c
// - Economizando variáveis
// - Condicionais Aninhados

int main()
{
    //declaração de variárveis de Leitura que serão utilizadas também na resposta para economia de memória
    int primeiro, segundo, terceiro;

    //Leitura de Números
    printf("Digite o primeiro número:");
    scanf("%d", &primeiro);
    printf("Digite o segundo número:");
    scanf("%d", &segundo);
    printf("Digite o terceiro número:");
    scanf("%d", &terceiro);

    //Deixa o primeiro <= segundo 
    if (primeiro > segundo)
    {
        //Declaração de variavel auxiliar no escopo do IF
        int aux;
        // troca o conteudo das variaveis primeiro e segundo 
        aux = primeiro;
        primeiro = segundo;
        segundo = aux;
    }

    if (segundo > terceiro)
    {
        // primeiro <= segundo e terceiro < segundo 
        if (primeiro <= terceiro)
        {
            // primeiro <= terceiro e terceiro < segundo
            //Declaração de variavel auxiliar no escopo do IF
            int aux;
            aux = segundo;
            segundo = terceiro;
            terceiro = aux;
            //printf("A ordem crescente: %d %d %d\n", primeiro, terceiro, segundo);
        }
        else
        {
            // terceiro < primeiro e primeiro <= segundo
            //Declaração de variavel auxiliar no escopo do IF
            int aux, aux2;
            aux = primeiro;
            aux2 = segundo;

            primeiro = terceiro;
            segundo = aux;
            terceiro = aux2;
        }
    }

    printf("A ordem crescente: %d %d %d\n", primeiro, segundo, terceiro);
    return 0;
}
