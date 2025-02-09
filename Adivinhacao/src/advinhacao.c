#include <stdio.h>
#include "random.h"
#include <stdbool.h>
#include <locale.h>
#include <windows.h>

// Valores das teclas tabela ANSI
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_ESC 27
#define KEY_ENTER 13

struct Keyboard{
    int entrada;
    int saida;
};


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



void showMenu(int opt){
    char *options[]= {
        "\n (1) Jogar",
        "\n (2) Selecionar dificuldade"
    };
    for (int i = 0; i < 2; i++){
        if (i == opt){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
            printf("%s", options[i]);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        } else{
            printf("%s", options[i]);
        }
    }

}

int setDificult(int opt){

    char *dificult[]= {
        "1 - Fácil",
        "2 - Médio",
        "3 - Díficil"
    }
    
    for(int i=0; i<4;i++){
        if (i==opt){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 240);
            printf("%s", options[i]);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        }else{
            printf("%s", dificult[i]);
        }
        
    }
    return 0;
    
}



int main(){
    setlocale(LC_ALL, "Portuguese");
    bool Run = true;
    int n,m;   

    m = Random(1,);
    showMenu(1);
    do{
        printf("Digite um número: ");
        scanf("%d", &n);
        compare(n,m);
        Run = run(n,m);
    }while (Run);
  
    
    
}
