#include <stdio.h>

int main(){

    int i;
    int movimentoCompleto = 1;

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
    
    //Movimentação do cavalo
    while (movimentoCompleto--)
    {
        for (int i = 1; i <= 2; i++){
            printf("Cavalo: Cima \n");
        } 
            printf("Cavalo: Direita \n");
    }
    
    return 0;
}