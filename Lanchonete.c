#include <stdio.h>

int main(){
/* Problema "lanchonete" (adaptado de URI 1038)
Uma lanchonete possui v�rios produtos. Cada produto possui um c�digo
e um pre�o. Voc� deve fazer um programa para ler o c�digo e a
quantidade comprada de um produto (suponha um c�digo v�lido), e da�
informar qual o valor a ser pago, com duas casas decimais, conforme
tabela de produtos ao lado.

*/

    int x, quantidade;
    double valor, pagar;

    printf("Codigo do produto comprado: ");
    scanf("%d", &x);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    if(x == 1){
        valor = 5.00;
    }

    else if(x == 2){
        valor = 3.50;

    }
    else if(x == 3){
        valor = 4.80;

    }
    else if(x == 4){
        valor = 8.90;

    }
    else if(x == 5){
        valor = 7.32;

    }

    pagar = valor * quantidade;
    printf("Valor a pagar: R$ %.2lf", pagar);










    return 0;
}
