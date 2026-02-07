#include <stdio.h>

/*Problema "alturas"
Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.

Jeito do Professor dificil:
#include <stdio.h>
#include <string.h>

void limpar_entrada() {
   char c;
   while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
   fgets(buffer, length, stdin);
   strtok(buffer, "\n");
}

int main(){
   int n, nmenores;
   double alturatotal, alturamedia, percentualMenores;

   printf("Quantas pessoas serao digitadas? ");
   scanf("%d", &n);

   char nomes[n][50];
   int idades[n];
   double alturas[n];

   for (int i=0; i<n; i++) {
	printf("Dados da %da pessoa:\n", i + 1);
       printf("Nome: ");
       limpar_entrada();
       ler_texto(nomes[i], 50);
       printf("Idade: ");
       scanf("%d", &idades[i]);
       printf("Altura: ");
       scanf("%lf", &alturas[i]);
   }

nmenores = 0;
alturatotal = 0;
   for (int i=0; i<n; i++) {
       if (idades[i] < 16) {
           nmenores++;
       }
       alturatotal = alturatotal + alturas[i];
   }

   alturamedia = alturatotal / n;
   percentualMenores = ((double)nmenores / n) * 100.0;

printf("\nAltura media = %.2lf\n", alturamedia);
   printf("Pessoas com menos de 16 anos: %.1lf%%\n", percentualMenores);

   for(int i=0; i<n; i++) {
       if (idades[i] < 16) {
           printf("%s\n", nomes[i]);
       }
   }

   return 0;
}*/

int main()
{


    int n;

    printf("Quantas pessoas serao digitadas: ");
    scanf("%d", &n);

    char nome[n][50];
    int idade[n];
    double altura[n];

    for(int i = 0 ; i < n; i++)
    {
        printf("Dados da %d pessoa\n", i+1);

        printf("Nome: ");
        scanf(" %[^\n]", nome[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);

        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }
    double soma = 0;
    int menor = 0;

    for (int i = 0; i < n; i++)
    {
        soma += altura[i];
        if (idade[i] < 16)
        {
            menor++;
        }
    }

    double media = soma / n;
    double percentual = (double)menor / n * 100;

    printf("\nAltura media = %.2lf\n", media);
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", percentual);

    for (int i = 0; i < n; i++)
    {
        if (idade[i] < 16)
        {
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}


