#include <stdio.h>

// Função recursiva para mover a Torre (5 casas para Direita)
void moverTorre(int casas)
{
    if (casas == 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover o Bispo (5 casas na diagonal Cima Direita)
void moverBispo(int casas)
{
    if (casas == 0)
        return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para mover a Rainha (8 casas para Esquerda)
void moverRainha(int casas)
{
    if (casas == 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Movimento do Cavalo em "L" (2 para cima, 1 para direita) com loops complexos
void moverCavaloMestre()
{
    int i, j;
    for (i = 0, j = 2; i < 3 && j >= 0; i++, j--)
    {
        if (j == 1)
            continue;
        printf("Cima\n");
        if (i == 2)
            break;
    }
    printf("Direita\n");
}

int main()
{
    printf("## Bem Vindo ao jogo de Xadres ##!\n");

    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo:\n");
    moverCavaloMestre();

    return 0;
}