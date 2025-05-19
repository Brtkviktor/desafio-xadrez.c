#include<stdio.h>



int main(){

    //Iniciando variaveis
    int torre = 1;
    int bispo = 1;
    int rainha = 1;

    printf("## Bem Vindo ao jogo de Xadres!\n");

    //logica da torre no while
    while (torre <= 5)
    {
        printf(" Torre Andou uma casa a Direita\n");
        torre++;
    }

    printf(" Agora vamos Mover o Bispo\n");

    //logica do bispo no do-while
    do
    {
        printf("Bispo moveu para direita\n");
        printf("Bispo moveu para esquerda\n");
        bispo++;
    } while (bispo<=5);

    printf("Agora vamos Mover a Rainha\n");

    //logica da movimentação da rainha com o for
    for ( rainha = 1; rainha <=8; rainha++)
    {
        printf(" Rainha Andou uma casa a Esquerda\n");
    }
    
    return 0;
}