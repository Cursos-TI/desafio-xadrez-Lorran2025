#include <stdio.h>

//Movimentação da Torre
void moverTorre(int casas){
    if(casas > 0) {
        printf("Torre: Direita \n");
        moverTorre(casas - 1);
    }
}

//Movimentação do Bispo (Com Recursividade)
void moverBispo(int casas){
    if (casas > 0){   
        printf("Bispo: Cima, Direita \n");
        moverBispo(casas - 1);
    }
}

//Movimentação do Bispo (Com Loops Aninhados)
void moverBispoComLoopsAninhados(int casas){
    for (int i = 0; i < casas; i++){
    for (int j = 0; j < 1; j++){
        printf("Bispo (Loop Aninhado): Cima, Direita \n");
}
}
}

//Movimentação da Rainha
void moverRainha(int casas){
    if(casas > 0){
        printf("Rainha: Esquerda \n");
        moverRainha(casas - 1);
    }
}

//Movimentação do Cavalo
void moverCavalo(int casas){
    for (int i = 0; i < casas; i++){
    for (int j = 0; j < casas; j++){
        if (i == j){
            printf("Cavalo: Cima\n");
            printf("Cavalo: Cima\n");
            printf("Cavalo: Direita\n");
        }
    }
    }
    }

int main(){
    moverTorre(5);
    moverBispo(5);
    moverBispoComLoopsAninhados(5);
    moverRainha(8);
    moverCavalo(1);
    return 0;
}

