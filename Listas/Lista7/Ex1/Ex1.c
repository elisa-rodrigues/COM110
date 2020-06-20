/*
Faça um programa que preencha uma matriz M (2 × 2) com números inteiros, calcule e mostre a matriz R, 
resultante da multiplicação dos elementos de M pelo seu maior elemento.

(Ex. 1 - pag 220 [ASCÊNCIO, Ana Fernanda G.; CAMPOS, Edilene A. V. Fundamentos da Programação de Computadores. 2012.]) 
*/

// Autor : Daniel Henrique Ferreira de Carvalho
// Junho de 2020

#include <stdio.h>

int main(){
    int i,k, M[2][2],R[2][2],maior;

    for(i = 0;i < 2;i++)//Preenche a matriz
        for(k = 0;k < 2;k++)
        {
            printf("Digite um valor: ");
            scanf("%d",&M[i][k]);
        }

    maior = M[0][0];//O maior elemento deve ser inicializado com a primeira posição do vetor

    for(i = 0;i < 2;i++)
        for(k = 0;k < 2;k++)
        {
            if(M[i][k] > maior)//Caso encontre um valor maior, a variavel é substituida
                maior = M[i][k];
        }

    for(i = 0;i < 2;i++)//Preenche a matriz R com os valores de M * maior
        for(k = 0;k < 2;k++)
        {
            R[i][k] = M[i][k]*maior;
        }

    for(i = 0;i < 2;i++){//Imprime a matriz
        for(k = 0;k < 2;k++)
        {
            printf("%d ",R[i][k]);
            
        }
        printf("\n");
    }
}
