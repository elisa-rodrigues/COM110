/*
Um elemento A ij de uma matriz é dito ponto de sela da matriz A se, e somente
se, A ij for, ao mesmo tempo, o menor elemento da linha i e o maior elemento da coluna j . Faça um
programa que carregue uma matriz de ordem 5×7 , verique se a matriz possui ponto de sela e, se possuir,
mostre seu valor e sua localização.

(Ex. 7 - pag 225 [ASCÊNCIO, Ana Fernanda G.; CAMPOS, Edilene A. V. Fundamentos da Programação de Computadores. 2012.]) 
*/

// Autor : Daniel Henrique Ferreira de Carvalho
// Junho de 2020

#include <stdio.h>

#define linha 5
#define coluna 7

int main(){
    int i=0,k,cont=0,naoSela=1,mat[linha][coluna],sela[3];

    for(i = 0;i < linha;i++)//Preenche a matriz
        for(k = 0;k < coluna;k++)
        {
            printf("Digite um valor: ");
            scanf("%d",&mat[i][k]);
        }

    i=0;
    while(naoSela != 0 && i < linha)//Encontra a sela da matriz
    {
        sela[0] = mat[i][0];//Primeiro elemento da sela contem o numero
        sela[1] = i;//Segundo elemento da sela contem a linha
        sela[2] = 0;//Terceiro elemento da sela contem a coluna

        naoSela = 0;//Começa supondo que o primeiro numero e a sela
        
        for(k = 1;k < coluna;k++)//Percorre a linha do elemento
        {
            if(mat[i][k] == sela[0])//Caso existam dois menores numeros iguais na linha, não existe de verdade um menor numero
              naoSela = 1;
            else if(sela[0] > mat[i][k])//Atribui os valores do menor numero a sela
            {
                sela[0] = mat[i][k];
                sela[2] = k;
                naoSela = 0;
            }    
        }
        
        for(k = 0;k < linha;k++)//Percorre a coluna do elemento
        {
            if(sela[0] <= mat[k][sela[2]] && k != i)//Caso ele nao for o maior numero, ele nao sera a sela
                naoSela = 1;
        }
           i++; 
    }

        if(naoSela == 0)//Caso a sela for encontrada, ela deve ser impressa
        printf("A sela da matriz e %d, que esta na linha %d e coluna %d",sela[0],sela[1]+1,sela[2]+1);
}
