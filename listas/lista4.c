/* 
Programação e Desenvolvimento de Software 1
Lista 4: Recursão
Nome: Lucas Albano Olive Cruz

A lista ainda não está terminada!!!

*/

#include<stdio.h>
#include<stdlib.h>


int fat(int num){                                          // Fatorial de n
    if(num==0){
        return 1;
    }
    else{
        return(num*fat(num-1));
    }
}


int mdc(int num1, int num2){                               // MDC por algoritimo de Euclides
    if (num2==0){
        return num1;
    }
    else{
        return mdc(num2,num1 % num2);
    }
}


int fib(int num){                                          // n-ésimo termo de Fibonacci
    if(num < 2){
        return num;
    }
    else{
        return fib(num - 1) + fib(num - 2);
    }
}


int main(){
    int n=0, a=0, b=0, c=0;
    printf("Digite um número inteiro (recomendado um valor pequeno):\n");
    scanf("%d", &n);
    printf("O fatorial de %d é %d.\n", n,fat(n));
    printf("Digite 3 números inteiros (a, b, c): \n");
    scanf("%d%d%d",&a,&b,&c);
    printf("O máximo divisor comum entre %d e %d é: %d\n", a, b, mdc(a,b));
    printf("O máximo divisor comum entre %d, %d e %d é: %d\n", a, b, c, mdc(mdc(a,b), c));
    printf("Descubra o n-ésimo termo da sequência de Fibonacci\nDigite o n-ésimo termo:\n");
    scanf("%d",&n);
    printf("O termo %d da sequencia de Fibonacci é: %d\n", n, fib(n));
    return 0;
}