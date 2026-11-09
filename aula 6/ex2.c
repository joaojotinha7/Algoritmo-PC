#include<stdio.h>
#include<locale.h>

int main(){ setlocale(LC_CTYPE, "");

float nota, soma=0, media;
float maior_nota;

    for(int i=0; i<5; i++) {
    printf("digite a BOSTA da nota do %dº aluno: ", i+1);
    scanf("%f", &nota);
    soma = soma + nota;
    media = soma / 5;

    if(nota > maior_nota) {
        maior_nota = nota;
    }
    }
    printf("media é igual a: %.2f", media);
    printf("\nmaior nota igual a: %.2f", maior_nota);

return 0;}
