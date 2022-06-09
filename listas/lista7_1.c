/* 
Programação e Desenvolvimento de Software 1
Lista 7: Vetores
Nome: Lucas Albano Olive Cruz
Questão 1: Escreva um programa em C++ que lê uma sequência de números de um arquivo e armazena
em um arranjo. Assuma que a quantidade de números no arquivo não ultrapassa o limite máximo
de elementos do arranjo (e.g. 1000).
*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int i = 0, numeros[1000];
    FILE* fn;
    fn = fopen("numeros.txt", "r");
    if(fn==NULL){
        printf("Erro na abertura do arquivo 'numeros.txt'.\n");
        fclose(fn);
    }
    else{
        while(!feof(fn)){
            fscanf(fn, "%d", &numeros[i]);
            i++;
        }
    }
    printf("ÍNDICE | VALOR\n");
    for(i=0;i<1000;i++){
        printf("%d - %d\n", i, numeros[i]);
    }
    fclose(fn);
    return 0;
}
