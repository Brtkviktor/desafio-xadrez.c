#include <stdio.h>

void movertorre(int casas) {
    if (casas > 0)
    {
        printf("Torre Andou uma casa a Direita\n");
        movertorre(casas - 1);
    }
}
void moverbispo(int casas) {
    if (casas > 0)
    {
        printf("Bispo moveu para Direita\n"); 
        printf("Bispo moveu para Esquerda\n");
        moverbispo(casas - 1);
    }
}

void moverrainha(int casas) {
    if (casas > 0)
    {
        printf("Rainha Andou uma casa a Esquerda\n");
        moverrainha(casas - 1);
    }
    
    
}

int main()
{

    // Iniciando variaveis
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int cavalo = 1;

    printf("### Bem Vindo ao jogo de Xadres! ###\n\n");

    printf("Agora vamos Mover a Torre:\n");
    movertorre(5);

    printf("\n");
    printf(" Agora vamos Mover o Bispo:\n");
    moverbispo(5);
    
    printf("\n");
    printf("Agora vamos Mover a Rainha:\n");
    moverrainha(8);

    // logica da movimentação do cavalo
    printf("\n");
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