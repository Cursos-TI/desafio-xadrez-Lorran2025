#include <stdio.h>

int main() {
    int i;

    //Movimentação da torre
    i = 1;
    while (i <= 5)
    {
        printf("Torre: Direita \n");
        i++;
    }
    //Movimentação do bispo
    i = 1;
    do
    {
        printf("Bispo: Cima, direita \n");
        i++;

    } while (i <= 5);
    //Movimentação da rainha
    for (i = 1; i <= 8; i++)
    {
        printf("Rainha: Esquerda \n");
    }

    return 0;
}
