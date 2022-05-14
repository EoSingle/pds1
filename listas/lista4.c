/* 
Programação e Desenvolvimento de Software 1
Lista 4: Recursão
Nome: Lucas Albano Olive Cruz
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


int Decrescente(int num){                                  // Imprime uma sequência decrescente desde num até 0
    printf("%d, ", num);
    if(num==0){
        return 0;
    }
    else{
       return Decrescente(num - 1);
    }
}


int Resto(int num1, int num2){                             // Retorna o resto de a por b *Recursão pra que??
    return num1%num2;
}


int Form(int num){                                         // Retorna o somatório de 1 até num
    if(num==0){
        return 0;
    }
    else{
        return num + Form(num-1);
    }
}


int Mmc(int num1, int num2){                               // Menor Múltiplo Comum
    if(num2 == 0){
        return num1;
    }
    else{
        return (num1*num2)/(Mdc(num1, num2));
    }
}


int Div(int num1, int num2){                               // Divisão inteira **Recursão pra que??
    return num1/num2;
}


int Sqrt(int num){                                         // Raiz Quadrada Inteira
    static int x=1;
    if(x*x == num){
        return x;
    }
    else if(x*x > num){
        return x-1;
    }
    else{
        x++;
        Sqrt(num);
    }
}


int Dig(int num){                                          // Retorna a soma dos dígitos de um inteiro positivo
    if(num%10==num){
        return num;
    }
    else{
        return((num%10)+Dig(num/10));
    }
}


int Exp(int a, int b){                                     // Exponencial de 'a' elevado a 'b'
    if(b==0){
        return 1;
    }
    else{
        return a * Exp(a, b-1);
    }
}


int Crescente(int num){                                    // Imprime uma sequência crescente desde 0 até num
    static int i=0;
    if(i>num){
        return 0;
    }
    else{
        printf("%d, ", i);
        i++;
        return Crescente(num);
    }
}


int main(){
    int num=0, a=0, b=0, c=0;
    // 1-a)
    printf("Digite um número inteiro (recomendado um valor pequeno):\n");
    scanf("%d", &num);
    printf("O fatorial de %d é %d.\n", num,Fat(num));
    // 1-b)
    printf("Digite 3 números inteiros (a, b, c): \n");
    scanf("%d%d%d",&a,&b,&c);
    printf("O máximo divisor comum entre %d e %d é: %d\n", a, b, Mdc(a,b));
    // 1-c)
    printf("O máximo divisor comum entre %d, %d e %d é: %d\n", a, b, c, Mdc(Mdc(a,b), c));
    // 1-d)
    printf("Descubra o n-ésimo termo da sequência de Fibonacci\nDigite o n-ésimo termo:\n");
    scanf("%d",&num);
    printf("O termo %d da sequencia de Fibonacci é: %d\n", num, Fib(num));
    // 1-e)
    printf("Descubra se um número é primo\nDigite o número inteiro:\n");
    scanf("%d", &num);
    if(Primo(num)){
        printf("%d é primo\n", num);
    }
    else{
        printf("%d não é primo\n", num);
    }
    // 1-f)
    printf("Veja uma sequência decrescente de inteiros positivos menores que 'x'\nDigite o número inteiro 'x':\n");
    scanf("%d",&num);
    Decrescente(num);
    // 1-g)
    printf("\nDigite dois números inteiros para saber o resto da divisão deles:\n");
    scanf("%d%d", &a, &b);
    printf("O resto da divisão de %d por %d é: %d\n", a, b, Resto(a,b));
    // 1-h)
    printf("Veja o somatório de i*i, com i variando de 1 até n\nDigite 'n' (valor inteiro):\n");
    scanf("%d", &num);
    printf("O resultado do somatório será: %d\n", Form(num)*Form(num));                //OBS: Não sei se está correto, ainda não tive Cálculo 1
    // 1-i)
    printf("Digite dois números inteiros para saber o MMC deles:\n");
    scanf("%d%d", &a, &b);
    printf("O MMC de %d e %d é: %d\n", a, b, Mmc(a,b));
    // 1-j)
    printf("Digite dois números inteiros para saber a divisão inteira deles:\n");
    scanf("%d%d", &a, &b);
    printf("O resultado da divisão inteira de %d por %d é: %d\n", a, b, Div(a,b));
    // 1-l)
    printf("Digite um número para saber sua raiz quadrada inteira:\n");
    scanf("%d", &num);
    printf("A raiz quadrada inteira de %d é: %d\n", num, Sqrt(num));
    // 1-m)
    printf("Digite um número para saber a soma de seus digitos:\n");
    scanf("%d", &num);
    printf("A soma dos digitos de %d é: %d\n", num, Dig(num));
    // 1-n)
    printf("Digite um valor inteiro 'a' e um inteiro 'b' para saber o valor de 'a' elevado a 'b':\n");
    scanf("%d%d", &a,&b);
    printf("O valor de %d elevado a %d é: %d\n", a, b, Exp(a,b));
    //1-o)
    printf("Veja uma sequencia crescente de todos os numeros maiores que 0 e menores ou iguais a 'n'\nDigite 'n':\n");
    scanf("%d", &num);
    Crescente(num);
    printf("\n");

    return 0;
}