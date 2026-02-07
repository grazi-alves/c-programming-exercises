#include <stdio.h>

int main()
{
    /*
     Problema "dentro_fora" (adaptado de URI 1072)
     Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
     Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
     conforme exemplo*/


    int n, x, dentro = 0, fora = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);


    for (int i = 0; i < n; i++)
    {

       printf("Digite um numero: ");
       scanf("%d", &x);

        if (x < 10 || x > 20)
        {
            fora++;

        }
        else
        {   dentro++;

        }
    }
         printf("Dentro: %d\n", dentro);
         printf("Fora: %d\n", fora);

    return 0;
}
