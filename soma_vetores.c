#include <stdio.h>

int main(){
    /*Problema "soma_vetores"
    Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
    terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
    o vetor C gerado.
     The professor used printf outside the loop because it’s common not to repeat the title:
     #include <stdio.h>

int main(){
    int n;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &n);

    int a[n], b[n], c[n];

    printf("Digite os valores do vetor A:\n");

    for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
    }

    printf("Digite os valores do vetor B:\n");

    for (int i=0; i<n; i++) {
        scanf("%d", &b[i]);
    }

    for (int i=0; i<n; i++) {
        c[i] = a[i] + b[i];
    }

    printf("VETOR RESULTANTE:\n");

    for (int i=0; i<n; i++) {
		printf("%d\n", c[i]);
    }

    return 0;
}




    */


    int n ;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &n);

    int A[n];
    for(int i = 0; i < n; i++){
        printf("Digite os valores do vetor A: ");
        scanf("%d", &A[i]);
    }

    int B[n];
    for(int i = 0; i < n; i++){
        printf("Digite os valores do vetor B: ");
        scanf("%d", &B[i]);
    }

    int C[n];
    for(int i = 0; i < n; i++){
        C[i] = A[i] + B[i];
    }

    printf("Vetor Resultante: \n");

    for(int i = 0; i < n; i++){
        printf("%d\n", C[i]);
    }


    return 0 ;
}
