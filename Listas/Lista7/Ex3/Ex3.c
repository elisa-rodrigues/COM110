/*
Na teoria dos sistemas, define-se o elemento MINMAX de uma matriz como o maior elemento da linha em que se encontra 
o menor elemento da matriz. Elabore um programa que carregue uma matriz 4 × 7 com números reais, calcule e mostre 
seu MINMAX e sua posição (linha e coluna).

(Ex. 5 - pag 223 [ASCÊNCIO, Ana Fernanda G.; CAMPOS, Edilene A. V. Fundamentos da Programação de Computadores. 2012.])
*/

// Autor : Daniel Henrique Ferreira de Carvalho
// Junho de 2020

#include <stdio.h>

#define linha 4
#define coluna 7

int main(){
    int i,k,menorLinha,menorNum,maiorColuna;
    float mat[linha][coluna],minmax;

    for(i = 0;i < linha;i++)//Preenche a matriz
        for(k = 0;k < coluna;k++)
        {
            printf("Digite um valor: ");
            scanf("%f",&mat[i][k]);
        }

    menorNum = mat[0][0];//Inicializa o menor numero com o primeiro valor da matriz
    menorLinha = 0;//Inicialmente, a primeira linha sera a linha com o menor numero

    for(i = 0;i < linha;i++)//Encontra o menor valor da matriz e salva a linha em que ele se encontra
        for(k = 0;k < coluna;k++)
        {
            if(mat[i][k] < menorNum)
            {
                menorNum = mat[i][k];
                menorLinha = i;
            }
        }

    minmax = mat[menorLinha][0];//Inicialmente, o maior valor da linha sera o primeiro elemento daquela linha
    maiorColuna = 0;//A coluna do minmax sera a 0;

    for(i = 1;i < coluna;i++)//Encontra o minmax e salva a posicao da coluna dele
        {
            if(mat[menorLinha][i] > minmax)
            {
                minmax = mat[menorLinha][i];
                maiorColuna = i;
            }
        }

    printf("O minmax e %.2f, que esta na linha %d e coluna %d",minmax,menorLinha+1,maiorColuna+1);
}
