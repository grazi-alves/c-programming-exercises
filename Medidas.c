#include <stdio.h>
#include <math.h>


int main(){
/*Problema "medidas"
Fazer um programa para ler três medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
com quatro casas decimais):
a) a área do quadrado que tem lado A
b) a área do triângulo retângulo que base A e altura B
c) a área do trapézio que tem bases A e B, e altura C*/

    float a, b, c, quadrado, triangulo, trapezio;

    printf("Digite a medida A: ");
    scanf("%f", &a);

    printf("Digite a medida B: ");
    scanf("%f", &b);

    printf("Digite a medida C: ");
    scanf("%f", &c);

    quadrado = pow(a, 2);
    triangulo = (a * b) / 2;
    trapezio = ((a + b) * c) / 2;
    printf("AREA DO QUADRADO = %f\n", quadrado);
    printf("AREA DO TRIANGULO = %f\n", triangulo);
    printf("AREA DO TRAPEZIO = %f", trapezio);




    return 0;
}

