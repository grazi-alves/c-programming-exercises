#include<stdio.h>

int main(){

    /* Problema "soma_linhas"
    Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
    de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
    seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado.

    APrendizado: Para cada linha i da matriz, eu começo a soma do zero, percorro todas as colunas j dessa linha e guardo o resultado em vetor[i].”
    */


    int n , m, i;


    printf("Qual a quantidade de linhas da Matriz? ");
    scanf("%d", &n);

    printf("Qual a quantidade de colunas da Matriz? ");
    scanf("%d", &m);

    double matriz[n][m];
    double vetor[n];

    for(int i = 0; i < n; i++){
        printf("Digite os elementos da %da linha: \n", i+1);
            for(int j = 0; j < m; j++){
                scanf("%lf", &matriz[i][j]);

        }
    }

    for(int i = 0; i < n; i++){
        vetor[i] = 0;   // zera a soma da linha
        for(int j = 0; j < m; j++){
            vetor[i] += matriz[i][j];
        }
    }
    printf("Vetor Gerado: \n");

    for(int i = 0; i < n; i++){
        printf("%.2lf\n", vetor[i]);
        }


    return 0;
}

