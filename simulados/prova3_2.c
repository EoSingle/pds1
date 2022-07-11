/*
2. Escreva uma função que recebe como entrada um vetor de números inteiros e devolve
como saída o maior valor pertencente ao vetor.
*/

#include<stdlib.h>
#include<stdio.h>

int Maior(int numeros[], int len){
    int n=0;
    for(int i=0; i<len; i++){
        if(numeros[i]>n){
            n = numeros[i];
        }
    }
    return n;
}

int main(){
    int vetor[10]={1, 6, 7, 5, 3, 4, 11, 8, 10, 9};
    printf("O maior elemento do vetor é: %d\n", Maior(vetor,10));
    return 0;
}
