#include <stdio.h>

int main() {
    int pos_inicial, pos_final, passos = 0, distancia = 1, distancia_total = 0;

    printf("Digite a posição inicial: ");
    scanf("%d", &pos_inicial);

    printf("Digite a posição final: ");
    scanf("%d", &pos_final);

    while (distancia_total < (pos_final - pos_inicial)) {
        distancia_total += distancia;
        passos++;
        distancia++; 
    }

    printf("Quantidade mínima de passos: %d\n", passos);

    return 0;
}
