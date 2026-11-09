#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float velo_incial, angulo_lanca, alcance_hori, angulo_radi;
    const float pi = 3.14;

    printf("qual a velocidade inicial (m/s)? ");
    scanf("%f", &velo_incial);
    printf("qual o angulo de lançamento em graus? ");
    scanf("%f", &angulo_lanca);

    angulo_radi = angulo_lanca * (pi / 180);
    alcance_hori= pow(velo_incial, 2) * sin(2 * angulo_radi) / 9.8;

    printf("o alcance horizontal estimado é: %.2f metros", alcance_hori);


    return 0;
}
