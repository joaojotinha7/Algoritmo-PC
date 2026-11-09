#include<stdio.h>

int main()
{
    float comprimento;
    float largura;
    float perimetro;
    float area;

    printf("Qual o comprimento do jardim (m)?");
    scanf("%f", &comprimento);

    printf("Qual a largura do jardim (m)?" );
    scanf("%f", &largura);

    perimetro =2*(comprimento + largura);
    area = comprimento * largura;

    printf("Perimetrodo jardim: %.2f m\n", perimetro);
    printf("Area do jardim: %.2f m2\n", area);

    return 0;
}
