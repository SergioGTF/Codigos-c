#include <stdio.h>

int main() {
    int num_provas;
    float soma_notas = 0, nota, media;

    printf("Digite a quantidade de provas realizadas: ");
    scanf("%d", &num_provas);

    for (int i = 0; i < num_provas; i++) {
        printf("Digite a nota da prova %d: ", i + 1);
        scanf("%f", &nota);
        soma_notas += nota;
    }

    media = soma_notas / num_provas;
    printf("A média final é: %.2f\n", media);

    if (media >= 6) {
        printf("Aluno aprovado.\n");
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
