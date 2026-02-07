#include <stdio.h>

/*Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
o programa deve mostrar o valor da área do terreno, bem como o valor do preço do terreno, ambos com
duas casas decimais, conforme exemplo.
*/
int main(){

float largura, comprimento, metro, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%f", &metro);

    area = largura * comprimento;
    printf("Area do terreno = %.2f\n", area);

    preco = area * metro;
    printf("Preco do terreno = %.2f\n", preco);





 return 0;
}
