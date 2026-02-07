#include <stdio.h>

int main(){

    /*Problema "soma_matrizes"
    Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
    cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
    dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada. */


    int a, b;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d", &a);
    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d", &b);

    int matA[a][b], matB[a][b], matC[a][b];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("Digite os valores da matriz A [%d,%d]: ", i,j);
            scanf("%d", &matA[i][j]);

        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("Digite os valores da matriz B [%d,%d]: ", i,j);
            scanf("%d", &matB[i][j]);

        }
    }
    printf("Matriz soma:\n");

    for(int i = 0; i < a; i++){
        printf("\n");
        for(int j = 0; j < b; j++){
            matC[i][j] = matA[i][j] + matB[i][j];
            printf("%d ", matC[i][j]);

        }
    }


 return 0;
}
