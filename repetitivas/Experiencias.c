#include <stdio.h>



int main(){

    /*Problema "experiencias" (adaptado de URI 1094)
    Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
    organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
    quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
    laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
    informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
    utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
    valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
    inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
    de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
    cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
    percentual deve ser apresentado com dois dígitos após o ponto. */

    int n, i, qtd;
    int total = 0;
    int C = 0, R = 0, S = 0;
    char tipo;
    double percentual1, percentual2, percentual3;

    printf("Quantos casos de teste serao digitados?  ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("Quantidade de cobaias: ");
        scanf("%d", &qtd);

        printf("Tipo de cobaias(C,R,S): ");
        scanf(" %c", &tipo);

        total += qtd;

        if (tipo == 'C'|| tipo == 'c') {
            C += qtd;
        }
        else if (tipo == 'R'|| tipo == 'r') {
            R += qtd;
        }
        else if (tipo == 'S' || tipo == 's') {
            S += qtd;
        }

    }


     percentual1 = (double)(C / qtd) * 100;
     percentual2 = (double)(R / qtd) * 100;
     percentual3 = (double)(S / qtd) * 100;

    printf("Relatorio final:\n");
    printf("Total cobaias: %d\n", total);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2lf\n", percentual1);
    printf("Percentual de ratos: %.2lf\n", percentual2);
    printf("Percentual de sapos: %.2lf\n", percentual3);




    return 0;
}
