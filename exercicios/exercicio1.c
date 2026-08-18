#include<stdio.h>

int main()
{
    float raio;
    float PI=3.14159;
    float perimetro;

    printf("Qual a mediada do raio (cm)?");
    scanf("%f", &raio);

    perimetro = 2 * PI * raio;
    printf("O perimetro da circunferemcia e %.2f cm\n", perimetro);

    return 0;
}
