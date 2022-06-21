/* 
Programação e Desenvolvimento de Software 1
Lista 9: Matrizes
Nome: Lucas Albano Olive Cruz
*/

#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<math.h>


float media_matriz(int n, float mat[][n]){
    int total=0, i, j;
    for(i=0; i<n; i++){
        for(j=0;j<n;j++){
            total += mat[i][j];
        }
    }
    float media=total/(pow(n,2));
    return media;
}


void identidade(int n, float A[][n]){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i==j){
                A[i][j] = 1;
            } else {
                A[i][j] = 0;
            }
        }
    }
}


void transposta(int n, float A[][n], float T[][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            T[j][i] = A[i][j];
        }
    }
}


bool simetrica(int n, float A[][n]){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(A[i][j] != A[j][i]){
                return 0;
            }
        }
    }
    return 1;
}


void soma_matriz(int n, float A[][n], float B[][n], float S[][n]){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            S[i][j] = A[i][j] + B[i][j];
        }
    }
}


void mult_matriz(int n, float A[][n], float B[][n], float P[][n]){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            float elemento = 0;
            for(int k = 0; k<n; k++){
                elemento += A[i][k]*B[k][j];
            }
            P[i][j] = elemento;
        }
    }
}


int main(){

    FILE*f = fopen("matriz.txt", "r");

    if(f==NULL) {
        printf("Error: File not found.");
        return(1);
    }

    int linhas, colunas;
    float a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    float b[5][5]={{7,2,1,0,8},{4,3,7,8,2},{12,3,6,7,0},{1,2,4,3,5},{9,5,3,7,13}};
    float t[5][5]={};
    float s[5][5]={};
    float p[5][5]={};

    // Questão 1
    fscanf(f, "%d", &linhas);
    fscanf(f, "%d", &colunas);

    float matriz[100][100];
        
    for(int i = 0; i < linhas; i++) {

        for(int j = 0; j < colunas; j++) {
            fscanf(f, "%f", &matriz[i][j]);
        }
    }

    printf("\nMatriz lida a partir do arquivo:\n\n");
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }

    // Questão 2
    printf("\nMatriz A:\n");
    for(int i=0;i<4;i++){
        printf("\n");
        for(int j=0;j<4;j++){
            printf("%.2f ",a[i][j]);
        }
    }
    printf("\n\nMédia dos elementos da matriz A: %.2f\n", media_matriz(4,a));

    // Questão 3
    printf("\nTransformando a matriz A em uma matriz identidade:\n");
    identidade(4,a);
    printf("\nNova matriz A:\n");
    for(int i=0;i<4;i++){
        printf("\n");
        for(int j=0;j<4;j++){
            printf("%.2f ",a[i][j]);
        }
    }
    printf("\n");

    // Questão 4
    printf("\nMatriz B:\n");
    for(int i=0;i<5;i++){
        printf("\n");
        for(int j=0;j<5;j++){
            printf("%.2f ",b[i][j]);
        }
    }
    printf("\n");
    printf("\nTransposta de B:\n");
    transposta(5, b, t);
    for(int i=0;i<5;i++){
        printf("\n");
        for(int j=0;j<5;j++){
            printf("%.2f ",t[i][j]);
        }
    }
    printf("\n");
    
    // Questão 5
    printf("\nA matriz A é simétrica?\n");
    if(simetrica(4,a)){
        printf("Sim.");
    }
    else{
        printf("Não.");
    }
    printf("\nA matriz B é simétrica?\n");
    if(simetrica(5,b)){
        printf("Sim!\n");
    }
    else{
        printf("Não.\n");
    }

    // Questão 6
    printf("\nSoma das matrizes B e sua transposta:\n");
    soma_matriz(5,b,t,s);
     for(int i=0;i<5;i++){
        printf("\n");
        for(int j=0;j<5;j++){
            printf("%.2f ",s[i][j]);
        }
    }
    printf("\n");

    // Questão 7
    printf("\nMultiplicação da matriz B pela sua transposta:\n");
    mult_matriz(5,b,t,p);
     for(int i=0;i<5;i++){
        printf("\n");
        for(int j=0;j<5;j++){
            printf("%.2f ",p[i][j]);
        }
    }
    printf("\n");

    fclose(f);

    return 0;
}
