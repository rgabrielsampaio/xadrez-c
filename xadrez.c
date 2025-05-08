#include <stdio.h>

// Variáveis constantes
const int casasTorre = 5;
const int casasBispo = 5;
const int casasRainha = 8;

// Função recursiva para mover a Torre (direita)
void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Torre move-se 1 casa para a Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para mover o Bispo em diagonais
void moverBispo(int casas)
{
    if (casas > 0)
    {
        for (int v = 0; v < 1; v++) // Loop externo (vertical)
        {
            for (int h = 0; h < 1; h++) // Loop externo (horizontal)
            {
                printf("Bispo move-se 1 casa para Cima\n");
                printf("Bispo move-se 1 casa para a Direita\n");
            }
        }
        moverBispo(casas - 1);
    }
}

// Função recursiva para mover a Rainha (esquerda)
void moverRainha(int casas)
{
    if (casas > 0)
    {
        printf("Rainha move-se 1 casa para a Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Função com loops complexos para o Cavalo
void moverCavalo()
{
    int movimentos = 1;

    for (int i = 0; i < movimentos; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j < 2)
            {
                printf("Cavalo move-se para Cima\n");
            }
            else if (j == 2)
            {
                if (i == 0 && j == 2)
                {
                    printf("Cavalo move-se para a Direita\n");
                    break;
                }
            }
        }
    }
}

int main()
{

    printf("\nMovimentação da Torre\n\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("\nMovimentação do Bispo\n\n");
    moverBispo(casasBispo);
    printf("\n");

    printf("\nMovimentação da Rainha\n\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("\nMovimentação do Cavalo\n\n");
    moverCavalo();
    printf("\n");

    printf("\nFeito por: Renato Gabriel Sampaio de Carvalho\n\n");

    return 0;
}
