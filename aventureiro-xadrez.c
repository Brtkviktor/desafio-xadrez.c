#include <stdio.h>

int main()
{

    // Iniciando variaveis
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;

    printf("## Bem Vindo ao jogo de Xadres!\n");

    // logica da torre no while
    while (torre <= 5)
    {
        printf(" Torre Andou uma casa a Direita\n");  // imprime "Direita" cinco vezes
        torre++;
    }

    printf("\n");

    printf(" Agora vamos Mover o Bispo\n");

    // logica do bispo no do-while
    do
    {
        printf("Bispo moveu para Direita\n"); // imprime "Direita" cinco vezes
        printf("Bispo moveu para Esquerda\n"); // imprime "Esquerda" cinco vezes
        bispo++;
    } while (bispo <= 5);

    printf("\n");

    printf("Agora vamos Mover a Rainha\n");

    // logica da movimentação da rainha com o for
    for (rainha = 1; rainha <= 8; rainha++)
    {
        printf(" Rainha Andou uma casa a Esquerda\n"); // imprime "Eireita" oito vezes
    }

    printf("\n");

    // logica da movimentação do cavalo
    printf("Agora vamos Mover o cavalo\n");
    while (cavalo--)
    {
        for (int cavL = 0; cavL < 2; cavL++)
        {
            printf("Cavalo moveu para Baixo\n"); // imprime "Baixo" duas vezes
        }

        printf("Cavalo moveu para Esquerda\n"); // imprime "Esquerda" uma vezes
    }

        printf("\n");

    return 0;
}