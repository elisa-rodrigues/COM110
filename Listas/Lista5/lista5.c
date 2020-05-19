#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int opcao, lado, altura;
    double area, perimetro, h;
    char preenchimento = 'X';
    char lateral = '|';
    char lateral_i = '/';
    char lateral_f = '\\';
    char base = '_';

    do
    {
        printf("\n#########################################################\n");
        printf("################### MENU DE OPÇÕES ######################\n");
        printf("#########################################################");
        printf("\n##                                                     ##");
        printf("\n## Escolha uma forma geométrica:                       ##");
        printf("\n##                                                     ##");
        printf("\n##  1. Quadrado                                        ##");
        printf("\n##  2. Retângulo                                       ##");
        printf("\n##  3. Triângulo Equilátero                            ##");
        printf("\n##  4. Triângulo Retângulo (catetos iguais)            ##");
        printf("\n##  5. Outra                                           ##");
        printf("\n##  6. Sair                                            ##");
        printf("\n##                                                     ##");
        printf("\n#########################################################\n");
        printf("#########################################################\n");

        printf("\n  Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {

        case 1: // quadrado
            printf("\n========================================================");
            printf("\n QUADRADO ");
            printf("\n========================================================\n\n");

            do
            {
                printf("  Digite o lado do quadrado: ");
                scanf("%d", &lado);

            } while (lado < 1);

            area = lado * lado;
            printf("\n  Area: %.2f", area);

            perimetro = 4 * lado;
            printf("\n  Per: %.2f\n\n", perimetro);

            // limita tamanho do desenho
            if (lado > 25)
            {
                lado = 25;
            }

            for (int x = 0; x < lado + 3; x++)
            {
                printf(" ");

                if (x != 0)
                {
                    printf("%c", lateral);
                }
                else
                {
                    printf(" ");
                }

                for (int y = 0; y < lado; y++)
                {

                    if (x == 0 || x == (lado + 2))
                    {
                        printf("%c%c", base, base);
                    }
                    else if (x == 1)
                    {
                        printf("  ");
                    }
                    else
                    {
                        printf(" %c", preenchimento);
                    }
                }

                if (x == 0)
                {
                    printf("%c", base);
                }
                else if (x == (lado + 2))
                {
                    printf("%c%c", base, lateral);
                }
                else
                {
                    printf(" %c", lateral);
                }

                printf("\n");
            }
            printf("\n========================================================\n\n");

            break;

        case 2: // retângulo
            printf("\n========================================================");
            printf("\n RETÂNGULO ");
            printf("\n========================================================\n\n");

            do
            {
                printf("  Digite a base do retângulo: ");
                scanf("%d", &lado);

                printf("  Digite a altura do retângulo: ");
                scanf("%d", &altura);

            } while (lado < 1);

            area = lado * altura;
            printf("\n  ÁREA: %.2f", area);

            perimetro = 2 * lado + 2 * altura;
            printf("\n  PERÍMETRO: %.2f\n\n", perimetro);

            // limita tamanho do desenho
            if (lado > 25)
            {
                lado = 25;
            }

            for (int x = 0; x < altura + 3; x++)
            {
                printf(" ");

                if (x != 0)
                {
                    printf("%c", lateral);
                }
                else
                {
                    printf(" ");
                }

                for (int y = 0; y < lado; y++)
                {

                    if (x == 0 || x == (altura + 2))
                    {
                        printf("%c%c", base, base);
                    }
                    else if (x == 1)
                    {
                        printf("  ");
                    }
                    else
                    {
                        printf(" %c", preenchimento);
                    }
                }

                if (x == 0)
                {
                    printf("%c", base);
                }
                else if (x == (altura + 2))
                {
                    printf("%c%c", base, lateral);
                }
                else
                {
                    printf(" %c", lateral);
                }

                printf("\n");
            }
            printf("\n========================================================\n\n");

            break;

        case 3: // triângulo
            printf("\n========================================================");
            printf("\n TRIÂNGULO EQUILÁTERO ");
            printf("\n========================================================\n\n");

            do
            {
                printf("  Digite o lado do triângulo equilátero: ");
                scanf("%d", &lado);

            } while (lado < 1);

            area = (lado * lado * sqrt(3)) / 4.0;
            printf("\n  ÁREA: %.2f", area);

            perimetro = 3 * lado;
            printf("\n  PERÍMETRO: %.2f\n\n", perimetro);

            // limita tamanho do desenho
            if (lado > 25)
            {
                lado = 25;
            }

            for (int x = 0; x < lado + 3; x++)
            {

                for (int y = 0; y < 2 * (lado / 2) - x + 3; y++)
                {
                    printf(" ");
                }

                if (x != 0)
                {
                    printf("%c", lateral_i);
                }

                for (int y = 0; y < x - 1; y++)
                {

                    if (x == (lado + 2))
                    {
                        printf("%c%c", base, base);
                    }
                    else
                    {
                        printf(" %c", preenchimento);
                    }
                }

                if (x == 0)
                {
                    printf(".");
                }
                else if (x == (lado + 2))
                {
                    printf("%c%c", base, lateral_f);
                }
                else
                {
                    printf(" %c", lateral_f);
                }

                printf("\n");
            }
            printf("\n========================================================\n\n");

            break;

        case 4: // triângulo retângulo
            printf("\n========================================================");
            printf("\n TRIÂNGULO RETÂNGULO ");
            printf("\n========================================================\n\n");

            do
            {
                printf("  Digite o valor do cateto: ");
                scanf("%d", &lado);

            } while (lado < 1);

            area = (lado * lado) / 2.0;
            printf("\n  ÁREA: %.2f", area);

            h = sqrt(lado * lado + lado * lado);

            perimetro = 2 * lado + h;
            printf("\n  PERÍMETRO: %.2f\n\n", perimetro);

            // limita tamanho do desenho
            if (lado > 25)
            {
                lado = 25;
            }

            for (int x = 0; x < lado + 3; x++)
            {

                if (x == 0)
                {
                    printf(".");
                }
                else
                {
                    printf("%c", lateral);
                }

                for (int y = 0; y < x - 1; y++)
                {
                    if (x == lado + 2)
                    {
                        printf("%c", base, base);
                    }
                    else
                    {
                        printf("%c", preenchimento);
                    }
                }

                if (x > 0)
                {
                    printf("%c", lateral_f);
                }

                printf("\n");
            }

            printf("\n========================================================\n\n");

            break;

        case 5: // outra forma
            printf("\n\nOutra Forma...\n\n");
            break;

        case 6: // sair
            printf("\n\nFinalizando...\n\n");
            break;
        default:
            break;
        }

    } while (opcao != 6);

    return 0;
}
