#ifndef RANDOM_H
#define RANDOM_H
#include <time.h>
//Biblioteca para sortear números aleatorios

// Valores altos para gerar números pseudo-aleatorios
#define A 1664525
#define C 10139044223
#define M 4294967269


unsigned int random(){
    /*usei o static para manter o ultimo valor gerado quando a função foi chamada;
    O unsigned é para variavel não receber valores negativos;
    time(NULL) pega o tempo da máquina em milissegundo - como o tipo time_l que normalmente é um long int, então converto em unsigned int*/
    static unsigned int seed = 0;

    if (seed == 0){ 
        seed = (unsigned int)time(NULL);
    }
    seed =(A * seed + C)%M; 
    return seed;
}


// Gera um número aleatorio no intervalo determinado
int Random(int min, int max){
    return (random()% (max-min+1))+min;
}



#endif