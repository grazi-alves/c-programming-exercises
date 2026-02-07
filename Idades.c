#include <stdio.h>

int main(){

/*problema "idades"
Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo.

char nome1[50], nome2[50];
int idade1, idade2;
double media;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%d",&idade1);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("Idade: ");
    scanf("%d",&idade2);

    media = (double)(idade1 + idade2)/2;
    printf("A idade media de %s e %s e de %.1lf anos", nome1, nome2, media);



return 0;
} A FUNÇÃO GETS OCASIONAVA PROBLEMA DE BUFFER OVERFLOW, ENTÃO FOI SUBSTITUIDA POR FGETS.
*/
#include <stdio.h>
#include <string.h>

int main() {

    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    fgets(nome1, 50, stdin);

    // Remove o '\n' do final
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &idade1);

    // Limpa o buffer antes do próximo fgets
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    fgets(nome2, 50, stdin);

    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &idade2);

    media = (double)(idade1 + idade2) / 2.0;

    printf("\nA idade media de %s e %s e de %.1lf anos", nome1, nome2, media);

    return 0;
}
