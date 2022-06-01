/* 
Programação e Desenvolvimento de Software 1
Lista 6: Arquivos
Nome: Lucas Albano Olive Cruz

Questão 4: Escreva um programa em C++ que lê um arquivo com números reais (um número por linha) e
grava outro arquivo onde cada linha mostra o valor do respectivo número aplicado a função
f(x)= x2 - 5x + 1.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float Function(float num){
    return (pow(num, 2) - ((5*num) + 1));
}


int main(){
    float num=0;
    FILE *fr, *ff;
    fr = fopen("reais.txt", "r");
    ff = fopen("function.txt", "w");
    if(fr==NULL){
        printf("Erro na abertura do arquivo 'reais.txt'.\n");
    }
    if(ff==NULL){
        printf("Erro na abertura do arquivo 'function.txt'.\n");
    }

    while(!feof(fr)){
        fscanf(fr, "%f", &num);
        fprintf(ff, "f(%.2f) = %.2f\n", num, Function(num));
    }

    exit(2);
    return 0;
}
