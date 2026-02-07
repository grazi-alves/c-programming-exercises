#include <stdio.h>

int main(){

    /*Problema "mais_velho"
    Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
    devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
    da pessoa mais velha. */

    int n, maior_idade, posicao_maior;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &n);

    char nome[n][50];
    int idade[n];

    for(int i = 0; i < n; i++){
        printf("Dados da %da pessoa: \n", i+1);

        printf("Nome: ");
        scanf("%s", nome[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);

    }
    maior_idade = idade[0];
    posicao_maior = 0;

    for(int i = 0; i < n; i++){
        if(idade[i] > maior_idade){
            maior_idade = idade[i];
            posicao_maior = i;
        }
    }
    printf("PESSOA MAIS VELHA: %s\n", nome[posicao_maior]);




    return 0;
}
