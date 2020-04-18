// Autor : Paulo Antonio Cerávolo Rodrigues
// Abril de 2020

#include <stdio.h>

/*
Exercícios 9
Toda vez que João vai calcular as raízes de uma equação de 2o grau, esquece de algum detalhe e calcula errado. Para ajudar João a resolver as equações, escreva um algoritmo que calcule as raízes da equação de 2o grau.
    (a) Quais dados João precisa saber?
    (b) Qual é a fórmula de uma equação de 2o grau?
    (c) Uma equação de 2o grau sempre possui raízes? Quantas?
    (d) Quais casos é preciso verificar?
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  // Declaração de Variáveis
  float a, b, c;
  float delta;
  float x1, x2;

  printf("Digite os coeficientes a, b e c da equação do segundo grau.\n");
  scanf("%f%f%f", &a, &b, &c);

  printf("\nEquação: %.2f (x^2) + %.2f (x) + %.2f\n\n", a, b, c);

  // Verificação de coeficientes necessários
  if (a == 0)
  {
    printf("Não é uma equação do segundo grau.\n\n");
  }

  else
  {
    // Calculando delta
    delta = pow(b, 2) - (4.0 * a * c);
    printf("Delta: %.2f \n\n", delta);

    // Sem raízes reais
    if (delta < 0)
    {
      printf("Não existem raízes reais.\n\n");
    }
    else if (delta == 0)
    {
      // Duas raízes reais e iguais
      x1 = (-b + sqrt(delta)) / (2 * a);

      printf("Existem duas raízes reais e iguais. \n");
      printf(" x = %.2f \n", x1);
    }
    else
    {
      // Calculando Bhaskara
      x1 = (-b + sqrt(delta)) / (2 * a);
      x2 = (-b - sqrt(delta)) / (2 * a);
      printf("Existem duas raízes: \n");
      printf(" x1 = %.2f \n x2 = %.2f \n", x1, x2);
    }
  }

  return 0;
}
