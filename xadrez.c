#include <stdio.h>

// LOOP EXTERNO --> CONTROLA A LINHA
// LOOP INTERNO --> CONTOLA ELEMENTOS QUE ESTÃO NA LINHA

void movimentoBispo(int j, int i) 
{
    j = 4;
    i = 4;
    if (i == 0 && j == 0)
    {
        continue;
    }
    
    for (int i; i > 0; i--)
    {
        printf("Cima\n");
        if (j > 0)
        {
            printf("Direita\n");
            j--;
        }
    }
}

int main() {

    printf("\n");
    printf("Movimento do Cavalo\n");
    printf("\n");

    // LOOP DO CAVALO
    for (int i = 1; i > 0; i--) 
    {
        for (int j = 2; j > 0; j--)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
    }  

    printf("\n");
    printf("Movimento do Bispo\n");
    printf("\n");


    // LOOP DO BISPO


    return 0;
}