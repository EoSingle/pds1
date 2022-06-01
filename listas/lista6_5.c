/* 
Programação e Desenvolvimento de Software 1
Lista 6: Arquivos
Nome: Lucas Albano Olive Cruz

Questão 5: Escreva um programa em C++ que lê um arquivo com números reais (um número por linha) e
grava outro arquivo onde cada linha mostra o valor do respectivo número aplicado a função
f(x)= ax3 + bx2 + cx + d, onde a, b, c e d são lidos do teclado.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float Function(float num, float a, float b, float c, float d){
    return ((a*pow(num,3)) + (b*pow(num,2)) + (c*num) + d);
}


int main(){
    float num=0, a, b, c, d;
    FILE *fr, *ff;
    fr = fopen("reais.txt", "r");
    ff = fopen("function2.txt", "w");
    if(fr==NULL){
        printf("Erro na abertura do arquivo 'reais.txt'.\n");
    }
    if(ff==NULL){
        printf("Erro na abertura do arquivo 'function.txt'.\n");
    }

    printf("Temos a função: f(x) = ax^3 + bx^2 + cx + d\n");
    printf("Digite 4 números a, b, c e d para integrarem a função.\n");
    scanf("%f%f%f%f",&a,&b,&c,&d);

    while(!feof(fr)){
        fscanf(fr, "%f", &num);
        fprintf(ff, "f(%.2f) = %.2f\n", num, Function(num, a, b, c, d));
    }

    exit(2);
    return 0;
}
