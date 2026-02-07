#include <stdio.h>

/*Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de
uma disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no
ano juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a
mensagem "REPROVADO"
*/


int main(){

   float n1, n2, nota;

   printf("Digite a primeira nota: ");
   scanf("%f",&n1);

   printf("Digite a segunda nota: ");
   scanf("%f",&n2);

   nota = n1 + n2;
   printf("NOTA FINAL %.1f\n", nota);

   if(nota < 60.0){
    printf("REPROVADO\n");
   }

 return 0;
}


