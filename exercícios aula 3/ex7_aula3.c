#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float val1, val2, val3, val4, media;

    printf("digite o primeiro valor:");
    scanf("%f", &val1);
    printf("digite o segunda valor:");
    scanf("%f", &val2);
    printf("digite o terceiro valor:");
    scanf("%f", &val3);
    printf("digite o quarto valor:");
    scanf("%f", &val4);

    media = (val1 + val2 + val3 + val4) / 4;

    printf("a média aritmética é: %.2f", media);

    return 0;
}
