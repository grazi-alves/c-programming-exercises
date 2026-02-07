#include <stdio.h>


int main()
{

    /* Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
    e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos. */

    int n, i, vet[n];

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNumeros Negativos:\n");

    for(i = 0; i < n; i++)
    {
        if(vet[i] < 0)
        {
            printf("%d\n", vet[i]);

        }
    }


    return 0;
}
