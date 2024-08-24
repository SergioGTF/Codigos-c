#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    float soma = 0;

    printf("Digite o número de termos da série que deseja mostrar: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int numerador = i;
        int denominador = 2 * i - 1;

        if (denominador != 0)
        {
            float termo = (double)numerador / denominador;
            soma += termo;
            printf("Termo %d: %.2lf\n", i, termo);
        }
        else
        {
            printf("Não é possível calcular o termo %d pois o denominador é zero.\n", i);
        }
    }

    printf("Soma dos termos: %.2lf\n", soma);

    return 0;
}