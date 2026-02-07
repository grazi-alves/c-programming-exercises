#include <stdio.h>

/*
Problema "dardo"
No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir.
Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual
foi a maior.*/

int main(){

    double primeira, segunda, terceira, maior;

    printf("Digite as tres distancias: ");
    scanf("%lf %lf %lf", &primeira, &segunda, &terceira);


    if(primeira > segunda && primeira > terceira){
        maior = primeira;
    }
    else if(segunda > terceira){
        maior = segunda;
    }
    else{
        maior = terceira;
    }

    printf("MAIOR DISTANCIA = %.2lf\n", maior);

    return 0;
}
