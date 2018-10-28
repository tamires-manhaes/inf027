#include <stdio.h>
#include <stdlib.h>
/*Flíper é um tipo de jogo onde uma bolinha de metal cai por um labirinto de caminhos até chegar na parte de baixo do labirinto. A quantidade de 
pontos que o jogador ganha depende do caminho que a bolinha seguir. O jogador pode controlar o percurso da bolinha mudando a posição de algumas
portinhas do labirinto. Cada portinha pod estar na posição 0, que significa virada para a esquerda, ou na posição 1 que quer dizer virada para a
direita. Considere o flíper que tem três portinhas, a Q na posição 0, e a portinha R, na posição 1. Escreva um programa em C, que leia a posição
das portinhas P, Q e R e indique em qual ds saídas a bolinha irá cair.*/

int main(){
    int Q, P, R;

    printf("Valor portinha Q: ");
    scanf("%d", &Q);

    printf("Valor portinha P: ");
    scanf("%d", &P);

    printf("Valor portinha R: ");
    scanf("%d", &R);

    if(Q == 0 && R == 1)
        printf("C!");
        else if(Q == 0 && R == 0)
            printf("D!");
            else if(Q == 1 && P == 1)
                printf("A!");
                else if(Q == 1 && P == 0)
                printf("B!");
                else
                    printf("Fim!");
                    
    return 0;
}