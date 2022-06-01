/* 
Programação e Desenvolvimento de Software 1
Lista 6: Arquivos
Nome: Lucas Albano Olive Cruz

Questão 1: Escreva um programa em C++ que lê um número n do teclado e gera um arquivo com os n primeiros números primos.

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


int main (){
    int q, i=0, num=2;    
    FILE* fw;
    fw = fopen("primos.txt","w");
    if ( fw == NULL ){
        printf("Erro na abertura do arquivo primos.txt\n");
        exit(2); 
    }
    printf("Diga quantos números primos serão impressos.\n");
    scanf("%d", &q);
    while(i < q){
        if (Primo(num)){
            fprintf(fw, "%d\n", num);
            i++;
        }
        num++;
    }
    fclose(fw);
    return 0;
}
