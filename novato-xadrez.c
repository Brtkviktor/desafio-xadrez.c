#include <stdio.h>

int main()
{

    printf("## Bem Vindo ao jogo de Xadres ##!\n");

    // Torre: 5 casas para a Direita usando for
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }

    // Bispo: 5 casas na diagonal Cima Direita usando while
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < 5)
    {
        printf("Cima, Direita\n");
        i++;
    }

    // Rainha: 8 casas para a Esquerda usando do-while
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do
    {
        printf("Esquerda\n");
        j++;
    } while (j < 8);

    return 0;
}