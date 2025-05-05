#include <stdio.h>

void moverTorre(int colunas) {
    if (colunas == 0)
        return;

    printf("Direita\n");
    moverTorre(colunas - 1);
}

void moverBispo(int linhas, int colunas) {
    if (linhas == 0)
        return;

    printf("Direita\n");

    printf("Baixo\n");
    moverBispo(linhas - 1);
    moverBispo(colunas - 1);
}


int main(){

    int rainha = 0;
    int cavaloBaixo = 0;
    int cavaloEsq;

    printf("Movimentação da Torre\n");

    moverTorre(5);

    printf("\n");

    printf("Movimentação do Bispo\n");

    moverBispo(4);

    printf("\n");

    printf("Movimentação da Rainha\n");
    
    do { // Movimentar 8 casas pra esquerda.
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);

    printf("\n");

    printf("Movimentação do Cavalo\n");

    for (cavaloEsq = 0; cavaloEsq < 1; cavaloEsq++) { // Movimentar 1 casa pra esquerda.
        while (cavaloBaixo < 2) // Movimentar 2 casas pra baixo.
        {
            printf("Baixo\n");
            cavaloBaixo++;
        }
        printf("Esquerda\n");
    }

        return 0;
}