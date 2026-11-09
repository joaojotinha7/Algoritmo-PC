#include<stdio.h>
#include<locale.h>

int main() { setlocale(LC_CTYPE, "");

    float nota, soma=0, media;
    int i;

    for(i=0; i<3; i++){
  do {
        printf("\ndigite a %d° nota do aluno (0-10): ", i+1);
        scanf("%f", &nota);
        if(nota < 0 || nota > 10) {
            printf("\nessa nota não vale, insira novamente e com os valores corretos!!!!");
        } else {
            soma += nota;
        }

    } while(nota < 0 || nota > 10);
    }
    media = soma/3;


    printf("\na media do aluno é: %.2f", media);


return 0;
}
