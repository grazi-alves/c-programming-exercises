#include <stdio.h>
    /*
    Problema "dados_pessoas"
    Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
    que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
    de homens.
    #include <stdio.h>

int main(){
    int n, qtdhomens, qtdmulheres;
    double menoraltura, maioraltura, alturafemMedia, alturafemtotal;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    double alturas[n];
    char generos[n];

    for (int i=0; i<n; i++) {
        printf("Altura da %da pessoa: ", i + 1);
        scanf("%lf", &alturas[i]);
        printf("Genero da %da pessoa: ", i + 1);
        scanf(" %c", &generos[i]);
    }

    menoraltura = alturas[0];
    maioraltura = alturas[0];

    for (int i=1; i<n; i++) {
        if (alturas[i] > maioraltura) {
            maioraltura = alturas[i];
        }
        if (alturas[i] < menoraltura) {
            menoraltura = alturas[i];
        }
    }

	qtdhomens = 0;
	qtdmulheres = 0;
	alturafemtotal = 0;
    for (int i=0; i<n; i++) {
        if (generos[i]=='M') {
            qtdhomens++;
        }
        else {
            qtdmulheres++;
            alturafemtotal = alturafemtotal + alturas[i];
        }
    }

    alturafemMedia = alturafemtotal / qtdmulheres;

    printf("Menor altura = %.2lf\n", menoraltura);
    printf("Maior altura = %.2lf\n", maioraltura);
    printf("Media das alturas das mulheres = %.2lf\n", alturafemMedia);
	printf("Numero de homens = %d\n", qtdhomens);

    return 0;
}

    */

    int main(){

    int n, count, qtd;
    double media, menor_alt, maior_alt, soma;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    double altura[n];
    char genero[n];

    for(int i = 0; i < n; i++){
        printf("Altura da %da pessoa: ", i+1);
        scanf("%lf", &altura[i]);
        printf("Genero da %da pessoa: ", i+1);
        scanf(" %c", &genero[i]);

    }

    menor_alt = altura[0];
    for(int i = 1; i < n; i++){
        if(altura[i] < menor_alt){
            menor_alt = altura[i];
        }
    }
    printf("Menor altura: %.2lf\n", menor_alt);


    maior_alt = altura[0];
    for(int i = 1; i < n; i++){
        if(altura[i] > maior_alt){
            maior_alt = altura[i];
        }
    }
    printf("Maior altura: %.2lf\n", maior_alt);


    soma = 0;
    qtd = 0;
    for(int i = 0; i < n; i++){
        if(genero[i] == 'F' || genero[i] == 'f'){
            qtd++;
            soma += altura[i];
        }
    }
    if(qtd > 0){
        media = soma / qtd;
        printf("Media das alturas das mulheres = %.2lf\n", media);
    }
    else {
        printf("Nao ha mulheres cadastradas.\n");
    }



    count = 0;
     for(int i = 0; i < n; i++){
        if(genero[i] == 'M' || genero[i] == 'm'){
            count++;

        }
    }
    printf("Numero de Homens: %d\n", count);


    return 0;
}
