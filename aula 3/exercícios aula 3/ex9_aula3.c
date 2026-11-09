#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float  x1,y1, x2, y2, distancia;

    printf("coordenada do x 1° ponto: ");
    scanf("%f", &x1);
    printf("coordenada do y 1° ponto: ");
    scanf("%f", &y1);
    printf("coordenada do x 2° ponto: ");
    scanf("%f", &x2);
    printf("coordenada do 7 2° ponto: ");
    scanf("%f", &y2);

    distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    printf("a disntancia entre os pontos é: %.2f", distancia);

    return 0;

}
