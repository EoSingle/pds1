/*
1. a. Descrever em C um tipo para um registro que contenha o número de identificação de um
indivíduo, um conjunto de pontos (até 18) - em valores inteiros - conseguidos por ele(a) nas
questões de um concurso.

b. Escrever um programa principal que defina uma variável do tipo descrito em (a), leia os
pontos obtidos por um indivíduo e imprima a soma os pontos.

c. Altere o programa feito em b) para que a descrição do registro deixe em aberto o
tamanho do vetor e utilize a função definida em 1a) para alocá-lo, conforme o número de
questões do concurso fornecido pelo usuário.
*/

#include<stdio.h>
#include<stdlib.h>

//struct Registro{                                         // Questão 1.a)
//    int id;
//    int pontos[18];
//};

int main(){                                                // Questão 1.b) *Refatorada
    int soma=0, x;
    
    printf("Digite o número de questões do concurso:\n");  // Questão 1.c)
    scanf("%d", &x);

    struct Registro{
    int id;
    int pontos[x];                                         // *Modificado struct para o escopo local e
    } var;                                                 // tamanho do array definido pelo usuário
    
    printf("Digite o ID do aluno:\n");
    scanf("%d", &var.id);


    for(int i=0; i<x ; i++){
        printf("Digite a nota da questão [%d]:\n", i+1);
        scanf("%d", &var.pontos[i]);
        soma+=var.pontos[i]; 
    }
    printf("\nID: %d\n", var.id);
    printf("Pontuação total: %d\n", soma);

    return 0;
}
