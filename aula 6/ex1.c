#include<stdio.h>
#include<locale.h>

int main(){ setlocale(LC_CTYPE, "");

    int cpf;
    float preco=1, total_compra=0;

        printf("digite a merda do seu CPF: ");
        scanf("%d", &cpf);

        for (int i=0; i<5; i++) {
            printf("preço: R$ ");
            scanf("%f", &preco);
            total_compra = total_compra + preco;
        }
        printf("\nCPF: %d", cpf);
        printf("\ntotal da compra: R$ %.2f", total_compra);

    return 0;
}
