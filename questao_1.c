#include <stdio.h>
#include <stdlib.h>

/*Faça um programa em C que imprime um cartão com seus dados pessoais na tela.*/

typedef struct dados_cartao{
    char Nome[100];
    char DataNascimento[15];
    char Rg[11];
    char Cpf[11];
    char Endereco[100];
    char FatorRh[4];
    char Telefone[12];
} Dados;

int main(){
    Dados cartao;

    printf("-------------------------------------------\n");

    printf("Nome: ");
    fgets(cartao.Nome, 100, stdin);

    printf("Data de Nascimento: ");
    fgets(cartao.DataNascimento, 15, stdin);

    printf("RG: ");
    fgets(cartao.Rg, 11, stdin);

    printf("CPF: ");
    fgets(cartao.Cpf, 11, stdin);

    printf("Endereco: ");
    fgets(cartao.Endereco, 13, stdin);

    printf("Tipo Sanguineo: ");
    fgets(cartao.FatorRh, 4, stdin);

    printf("Telefone: ");
    fgets(cartao.Telefone, 12, stdin);

    printf("--------------------------------------------\n");

    return 0;
}
