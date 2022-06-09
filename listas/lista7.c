/* 
Programação e Desenvolvimento de Software 1
Lista 7: Vetores
Nome: Lucas Albano Olive Cruz
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define LENARRAY(x) (sizeof(x) / sizeof((x)[0]))


float MedArranjo(float v[], int n){
    float soma = 0;
    for(int i = 0; i < n; i++){
        soma += v[i];
    }
    return soma/n;
}


float VarArranjo(float v[], int n){
    float med = MedArranjo(v, n), soma = 0;
    for(int i = 0; i < n; i++){
        soma += pow(v[i] - med, 2);
    }
    return soma/n;
}


float Maior(float v[], int n){
    float max = v[0];
    for(int i = 0; i < n; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    return max;
}


float Menor(float v[], int n){
    float min = v[0];
    for(int i = 0; i < n; i++){
        if(v[i] < min){
            min = v[i];
        }
    }
    return min;
}


float ProdEscalar(float u[], float v[], int n){
    float total = 0;
    for(int i = 0; i < n; i++){
        total += (u[i]*v[i]);
    }
    return total;
}


int main(){
    float a[5] = {50, 100, 30, 250, 200}, u[3] = {1, -11, -3}, v[3] = {4, 0, 5};
    // Questão 2
    printf("Média dos elementos do array 'a': %.2f\n", MedArranjo(a, LENARRAY(a)));
    // Questão 3 + Extra: Desvio Padrão
    printf("Variância dos elementos do array 'a': %.2f\n", VarArranjo(a, LENARRAY(a)));
    printf("Desvio padrão dos elementos do array 'a': %.2f\n", sqrt(VarArranjo(a, LENARRAY(a))));
    // Questão 4
    printf("Maior elemento do array 'a': %.2f\n", Maior(a, LENARRAY(a)));
    // Questão 5
    printf("Menor elemento do array 'a': %.2f\n", Menor(a, LENARRAY(a)));
    // Questão 6
    printf("Produto escalar de u e v: %.2f\n", ProdEscalar(u, v, 3));

    return 0;
}
