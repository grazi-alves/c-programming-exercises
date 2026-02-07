#include <stdio.h>

int main(){
/*
Problema "temperatura"
Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. Para
isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser
informada uma temperatura. Em seguida o programa deve mostrar a temperatura na outra escala com
duas casas decimais. A seguir é dada a fórmula para converter de Fahrenheit para Celsius (você deve
deduzir a fórmula de Celsius para Fahrenheit):*/

    char escala;
    double temperatura, resultado;
        printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
        scanf(" %c", &escala);


        if(escala == 'F' || escala == 'f'){

            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%lf", &temperatura);

            resultado = (temperatura - 32) / 1.8;
            printf("Temperatura equivalente em Celsius: %.2lf\n", resultado);
        }
        else{

            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &temperatura);

            resultado = temperatura * 1.8 + 32;
            printf("Temperatura equivalente em Fahrenheit: %.2lf", resultado);

        }


    return 0;
}
