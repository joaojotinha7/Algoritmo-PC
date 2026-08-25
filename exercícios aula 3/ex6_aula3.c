#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int qte_caixa;
    float larguram, comprimentom, area, valor_caixa, custo_total;
    const float area_por_caixa = 2.5;

    printf("qual a largura da área (m)? ");
    scanf("%f", &larguram);
    printf("qual o comprimento da área (m)? ");
    scanf("%f", &comprimentom);
    printf("qual o valor de cada caixa? ");
    scanf("%f", &valor_caixa);

    area = larguram * comprimentom;
    printf("a área total a ser revestida é: %.2f \n", area);

    qte_caixa = ceil(area/area_por_caixa);
    printf("quantidade de caixas necessaria: %d \n", qte_caixa);

    custo_total = qte_caixa * valor_caixa;
    printf("custo total da compra: %.2f \n", custo_total);

    return 0;
}
