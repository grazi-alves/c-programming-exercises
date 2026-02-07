 #include <stdio.h>

int main(){
 int x, i;

    /*
Problema "sequencia_impares" (adaptado de URI 1067)
Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X,
se for o caso.
Professor :#include <stdio.h>

int main(){
    int x;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    for (int i=1; i<=x; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
*/

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    if(x % 2 != 0)
    {
        for(i = 1; i <= x; i += 2)
        {
            printf("%d \n",i);
        }

    }
    else{
         for(i = 1; i <= x - 1; i += 2)
        {
            printf("%d\n",i);
        }

    }

    return 0;
}

