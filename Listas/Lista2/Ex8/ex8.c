#include <stdio.h>

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

  // Solução com as seis possibilidades de ordenação
  if (primeiro <= segundo && segundo <= terceiro)
  {
    printf("A ordem crescente: %d %d %d\n", primeiro, segundo, terceiro);
  }
  else if (primeiro <= terceiro && terceiro <= segundo)
  {
    printf("A ordem crescente: %d %d %d\n", primeiro, terceiro, segundo);
  }
  else if (segundo <= primeiro && primeiro <= terceiro)
  {
    printf("A ordem crescente: %d %d %d\n", segundo, primeiro, terceiro);
  }
  else if (segundo <= terceiro && terceiro <= primeiro)
  {
    printf("A ordem crescente: %d %d %d\n", segundo, terceiro, primeiro);
  }
  else if (terceiro <= primeiro && primeiro <= segundo)
  {
    printf("A ordem crescente: %d %d %d\n", terceiro, primeiro, segundo);
  }
  else /* terceiro <= segundo && segundo < primeiro */
  {
    printf("A ordem crescente: %d %d %d\n", terceiro, segundo, primeiro);
  }

  return 0;
}