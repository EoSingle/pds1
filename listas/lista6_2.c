/* 
Programação e Desenvolvimento de Software 1
Lista 6: Arquivos
Nome: Lucas Albano Olive Cruz

Questão 2: Escreva um programa em C++ que lê um arquivo com números naturais (um número por linha)
e grava outro arquivo onde cada linha indica se o respectivo número é primo ou não.

*/

#include <stdio.h>
#include <stdlib.h>

int Primo(int num){                                        
	if(num==0||num==1){
			return 0;   
	}                                 
	for(int i=2; i<=num;i++){
		if(num==i){
			return 1;
		}
		else if(num%i==0){
			return 0;
		}
	}
}


int main(){
    int num=0;
    FILE *fp, *fw;
    fp = fopen("numeros.txt", "r");
    fw = fopen("primos.txt", "w");
    if(fp==NULL){
        printf("Erro na abertura do arquivo 'numeros.txt'.\n");
    }
    if(fw==NULL){
        printf("Erro na abertura do arquivo 'primos.txt'.\n");
    }
    while(!feof(fp)){
        fscanf(fp, "%d", &num);
        if(Primo(num)){
            fprintf(fw, "%d\n", num);
        }
    }
    exit(2);
    return(0);
}
