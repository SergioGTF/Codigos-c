#include <stdio.h>

int main() {
    int pos_inicial, pos_final, distancia_passo, passos;

    printf("Digite a posição inicial: ");
    scanf("%d", &pos_inicial);

    printf("Digite a posição final: ");
    scanf("%d", &pos_final);

    printf("Digite a distância de cada passo: ");
    scanf("%d", &distancia_passo);

    passos = (pos_final - pos_inicial + distancia_passo - 1) / distancia_passo;

    printf("Quantidade mínima de passos: %d\n", passos);

    return 0;
}
