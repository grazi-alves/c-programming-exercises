#include <stdio.h>

int main()
{

    /*
        Problema "divisao" (adaptado de URI 1116)
        Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
        segundo. Caso não for possível, mostre a mensagem “DIVISAO IMPOSSIVEL”.*/

    int n, i;
    double numerador, denominador, divisao;

        printf("Quantos casos voce vai digitar? ");
        scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
         printf("Entre com o numerador: ");
         scanf("%lf", &numerador);
         printf("Entre com o denominador: ");
         scanf("%lf", &denominador);

     if( denominador == 0){
        printf("DIVISAO IMPOSSIVEL\n");

     }
     else{

        divisao = numerador / denominador;
        printf("DIVISAO = %.1lf\n", divisao);

     }

    }




    return 0;
}

