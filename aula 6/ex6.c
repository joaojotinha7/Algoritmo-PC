#include<stdio.h>
#include<locale.h>

int main() { setlocale(LC_CTYPE, "");

    int conta=12345, senha=123;
    int user, pass;
    int tentativas = 3;

    while(1) {
        printf("digite seu usuario: ");
        scanf("%d", &user);
        printf("digite sua senha: ");
        scanf("%d", &pass);
     if(user == conta && pass == senha)
        printf("Logado");
        break;
        else {
            printf("Conta ou Senha incorreta, %d° usada");
        }
    }



return 0;
}
