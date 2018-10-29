#include <stdio.h>
#include <stdlib.h>

/*Ler um número e imprimir se este número é ou não par.*/

int main(){
    int numero;

    printf("Digite numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0)
        printf("Numero eh par!\n");
        else
            printf("Numero nao eh par!\n");
            
    return 0;
}