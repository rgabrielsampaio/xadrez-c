#include <stdio.h>

int main(){

    int torre;
    int bispo = 0;
    int rainha = 0;
    int cavaloBaixo = 0;
    int cavaloEsq;

    printf("Movimentação da Torre\n");

    for (torre = 0; torre < 5; torre++) // Movimentar 5 casas pra direita.
    {
        printf("Direita\n");
    }

    printf("\n");


    printf("Movimentação do Bispo\n");

    while (bispo < 5) // Movimentar 4 casas em diagonal.
    {
        printf("Baixo\n");
        printf("Direita\n");
        bispo++;
    }

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