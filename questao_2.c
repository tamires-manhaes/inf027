#include <stdio.h>
#include <stdlib.h>

/*Faça um programa em C que calcule a média aritmética de dois valores lidos do usuário. Os valores lidos e a média aritmética devem ser exibidas
na tela. O programa deve perguntar ao usuário se ele deseja ler mais valores ao final do processo. Obviamente deve ler mais valores em caso 
afirmativo.*/

void menu();
void CalculoMedia();

int main(){
    float media;
    int sair = 0;
    int op;

    while(!sair){
        menu();
        scanf("%d", &op);
        switch(op){
            case 0:{
                printf("Finalizando...\n");
                sair = 1;
                break;
            }
            case 1:{
                CalculoMedia();
                break;
            }
            default: 
                printf("OPCAO INCORRETA, TENTE NOVAMENTE!\n");
        }
    }
    return 0;
}

void menu(){
    printf("\n");
    printf("------------------------\n");
    printf(" 1 - Calcular Media\n");
    printf(" 0 - Sair\n");
    printf("------------------------\n");
    printf("Digite opcao: ");
}

void CalculoMedia(){
    float nota1, nota2, media;

    printf("\n");

    printf("NOTA 1: ");
    scanf("%f", &nota1);

    printf("NOTA 2: ");
    scanf("%f", &nota2);
   
    media = (nota1 + nota2)/2;

    printf("%.2f", media);
}