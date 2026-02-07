#include <stdio.h>

int main(){

/*Problema "media_idades"
Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR".

Fiz meu código errado:
  int x, y, soma;
    double media;

    printf("Digite as idades: ");
    scanf("%d %d", &x, &y);

    soma = 0;
    while(x > 0 && y > 0){
         if(x < 0 && y < 0){
           printf("IMPOSSIVEL CALCULAR");
     }
       else{
        media  = (soma + y +  x)/2;
        printf("MEDIA = %.2lf", media);
       }
    }


    return 0;
}
forma correta a serguir:
*/

    int idade;
    int soma = 0;
    int cont = 0;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("IMPOSSIVEL CALCULAR\n");
    } else {

        while (idade >= 0) {
            soma += idade;
            cont++;

            scanf("%d", &idade);
        }

        double media = (double) soma / cont;
        printf("MEDIA = %.2lf\n", media);
    }

    return 0;
    }

