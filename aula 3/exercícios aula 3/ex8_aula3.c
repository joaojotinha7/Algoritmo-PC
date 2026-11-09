#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float nota1, nota2, nota3, media_pon;

    printf("digite a primeira nota:");
    scanf("%f", &nota1);
    printf("digite a segunda nota:");
    scanf("%f", &nota2);
    printf("digite a terceira nota:");
    scanf("%f", &nota3);

    media_pon = (nota1 * 1 + nota2 * 2 + nota3 * 4) / 7;

    printf("a media ponderada é: %.2f", media_pon);

    return 0;
}
