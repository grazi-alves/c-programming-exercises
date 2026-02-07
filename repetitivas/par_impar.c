#include <stdio.h>

int main()
{
    /*

    Problema "par_impar" (adaptado de URI 1074)
    Leia um valor inteiro N. Este valor ser� a quantidade de n�meros inteiros que ser�o lidos em seguida.
    Para cada valor lido, mostre uma mensagem dizendo se este valor lido � PAR ou IMPAR, e tamb�m
    se � POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa dever� imprimir
    apenas NULO.
    

    */



    int n, x;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);


    for (int i = 0; i < n; i++)
    {

       printf("Digite um numero: ");
       scanf("%d", &x);

        if (x == 0)
        {
           printf("NULO\n");

        }
        else if (x % 2 != 0 && x > 0)
        {
            printf("IMPAR E POSITIVO\n");

        }
        else if (x % 2 != 0 && x < 0)
        {
            printf("IMPAR E NEGATIVO\n");

        }
        else if (x % 2 == 0 && x > 0)
        {
           printf("PAR E POSITIVO\n");

        }
        else if (x % 2 == 0 && x < 0)
        {
           printf("PAR E NEGATIVO\n") ;

        }

    }


    return 0;
}

