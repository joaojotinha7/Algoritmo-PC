#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale (LC_CTYPE, "");
    int quantidade;
    float valor_unitario, valor_final;
    printf("Qual a quantidade de cafés? ");
    scanf("%d", &quantidade);
    printf("Qual o valor unitário? R$");
    scanf("%f", &valor_unitario);
    valor_final = quantidade*valor_unitario;
    printf("Total a pagar: R$ %.2f", valor_final);
    return 0;

}
