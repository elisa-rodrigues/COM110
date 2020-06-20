/*
Faça um programa para corrigir provas de múltipla escolha. Cada prova tem oito questões e cada questão vale um ponto. 
O primeiro conjunto de dados a ser lido é o gabarito da prova. Os outros dados são os números dos alunos e as respostas 
que deram às questões. Existem dez alunos matriculados. Calcule e mostre:
(a) o número e a nota de cada aluno;
(b) a porcentagem de aprovação, sabendo-se que a nota mínima é 6.

(Ex. 10 - pag. 171 [ASCÊNCIO, Ana Fernanda G.; CAMPOS, Edilene A. V. Fundamentos da Programação de Computadores. 2012.])
*/

// Autor : Daniel Henrique Ferreira de Carvalho
// Junho de 2020

#include<stdio.h>

int main(){
    int aluno[10],i,k,nota[10],notas[10];
    float aprov=0;
    char gabarito[8],resposta;

    for(i = 0;i < 8;i++)//preenche o gabarito
    {
        printf("Digite a resposta da questão %d: ",i+1);
        scanf(" %c",&gabarito[i]);
    }

    for(i = 0;i < 10;i++)//preenche o numero do aluno
    {
        printf("Digite o numero do aluno %d: ",i+1);
        scanf(" %d",&aluno[i]);
    }    

    for(i = 0;i < 10;i++)
    {
        notas[i] = 0;//a nota comeca com 0
        for(k = 0;k < 8;k++){//K sempre começa dos multiplos de 8
            printf("Digite a resposta da questao %d do aluno %d: ",k+1,aluno[i]);
            scanf(" %c",&resposta);
            if(resposta == gabarito[k])//Caso a resposta do aluno for igual a do gabarito, sua nota deve aumentar em 1
                notas[i]++;
        }
    }
    
    for(i = 0;i < 10;i++)//Printa o numero do aluno e as notas
    {
        printf("A nota do aluno %d e: %d\n",aluno[i],notas[i]);
        if(notas[i] > 6)//Caso a nota for maior que 6, ele esta aprovado
            aprov++;
    }

    printf("A porcentagem de aprovacao foi: %f%%",((aprov*100)/(float)10));//Imprime a porcentagem de aprovacao

}
