#include <stdio.h>
#include <locale.h>

#define PRECO_ALCOOL 4.85
#define PRECO_GASOLINA 5.67

#define DESCONTO_ALCOOL_ATE_20 0.03
#define DESCONTO_ALCOOL_ACIMA_20 0.05

#define DESCONTO_GASOLINA_ATE_20 0.04
#define DESCONTO_GASOLINA_ACIMA_20 0.06

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float litros;
    char tipo_combustivel;

    printf("Digite a quantidade de litros vendidos: \n");
    scanf("%f", &litros);

    printf("Digite o tipo de combustível (A para Álcool e G para Gasolina):  \n");
    scanf(" %c", &tipo_combustivel); 

    float valor_final = 0.0;

    if (tipo_combustivel == 'A' || tipo_combustivel == 'a')
    {
        valor_final = litros * PRECO_ALCOOL * (1 - (litros <= 20 ? DESCONTO_ALCOOL_ATE_20 : DESCONTO_ALCOOL_ACIMA_20));
    }
    else if (tipo_combustivel == 'G' || tipo_combustivel == 'g')
    {
        valor_final = litros * PRECO_GASOLINA * (1 - (litros <= 20 ? DESCONTO_GASOLINA_ATE_20 : DESCONTO_GASOLINA_ACIMA_20));
    }
    else
    {
        printf("Tipo de combustível inválido. \n");
        return 1; 
    }

    printf("Valor final: R$ %.2f \n", valor_final);

    return 0;
}