#include <stdio.h>

void moverTorre(int casas)
{
    if (casas == 0)
        return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispo(int casas) // TO-DO: Aninhamento de loops pendente!!!
{
    if (casas == 0)
        return;

    printf("Esquerda\n");
    printf("Baixo\n");
    moverBispo(casas - 1);
}

void moverRainha(int casas)
{
    if (casas == 0)
        return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverCavalo(int linhas, int colunas) // TO-DO: Lógica de loop errada!!! (Possivelmente mais de 1 função).
{
    if (casas == 0)
        return;

    printf("Esquerda\n");
    printf("Baixo\n");
    moverCavalo(casas - 1);
}

int main()
{
    printf("Movimentação da Torre\n");
    moverTorre(5);
    printf("\n");

    printf("Movimentação do Bispo\n");
    moverBispo(4);
    printf("\n");

    printf("Movimentação da Rainha\n");
    moverRainha(8);
    printf("\n");

    printf("Movimentação do Cavalo\n");
    moverCavalo(1);

    return 0;
}