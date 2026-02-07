#include <stdio.h>


int main()
{

    /* Problema "soma_vetor" Faça um programa que leia N números reais
    e armazene-os em um vetor. Em seguida: - Imprimir todos os elementos do
     vetor - Mostrar na tela a soma e a média dos elementos do vetor  */

    int n;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);

    }
    printf("\nValores: ");

     for(int i = 0; i < n; i++){
        printf("%.1lf ", vet[i]);

     }
     printf("\n");

     soma = 0;
     for(int i = 0; i < n; i++){
        soma += vet[i];

     }

      printf("SOMA = %.2lf\n", soma);

      media = soma / n;
      printf("MEDIA = %.2lf", media);







    return 0;
}

