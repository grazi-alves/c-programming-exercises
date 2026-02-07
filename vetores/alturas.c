#include <stdio.h>

/*Problema "alturas"
Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura m�dia das pessoas, e mostrar tamb�m a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.

*/

int main()
{


    int n;

    printf("Quantas pessoas serao digitadas: ");
    scanf("%d", &n);

    char nome[n][50];
    int idade[n];
    double altura[n];

    for(int i = 0 ; i < n; i++)
    {
        printf("Dados da %d pessoa\n", i+1);

        printf("Nome: ");
        scanf(" %[^\n]", nome[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);

        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }
    double soma = 0;
    int menor = 0;

    for (int i = 0; i < n; i++)
    {
        soma += altura[i];
        if (idade[i] < 16)
        {
            menor++;
        }
    }

    double media = soma / n;
    double percentual = (double)menor / n * 100;

    printf("\nAltura media = %.2lf\n", media);
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", percentual);

    for (int i = 0; i < n; i++)
    {
        if (idade[i] < 16)
        {
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}


