#include <stdio.h>

int main(){

    /*Problema "media_pares "
    Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
    aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
    digitado, mostrar a mensagem "NENHUM NUMERO PAR" */

    int n;
    double media, soma;
    int qtd_pares;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    int vet[n];
    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    soma = 0;
    qtd_pares = 0;
    for(int i = 0; i < n; i++){
        if(vet[i] % 2 == 0){
        soma += vet[i];
        qtd_pares++;

       }

    }
    if(qtd_pares > 0){
        media = soma / qtd_pares;
        printf("MEDIA DOS PARES = %.1lf\n", media);
    }
    else{
        printf("NENHUM NUMERO PAR\n");
    }



    return 0;
}
