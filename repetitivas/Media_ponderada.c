#include <stdio.h>

int main()
{
    /*Problema "media_ponderada" (adaptado de URI 1079)
    Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de
    teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo
    que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
    que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
    pela soma dos pesos.*/

     int n, i;
     double x, y, z, media;


     printf("Quantos casos voce vai digitar? ");
     scanf("%d", &n);

     for(i = 0; i < n; i++)
     {
       printf("Digite tres numeros:  ");
       scanf("%lf %lf %lf", &x, &y, &z);


      media = (2 * x + 3 * y + 5 * z) / 10;
      printf("MEDIA  = %.1lf\n", media);
     }



    return 0;
}
