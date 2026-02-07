#include <stdio.h>


int main(){

    /* Problema "fatorial" (adaptado de URI 1153)
    Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
    fatorial de N. */


    int n , i, fatorial = 1;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for(i = n  ; i > 0 ; i--)
    {
         fatorial = fatorial * i;

    }

     printf("FATORIAL: %d\n", fatorial);











    return 0;
}
