/*
Faça um programa que receba um vetor de dez caracteres (uma palavra) e imprima o vetor invertido.
*/

// Autor : Daniel Henrique Ferreira de Carvalho
// Junho de 2020

#include <stdio.h>
#include <string.h>

int main(){
    int i, tam;
    char string[11],aux;//Em uma string, o ultimo caracter e \0, portanto deve ter 1 casa a mais do que e pedido

    printf("Digite a palavra para saber seu inverso: ");
    scanf(" %s",string);

    tam = strlen(string);//Armazena o tamanho da string para caso o usuario digite menos de 10 caracteres

    for(i = 0;i < tam/2;i++)//Sao necessarias fazer o processo apenas metade do tamanho do vetor
    {
        aux = string[i];
        string[i] = string[tam-1-i];
        string[tam-1-i] = aux;
    }

    printf("%s",string);//imprime a string
}
