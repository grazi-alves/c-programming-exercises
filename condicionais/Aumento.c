#include <stdio.h>

int main(){
/*
Problema "aumento" (adaptado de URI 1048)
Uma empresa vai conceder um aumento percentual de
salário aos seus funcionários dependendo de quanto
cada pessoa ganha, conforme tabela ao lado. Fazer um
programa para ler o salário de uma pessoa, daí mostrar
qual o novo salário desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de
aumento.

Professor:
#include <stdio.h>

int main(){
    double salario, novosalario, aumento;
    int porcentagem;

    printf("Digite o salario da pessoa: ");
	scanf("%lf", &salario);

    if (salario <= 1000.0) {
        porcentagem = 20;
        aumento = salario * porcentagem / 100;
        novosalario = salario + aumento;
    }
    else if (salario <= 3000.0) {
        porcentagem = 15;
        aumento = salario * porcentagem / 100;
        novosalario = salario + aumento;
    }
    else if (salario <= 8000.0) {
        porcentagem = 10;
        aumento = salario * porcentagem / 100;
        novosalario = salario + aumento;
    }
    else {
        porcentagem = 5;
        aumento = salario * porcentagem / 100;
        novosalario = salario + aumento;
    }

	printf("Novo salario = R$ %.2lf\n", novosalario);
	printf("Aumento = R$ %.2lf\n", aumento);
	printf("Porcentagem = %d %%\n", porcentagem);

	return 0;
}

*/


    double salario, novo_salario, aumento, porcentagem;


    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);


    if(salario <= 1000){
        aumento = 0.2 * salario;
    }
    else if (salario <= 3000){
        aumento = 0.15 * salario;
    }
    else if (salario <= 8000){
        aumento = 0.1 * salario;
    }
    else if (salario > 8000){
        aumento = 0.05 * salario;
    }

    novo_salario = salario + aumento;
    porcentagem = (aumento / salario) * 100;

    printf("Novo salario: R$ %.2lf \n", novo_salario);
    printf("Aumento: R$ %.2lf \n", aumento);
    printf("Porcentagem: %.0lf %% \n", porcentagem);


    return 0;
}
