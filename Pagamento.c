
#include <stdio.h>
#include <string.h>

int main(){
/* "Problema pagamento " Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário com
uma mensagem explicativa, conforme exemplo. */

    char nome[50];
    double valor_por_hora, horas_trabalhadas, pagamento;

    printf("Nome: ");
    fgets(nome, 50, stdin);

    nome[strcspn(nome,"\n")] = '\0';

    printf("Valor por hora: ");
    scanf("%lf", &valor_por_hora);

    printf("Horas Trabalhadas: ");
    scanf("%lf", &horas_trabalhadas);

    pagamento = valor_por_hora * horas_trabalhadas;
    printf("O pagamento para %s deve ser: %.2lf ", nome, pagamento);



    return 0;
}
