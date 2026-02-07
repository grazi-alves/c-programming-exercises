#include <stdio.h>

int main(){
/*
Problema "multiplos" (adaptado de URI 1044)
Fazer um programa para ler dois números inteiros, e dizer se um número é múltiplo do outro. Os
números podem ser digitados em qualquer ordem.*/

    int primeiro, segundo;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &primeiro, &segundo);

    if(primeiro % segundo == 0 || segundo % primeiro == 0){

        printf("Sao Multiplus");
    }
    else{
        printf("Nao sao multiplus");
    }


    return 0;
}
