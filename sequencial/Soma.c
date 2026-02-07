#include <stdio.h>

int main(){
/*Problema "soma"
Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma destes
números. */

int x, y, soma;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    soma = x + y;
    printf("SOMA = %d", soma);


return 0;
}
