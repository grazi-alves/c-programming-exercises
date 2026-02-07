#include <stdio.h>


int main(){

    /* Problema "cada_linha"
    Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
    de cada linha. Suponha não haver empates.

    dica :
    Objetivo	Onde inicializa maior
    Maior da matriz inteira	fora de todos os for
    Maior de cada linha	dentro do for (i)
    Maior de cada coluna	dentro do for (j)

     */

    int n, maior;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int matriz[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i,j);
            scanf("%d", &matriz[i][j]);

        }
    }


    printf("Maior de cada linha:\n");

    for(int i = 0; i < n; i++){
        int maior = matriz[i][0];
        for(int j = 1; j < n; j++){
           if(matriz[i][j] > maior){
            maior = matriz[i][j];

           }
        }
        printf("%d \n", maior);
    }



    return 0;
}
