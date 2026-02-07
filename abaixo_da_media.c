#include <stdio.h>

int main(){
    /* Problema "abaixo_da_media"
    Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
    mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
    os elementos do vetor que estejam abaixo da média, com uma casa decimal cada.*/


    int n ;
    double media, soma;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    double vet[n];
    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    soma = 0;
    for(int i = 0; i < n; i++){
        soma += vet[i];

    }
     media = soma / n;
     printf("MEDIA DO VETOR = %.3lf\n", media);

     printf("Elementos abaixo da media: \n");

     for(int i = 0; i < n; i++){
        if(vet[i] < media ){
          printf("%.1lf", vet[i]);
        }
    }




    return 0;
}
