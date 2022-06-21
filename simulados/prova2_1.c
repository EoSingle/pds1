/*
1. Escreva um programa que receba do usuário cinco números inteiros e o nome do arquivo no qual eles devem 
ser armazenados (valores serão informados via teclado, e devem ser inseridos no arquivo). Em seguida, ler 
do arquivo estes valores armazenados e imprima-os na tela.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    FILE *fw;

    char n_arquivo[]={};
    int num=0;

    printf("Escreva o nome do arquivo:\n");
    scanf("%s", n_arquivo);
    fp = fopen(n_arquivo, "w");
    if(fp==NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
        return 1;
    }

    printf("Digite cinco números inteiros para serem inseridos no arquivo:\n");
    for(int i=0;i<5;i++){
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }
    fclose(fp);

    fw = fopen(n_arquivo, "r");
    if(fw==NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
        return 1;
    }

    printf("Valores inseridos no arquivo:\n");
    while(!feof(fw)){
        fscanf(fw,"%d", &num);
        printf("%d\n", num);
    }

    fclose(fw);
    return 0;
}
