#include <stdio.h>
#include "random.h"
#include <stdbool.h>


// Função para verificar se os números sortiados e digitado pelo usuário são iguais
bool compare(int sort, int num){
    if(sort == num){
        return true;
    }
    return false;
}


void showMenu(){
    /*Menu imaginario*/
}

int main(){
    int i = random();
    printf("%d", i);
}
