#include <stdio.h>

int main(){

/*Problema "crescente" (adaptado de URI 1113)
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais.

*/

    int x , y;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    while(x != y){
            if (x > y){
             printf("DECRESCENTE!\n");
            }
            else{
             printf("CRESCENTE!\n");
            }

    printf("Digite outros dois numeros: \n ");
    scanf("%d %d", &x, &y);
    }



    return 0;
}



