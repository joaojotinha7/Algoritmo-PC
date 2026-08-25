#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale (LC_CTYPE, "");

    int num1, num2, soma_nums, sub_nums, mult_nums;

    printf("digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("digite o segundo numero: ");
    scanf("%d", &num2);

    soma_nums = num1 + num2;
    printf("soma: %d\n", soma_nums);
    sub_nums = num1 - num2;
    printf("subtração: %d\n", sub_nums);
    mult_nums = num1 * num2;
    printf("multiplicação: %d\n", mult_nums);




    return 0;
}
