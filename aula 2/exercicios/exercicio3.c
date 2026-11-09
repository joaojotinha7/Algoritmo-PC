#include<stdio.h>
#include<locale.h>

int main()
{setlocale (LC_CTYPE, "");
    float semanas;
    float dias;
    float meses;

    printf("Qual a quantidade de semanas de gestação?\n");
    scanf("%f", &semanas);

    dias = semanas * 7;
    meses = dias / 30;

    printf("Tempo de gestaçâo aproximado: %1.f meses\n", meses);

    return 0;
}
