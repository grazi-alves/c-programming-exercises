#include <stdio.h>

/*Problema "numeros_pares"
Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os números pares, e também a quantidade de números pares. */

int main(){

    int n,i, quantidade;

    printf("Quantos numeros voce vai Digitar? ");
    scanf("%d", &n);

    int vet[n];

    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }


    quantidade = 0;

    printf("\nNUMEROS PARES:\n");


    for(int i = 0; i < n; i++){
         if(vet[i] % 2 == 0){
            printf("%d ", vet[i]);
            quantidade++;
         }
    }
    printf("\n\nQUANTIDADE DE PARES = %d\n ", quantidade);


    return 0;
}
