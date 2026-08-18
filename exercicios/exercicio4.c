#include<stdio.h>

int main()
{
    float massa;
    float agua;

    printf("Digite a massa corporal (em kg):" );
    scanf("%f", &massa);

    agua = (massa * 35) / 1000;
    printf("Quantidade aproximada de agua recomendada por dia: %1.f litros\n", agua);

   return 0;
}
