#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int horas, minutos, total_min;
    printf("Quantidade Horas: ");
    scanf("%d", &horas);
    printf("Quantidade Minutos: ");
    scanf("%d", &minutos);

    total_min = minutos + horas * 60;

    printf("Total Minutos: %d", total_min);

    return 0;
}
