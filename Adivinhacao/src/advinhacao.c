#include <stdio.h>
#include "random.h"
#include <stdbool.h>
#include <locale.h>


// Valores das teclas tabela ANSI
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_ESC 27
#define KEY_ENTER 13

// Função para verificar se os números sorteados e digitado pelo usuários são iguais
void compare(int n, int m){
    if(n == m){
        printf("Você acertou!\n");
    }
    else{
        if (n>m){
            printf("O valor sorteado é menor que %d\n", n);
        } else{
            printf("O valor sorteado é maior que %d\n", n);
        }
        
    }
}
bool run(int n, int m){
    if(n==m){
        return false;
    }
    return true;
}



void showMenu(){
    /*Menu imaginario*/
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    bool Run = true;
    int n,m;   

    m = Random(1,100);
    do{
        printf("Digite um número: ");
        scanf("%d", &n);
        compare(n,m);
        Run = run(n,m);
    }while (Run);
  
    
    
}
