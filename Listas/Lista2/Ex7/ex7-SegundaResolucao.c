#include <stdio.h>

// Segunda resolução do Exercício 7 - ex7.c
// - Economizando uma variável
// - Modularizando em uma função separada
// - Declaração de assinatura de função antes do uso

// Definindo a assinatura da função antes da implementação mas, Por que?
// Explicação curta : Quando utilizamos a função antes de sua implementação, no caso em
// main(), precisamos definí-la para que o compilador saiba que ela está implementada após a sua chamada
int estaEmOrdemCrescente(int primeiro, int segundo);

void main()
{

    //declaração de variárveis de Leitura que serão utilizadas também na resposta para economia de memória
    float primeiro, segundo;

    //Leitura de Números
    printf("Digite o primeiro número:");
    scanf("%f", &primeiro);
    printf("Digite o segundo número:");
    scanf("%f", &segundo);

    //Se os números não estão ordenados crescentemente, fazemos a troca. Se eles já estiverem na ordem, o if não é percorrido
    if (estaEmOrdemCrescente(primeiro, segundo) == 0)
    {
        //Declaração de variavel auxiliar no escopo do IF
        float varAuxiliar;
        varAuxiliar = primeiro;
        primeiro = segundo;
        segundo = varAuxiliar;
    }

    //Impressão do Resultado
    printf(" Os números em ordem crescente são: %.f , %.f \n", primeiro, segundo);
    return 0;
}

// Temos o tipo BOOLEAN (true,false) apenas na especificação C99, a fim de evitarmos problemas na compilação do código
// e termos compatibilidade com um número maior de compiladores, vamos convencionar inteiros 0,1 para false,true (como usualmente fazemos em lógica booleana)
// Função que verifica se os números estão ordenados, retornando 1 para verdade e 0 para falso
int estaEmOrdemCrescente(int primeiroNum, int segundoNum)
{
    if (primeiroNum > segundoNum)
        return 0;
    return 1;
}