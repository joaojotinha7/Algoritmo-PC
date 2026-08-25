#include<stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("Digitee a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media arimetica: %2.f\n", media);

    return 0;
}
