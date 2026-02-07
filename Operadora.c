#include <stdio.h>


int main(){
/*Problema "operadora"
Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.

Professor : #include <stdio.h>

int main(){
    int minutos;
    double valor;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    valor = 50.0;

    if (minutos>100) {
        valor = valor + (minutos - 100) * 2.0;
    }

    printf("Valor a pagar: R$ %.2lf\n", valor);

	return 0;
}


*/
    int minutos;
    double pago;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    if(minutos <= 100){
        printf("Valor a pagar: R$ 50.00");

    }
    else{
    pago = 50 + (minutos - 100) * 2;
       printf("Valor a pagar: R$ %.2lf", pago);
    }


    return 0;
}
