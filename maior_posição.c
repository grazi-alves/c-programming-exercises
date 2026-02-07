#include <stdio.h>

int main(){

    /* Problema "maior_posicao"
    Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela
    o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
    considerando a primeira posição como 0 (zero). */

    int n, maior, posicao;

    printf("Quanto numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    maior = vet[0];
    posicao = 0;

    for(int i = 0; i < n; i++){
        if(vet[i] > maior){
           maior = vet[i];
           posicao = i;
        }

    }


    printf("MAIOR VALOR = %d\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d\n", posicao);

    return 0 ;
}
