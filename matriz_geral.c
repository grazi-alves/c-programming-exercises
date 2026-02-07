#include <stdio.h>


    /*
    Problema "matriz_geral"
    Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
    seguintes ações:


    a) calcular e imprimir a soma de todos os elementos positivos da matriz.
    b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
    c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
    d) imprimir os elementos da diagonal principal da matriz.
    e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
    a matriz alterada. */

int main(){

     int n, x, y;
     double soma_positivos = 0;

     printf("Qual a ordem da matriz? ");
     scanf("%d", &n);

     double matriz[n][n];

     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        printf("Elementos [%d,%d]: ", i,j);
        scanf("%lf", &matriz[i][j]);
        }
     }


     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
          if(matriz[i][j] > 0){
            soma_positivos += matriz[i][j];
          }
        }
     }

    printf("\nSoma dos positivos: %.1lf\n", soma_positivos);


    //imprime uma linha especifica
    printf("\nEscolha uma linha: ");
    scanf("%d", &x);

    printf("Linha escolhida %d: ", x);
    for(int j = 0; j < n; j++){
          printf("%.1lf ", matriz[x][j]);
    }
    printf("\n");


    // imprime uma coluna especifica
    printf("\nEscolha uma coluna: ");
    scanf("%d", &y);

    printf("Coluna escolhida %d: ", y);
    for(int i = 0; i < n; i++){
          printf("%.1lf ", matriz[i][y]);
    }
    printf("\n");


    // imprime diagonal principal
    printf("\nDIAGONAL PRINCIPAL: \n");
    for(int i = 0; i < n; i++){
        printf("%.1lf ", matriz[i][i]);
    }
    printf("\n");


    // eleva ao quadrado os numeros negativos
    printf("\nMATRIZ ALTERADA: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matriz[i][j] < 0){
              matriz[i][j] = matriz[i][j] * matriz[i][j];
            }
            printf("%.1lf ", matriz[i][j]);
        }
         printf("\n");
     }


    return 0;
}
