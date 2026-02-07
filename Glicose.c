#include <stdio.h>

int main(){

/*Problema "glicose"
Fazer um programa para ler a quantidade de glicose
no sangue de uma pessoa e depois mostrar na tela a
classificação desta glicose de acordo com a tabela de
referência ao lado.

Professor : #include <stdio.h>

int main(){
    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    printf("Classificacao: ");

    if (glicose <= 100) {
        printf("normal\n");
    }
    else if (glicose <= 140) {
        printf("elevado\n");
    }
    else {
        printf("diabetes\n");
    }

	return 0;
}
*/

    int glicose, classificacao;

    printf("Digite a medida da glicose: ");
    scanf("%d", &glicose);

    if( glicose <= 100){
        printf("Classificacao: Normal");

    }
    else if( glicose > 100 && glicose <= 140){
        printf("Classificacao: Elevado");

    }
     else{
        printf("Classificacao: Diabetes");

     }

    return 0;
}
