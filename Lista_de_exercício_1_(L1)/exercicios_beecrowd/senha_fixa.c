#include <stdio.h>
 
void validarSenha(int);
 
int main() {
    int senha = 0;
    
    scanf("%d", &senha);
    
    validarSenha(senha);
 
    return 0;
}

void validarSenha(int senha){
    if(senha != 2002){
        printf("Senha Invalida\n");
        scanf("%d", &senha);
        validarSenha(senha);
    }
    else printf("Acesso Permitido\n");
}
