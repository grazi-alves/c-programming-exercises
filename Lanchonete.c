#include <stdio.h>

int main(){
/* Problema "lanchonete" (adaptado de URI 1038)
Uma lanchonete possui vários produtos. Cada produto possui um código
e um preço. Você deve fazer um programa para ler o código e a
quantidade comprada de um produto (suponha um código válido), e daí
informar qual o valor a ser pago, com duas casas decimais, conforme
tabela de produtos ao lado.

Professor: #include <stdio.h>

int main(){
    int codigo, qtd;
    double pagar;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);

    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    if (codigo == 1) {
        pagar = qtd * 5.00;
    }
    else if (codigo == 2) {
        pagar = qtd * 3.50;
    }
    else if (codigo == 3) {
        pagar = qtd * 4.80;
    }
    else if (codigo == 4) {
        pagar = qtd * 8.90;
    }
    else if (codigo == 5) {
        pagar = qtd * 7.32;
    }

	printf("Valor a pagar: R$ %.2lf\n", pagar);

	return 0;
}

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
