#include <stdio.h>

int main()
{
    /*Problema "soma_impares" (adaptado de URI 1071)
    Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
    impares entre eles.*/

    int x, y, i, soma = 0;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    // garante que x seja o menor
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    for (i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("SOMA DOS IMPARES = %d\n", soma);

    return 0;
}

