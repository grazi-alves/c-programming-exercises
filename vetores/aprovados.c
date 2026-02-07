#include <stdio.h>

int main(){

    /*Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
    no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
    os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
    igual a 6.0 (seis). */

    int n, i;
    double media;

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &n);

    char nome[n][50];
    double nota1[n], nota2[n];

    for(int i = 0; i < n; i++){
        printf("Digite nome, primeira e segunda nota do %da aluno:\n ", i+1);
        scanf("%s %lf %lf", nome[i], &nota1[i], &nota2[i]);

    }

    printf("Alunos aprovados: ");

    for(int i = 0; i < n; i++){
        media = (nota1[i] + nota2[i]) / 2.0;

        if(media >= 6.0){
           printf("%s\n", nome[i]);
        }
    }





    return 0;
}
