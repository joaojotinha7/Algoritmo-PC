#include<stdio.h>
#include<locale.h>

int main() { setlocale(LC_CTYPE, "");

    int num, soma=0;

    do {
        printf("digite um numero inteiro: ");
        scanf("%d", &num);
        if(num%2 !=0)
            soma += num;
    } while(num>0);

    printf("a soma dos numeros impares é: %d\n\n", soma);

return 0;}
