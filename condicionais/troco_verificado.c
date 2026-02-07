#include <stdio.h>

int main(){
/* Problema "troco_verificado"
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
valor restante conforme exemplo. */


    double preco_unitario, quantidade, troco, valor_recebido, total, faltante;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco_unitario);

    printf("Quantidade comprada: ");
    scanf("%lf", &quantidade);

    printf("Dinheiro recebido: ");
    scanf("%lf", &valor_recebido);

    total = preco_unitario * quantidade;
    faltante = total - valor_recebido;
    troco = valor_recebido - total;
    if(valor_recebido < total ){
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", faltante);

    }
    else{
        printf("TROCO: %.2lf", troco);
    }



    return 0;
}
