#include <stdio.h>


/*Problema "acima_diagonal"
Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Mostrar a soma dos elementos acima da
diagonal principal. Um exemplo de números acima da diagonal
principal é mostrado ao lado (no caso as células com fundo cinza).*/

int main(){

    int n, soma;

    printf("Qual a ordem da Matriz? ");
    scanf("%d", &n);

    int matriz[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i,j);
            scanf("%d", &matriz[i][j]);

        }
    }

    soma = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            soma += matriz[i][j];
        }
    }
    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d \n", soma);


    return 0;
}
