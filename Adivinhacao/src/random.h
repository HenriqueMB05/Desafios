#ifndef RANDOM_H
#define RANDOM_H

//Biblioteca para sortear números aleatorios

// Valores altos para gerar números pseudo-aleatorios
#define A 1664525
#define C 10139044223
#define M 4294967269

unsigned int seed =123456789;// Valor alto para ter muita alteração na função random

/*Processo que gera números pseudo-aleatorios onde a cada vez que for executado seed vai retornar um número diferente
Seria melhor variar o valor do seed nessa função mas eu não sei como fazer isso, ainda, então vou deixar assim mesmo, por enquanto(eu acho)*/

unsigned int random(){
    seed =(A * seed + C)%M; 
    return seed;
}


// Gera um número aleatorio no intervalo determinado
int Random(int min, int max){
    return (random()% (max-min+1))+min;
}



#endif