#include <stdio.h>

int main()
{
    /*

    Problema "par_impar" (adaptado de URI 1074)
    Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida.
    Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
    se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
    apenas NULO.
    Professor : #include <stdio.h>

int main(){
    int n, valor;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &valor);

        if (valor == 0) {
            printf("NULO\n");
        }
        else {
            if (valor % 2 == 0) {
                printf("PAR");
            }
            else {
                printf("IMPAR");
            }

            if(valor > 0) {
                printf(" POSITIVO\n");
            }
            else {
                printf(" NEGATIVO\n");
            }
        }
    }

	return 0;
}

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

