#include <stdio.h>

void main(){
    
    //declaração de variárveis de Leitura
    float primeiro,segundo;
    //Declaração de variáveis de resultado
    float Num_maior,Num_menor;

    //Leitura de Números
    printf("Digite o primeiro número:");
    scanf("%f",&primeiro);
    printf("Digite o segundo número:");
    scanf("%f",&segundo);
   
   //Condicionais de comparação para ordenação
    if ( primeiro > segundo ){
        Num_maior = primeiro;
        Num_menor = segundo;
    }
    else {
        Num_maior = segundo;
        Num_menor = primeiro;
    }

    //Impressão do Resultado
    printf(" Os números em ordem crescente são: %.f , %.f \n",Num_maior,Num_menor);
}
