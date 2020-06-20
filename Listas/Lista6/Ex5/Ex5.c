/*
O código de César é uma das técnicas de criptografia mais simples e conhecidas. É um tipo de substituição no 
qual cada letra do texto é substituída por outra, que se apresenta n posições após ela no alfabeto: 
a b c d e f g h i j k l m n o p q r s t u v w x y z . 
(Por exemplo, com uma troca de três posições, a letra a seria substituída por d , b se tornaria e e assim por diante.) Escreva um programa que faça uso
desse código de César para n posições. Entre com n , um vetor de caracteres (string) e imprima a string codificada. Exemplo:
n: 2
String: universidade
Nova string: wpkxgtukfcfg

(Ex. 14 - pag. 143 [BACKES, André. Linguagem C: completa e descomplicada. 2013.])
*/

// Autor : Daniel Henrique Ferreira de Carvalho
// Junho de 2020

#include <stdio.h>
#include <string.h>

#define Tamanho 6 
#define TamanhoA 26 

int main(void) {

  int Nivel, Temp,i,j,tam;
  char Palavra[Tamanho], Criptografia[Tamanho];
  char Alfabeto[TamanhoA] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                            'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; 

  printf("Digite a palavra que gostaria de criptografar: ");
  scanf("%s", Palavra);

  printf("Digite o nível da criptografia: ");
  scanf("%d", &Nivel);

tam = strlen(Palavra);//Armazena o tamanho da string para caso o usuario digite menos de 6 caracteres

  // armazena em Criptografia a nova palavra
  for(i=0; i<tam; i++){

    j=0; // zero o contador para a próxima iteração do laço

    // verifica em qual posição do vetor Alfabeto está a letra da posição i da Palavra 
    while(Palavra[i] != Alfabeto[j]){
      j++;
    }

    // verifica se a nova letra ultrapassa o limite do vetor Alfabeto
    if(j + Nivel < TamanhoA){
      Criptografia[i] = Alfabeto[j + Nivel];
    }else{
      Criptografia[i] = Alfabeto[(j + Nivel)-TamanhoA];
    }
  }

    Criptografia[i] = '\0';//Adiciona o \0 ao final do arquivo para reconhecer como string

  printf("Palavra criptografada: %s", Criptografia);

  return 0;

}
