#include<stdio.h>

int main()
{
    int i, num;

    printf("digite um numero inteiro: ");
    scanf("%d", &num);

    printf("tabuada do %d", num);

    for (i=0; i<=10; i++) {
        printf("\n%d * %d = %d", num, i, (num * i));
    }
    printf("\nAgora terminou! o i é igual a: %d", i);

    return 0;
}
