#include <stdio.h>


int main(){

    /*Problema "comerciante"
    Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
    mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
    venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
    proporcionaram:
     lucro < 10%
     10% ≤ lucro ≤ 20%
     lucro > 20%
    Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
    o lucro total.

  
     
    */

    int n, lucro10, lucro_entre, lucro20;
    double soma_compra, soma_venda, lucro_total;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &n);

    char nome[n][50];
    double compra[n] , venda[n];


    for(int i = 0; i < n; i++){
        printf("Produto %d\n", i+1);

        printf("Nome: ");
        scanf("%s", nome[i]);

        printf("Preco de compra: ");
        scanf("%lf", &compra[i]);

        printf("Preco de venda: ");
        scanf("%lf", &venda[i]);
      }



    lucro10 = 0;
    lucro_entre = 0;
    lucro20 = 0;
    soma_compra = 0;
    soma_venda = 0;
    lucro_total = 0;

    for(int i = 0; i < n; i++){
        if(venda[i] < compra[i]* 1.1){
            lucro10++;
        }
        else if(venda[i] <= compra[i]* 1.2){
            lucro_entre++;
        }
        else{
            lucro20++;
        }

        soma_compra += compra[i];
        soma_venda += venda[i];
        lucro_total += venda[i] - compra[i];
    }
        printf("Relatorio:\n");
        printf("Lucro abaixo de 10%%: %d\n", lucro10);
        printf("Lucro entre 10%% e 20%%: %d\n",lucro_entre);
        printf("Lucro acima de 20%%: %d\n", lucro20);
        printf("Valor total de compra: %.2lf\n", soma_compra);
        printf("Valor total de venda: %.2lf\n", soma_venda);
        printf("lucro total: %.2lf\n", lucro_total);




    return 0;
}
