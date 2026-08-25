#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    float peso_pessoa, altura_pessoa, ind_massacorporal;

    printf("qual o peso da pessoa em kg? ");
    scanf("%f", &peso_pessoa);
    printf("qual a altura da pessoa em m? ");
    scanf("%f", &altura_pessoa);

    ind_massacorporal = peso_pessoa / (altura_pessoa * altura_pessoa);

    printf("o indice de massa corporal é: %.2f kg²", ind_massacorporal);

    return 0;
}
