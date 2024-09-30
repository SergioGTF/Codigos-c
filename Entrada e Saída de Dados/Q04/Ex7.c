#include <stdio.h>

int main() {
    float salario, novo_salario, aumento;
    int percentual;

    printf("Digite o salário do colaborador: ");
    scanf("%f", &salario);

    if (salario <= 1280.00) {
        percentual = 20;
    } else if (salario <= 2540.00) {
        percentual = 15;
    } else if (salario <= 4160.00) {
        percentual = 10;
    } else {
        percentual = 5;
    }

    aumento = salario * percentual / 100;
    novo_salario = salario + aumento;

    printf("Salário antes do reajuste: R$ %.2f\n", salario);
    printf("Percentual de aumento aplicado: %d%%\n", percentual);
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salário após o aumento: R$ %.2f\n", novo_salario);

    return 0;
}
