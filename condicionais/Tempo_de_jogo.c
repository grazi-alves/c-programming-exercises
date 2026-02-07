#include <stdio.h>

int main(){
/* Problema "tempo_de_jogo" (adaptado de URI 1046)
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo
pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24
horas.

Se o jogo termina no mesmo dia → hfinal - hinicial

Se passa da meia-noite → 24 - (hinicial - hfinal)
*/

    int duracao, inicio, fim, duracao2;

    printf("Hora Inicial: ");
    scanf("%d", &inicio);

    printf("Hora Final: ");
    scanf("%d", &fim);

    duracao = 24 + (fim - inicio);

    if (duracao >= 1 && duracao <= 24){

        printf("O JOGO DUROU: %d HORA(S)", duracao);
    }
    else if (duracao > 24){
      duracao2 = fim - inicio;
        printf("O JOGO DUROU: %d HORA(S)", duracao2);
    }

    return 0;
}
