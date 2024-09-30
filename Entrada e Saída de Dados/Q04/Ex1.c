#include <stdio.h>

int main() {
    float numero, porcentagem, resultado;

    printf("Digite um número: ");
    scanf("%f", &numero);

    printf("Digite a porcentagem a ser calculada: ");
    scanf("%f", &porcentagem);

    resultado = (numero * porcentagem) / 100;

    printf("Resultado: %.2f%% de %.2f é %.2f\n", porcentagem, numero, resultado);

    return 0;
}
