#include <stdio.h>

int main(){

/*Problema "media_idades"
Fa�a um programa para ler um n�mero indeterminado de dados, contendo cada um, a idade de um
indiv�duo. O �ltimo dado, que n�o entrar� nos c�lculos, cont�m um valor de idade negativa. Calcular
e imprimir a idade m�dia deste grupo de indiv�duos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".

*/

    int idade;
    int soma = 0;
    int cont = 0;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("IMPOSSIVEL CALCULAR\n");
    } else {

        while (idade >= 0) {
            soma += idade;
            cont++;

            scanf("%d", &idade);
        }

        double media = (double) soma / cont;
        printf("MEDIA = %.2lf\n", media);
    }

    return 0;
    }
