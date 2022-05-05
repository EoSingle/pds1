/* 
Programação e Desenvolvimento de Software 1
Lista 4: Recursão
Nome: Lucas Albano Olive Cruz
A lista ainda não está terminada!!!
*/

#include<stdio.h>
#include<stdlib.h>


int Fat(int num){                                          // Fatorial de n
    if(num==0){
        return 1;
    }
    else{
        return(num*Fat(num-1));
    }
}


int Mdc(int num1, int num2){                               // MDC por algoritimo de Euclides
    if (num2==0){
        return num1;
    }
    else{
        return Mdc(num2,num1 % num2);
    }
}


int Fib(int num){                                          // n-ésimo termo de Fibonacci
    if(num < 2){
        return num;
    }
    else{
        return Fib(num - 1) + Fib(num - 2);
    }
}


int Primo(int num){                                        // Testa se o número é primo
    static int i=2;
    if(num==0 || num==1){
        return 0;
    }
    else if(num==i){
        return 1;
    }
    else if(num%i==0){
        return 0;
    }
    else{
        i++;
        return Primo(num);
    }
}


int main(){
    int num=0, a=0, b=0, c=0;
    printf("Digite um número inteiro (recomendado um valor pequeno):\n");
    scanf("%d", &num);
    printf("O fatorial de %d é %d.\n", num,Fat(num));
    printf("Digite 3 números inteiros (a, b, c): \n");
    scanf("%d%d%d",&a,&b,&c);
    printf("O máximo divisor comum entre %d e %d é: %d\n", a, b, Mdc(a,b));
    printf("O máximo divisor comum entre %d, %d e %d é: %d\n", a, b, c, Mdc(Mdc(a,b), c));
    printf("Descubra o n-ésimo termo da sequência de Fibonacci\nDigite o n-ésimo termo:\n");
    scanf("%d",&num);
    printf("O termo %d da sequencia de Fibonacci é: %d\n", num, Fib(num));
    printf("Descubra se um número é primo\nDigite o número inteiro:\n");
    scanf("%d", &num);
    if(Primo(num)){
        printf("%d é primo\n", num);
    }
    else{
        printf("%d não é primo\n", num);
    }
    return 0;
}
