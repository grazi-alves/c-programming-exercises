#include <stdio.h>

int main(){
/*Problema "duracao"
Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
formato horas:minutos:segundos.*/

    int duracao, horas, minutos, segundos, resto;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duracao);

    horas = duracao / 3600;
    resto = duracao % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d:%d:%d",horas, minutos, segundos);


    return 0;
}
