#include <stdio.h>

int main(){

    int torre;
    int bispo = 0;
    int rainha = 0;

    printf("Movimentação da Torre\n");

    for (torre = 0; torre <= 4; torre++)
    {
        printf("Torre andou pra direita\n");
    }

    printf("Movimentação do Bispo\n");

    while (bispo <= 4)
    {
        printf("Bispo andou pra cima\n");
        printf("Bispo andou pra direita\n");
        bispo++;
    }

    printf("Movimentação da Rainha\n");
    
    do {
        printf("Rainha andou pra esquerda\n");
        rainha++;
    } while (rainha <= 7);

    return 0;
}