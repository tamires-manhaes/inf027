#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que apresente o menu de opções a seguir:
    1. Média aritmética: receber duas notas, calcular e mostrar a média aritmética
    2. Média ponderada: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
    3. Sair: sair do programa.
*/

void Menu();
void MediaAritmetica();
void MediaPonderada();

int main(){
    int op;
    int sair = 0;
    
    while(!sair){
        Menu();
        scanf("%d", &op);
        switch(op){
            case 1: {
                MediaAritmetica();
                break;
            }
            case 2: {
                MediaPonderada();
                break;
            }
            case 3: {
                sair = 1;
                printf("Finalizando...\n");
                break;
            }
            default:
                printf("OPCAO INCORRETA, TENTE NOVAMENTE!");
        }
    }
    return 0;
}

void Menu(){
    printf("\n");
    printf("1 - Media Aritmetica\n");
    printf("2 - Media Ponderada\n");
    printf("3 - Sair\n");
    printf("\n");
    printf("Digite opcao desejada: ");
}

void MediaAritmetica(){
    float media, nota1, nota2;

    printf("#### MEDIA ARITMETICA #### \n");
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2)/2;
    printf("Media = %.2f", media);
    printf("\n");   
}

void MediaPonderada(){
    float media, n1, p1, n2, p2, n3, p3;

    printf("#### MEDIA PONDERADA #### \n");
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Peso 1: ");
    scanf("%f", &p1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Peso 2: ");
    scanf("%f", &p2);
    printf("Nota 3: ");
    scanf("%f", &n3);
    printf("Peso 3: ");
    scanf("%f", &p3);

    media = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
    printf("Media = %.2f", media);
    printf("\n");
}