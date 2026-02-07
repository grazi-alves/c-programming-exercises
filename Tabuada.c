#include <stdio.h>

int main()
{
    /* Problema "tabuada"
    Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.*/

    int x, i, mult;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &x);

    for (i = 1 ; i <= 10 ; i++)
    {
        mult = x * i;
        printf("%d x %d = %d\n", x, i, mult);
    }

    return 0;
}

