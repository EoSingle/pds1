/* 
2. Faça um programa que receba a idade e a altura de várias pessoas (informadas pelo pelo teclado) 
e que calcule e mostre a média das alturas das pessoas com idade entre 40 e 50 anos. Para encerrar a 
entrada de dados digite idade menor ou igual a zero.
*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    int idade, altura, n=0, soma=0;

    while(1){
        printf("Digite 0 a qualquer momento para interromper a entrada de dados.\n");
        printf("Digite a idade:\n");
        scanf("%d", &idade);
        if(idade == 0) break;
        printf("Digite a altura em cm:\n");
        scanf("%d", &altura);
        if(altura == 0) break;
        if(idade>=40 && idade<=50){
            soma += altura;
            n++;
        }
        system("clear");
    }
    printf("\nA média das alturas entre as pessoas com idade entre 40 e 50 anos é: %dcm\n", soma/n);

    return 0;
}
