/* 
Programação e Desenvolvimento de Software 1
Lista 5: Estruturas de Repetição
Nome: Lucas Albano Olive Cruz
*/

#include<stdio.h>
#include<stdlib.h>


int Fat(int num){                                           // Fatorial de num
	int total=1;
	for(int i=1;i<=num;i++){
		total = total*i;
	}
	return total;
}


int Mdc(int num1, int num2){                                // MDC por algoritimo de Euclides
    int resto=0;
    while(num2!=0){
		resto=num1%num2;
		num1=num2;
		num2=resto;
	}
	return num1;
}


int Fib(int num){                                           // n-ésimo termo de Fibonacci
	int f=0,f1=1,i=1;
	while(i<=num){
		int f2=f;
		f+=f1;
		f1=f2;
		i++;
	}
	return f;
}


int Primo(int num){                                        // Testa se o número é primo
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


void Decrescente(int num){                                  // Imprime uma sequência decrescente desde num até 0
    for(int i=num;i>=0;i--){
		if(i==0){
			printf("%d.\n", i);
			break;
		}
		printf("%d, ",i);
	}
}


int Resto(int num1, int num2){                             // Retorna o resto de a por b
	while(num1>=num2){
		num1-=num2;
	}
	return(num1);
}


int Form(int num){                                         // Retorna o somatório de 1 até num
    int total=0;
	for(int i=1;i<=num;i++){
		total+=(i*i);
	}
	return total;
}


int Mmc(int num1, int num2){                               // Menor Múltiplo Comum
	while(num2!=0){
		int resto = num1%num2;
		num1=num2;
		num2=resto;
	}
	return num1;
}


int Div(int num1, int num2){                               // Divisão inteira
    int dif=0;
	while(num1>0){
		num1=num1-num2;
		dif++;
	}
	return dif;
}


int Sqrt(int num){                                         // Raiz Quadrada Inteira
    int i=1;
	while(1){
		if(i*i == num){
			return i;
		}
		else if(i*i > num){
			return i-1;
		}
		else{
			i++;
		}
	}
}


int Dig(int num){                                          // Retorna a soma dos dígitos de um inteiro positivo
	int soma=0, dig;
	while (num>0){
		dig = num%10;
		soma = soma+dig;
		num /= 10;
	}
	return soma;
}


int Exp(int a, int b){                                     // Exponencial de 'a' elevado a 'b'
    int total=1,i=1;
	while(i<=b){
		total*=a;
		i++;
	}
	return total;
}


void Crescente(int num){                                    // Imprime uma sequência crescente desde 0 até num
	for(int i=0;i<=num;i++){
		if(i==num){
			printf("%d.\n", i);
			break;
		}
		printf("%d, ",i);
	}
}


int main(){
	int num=0, a=0, b=0, c=0;
    // 1-a)
    printf("Digite um número inteiro (recomendado um valor pequeno):\n");
    scanf("%d", &num);
    printf("O fatorial de %d é %d.\n", num, Fat(num));
    // 1-b)
    printf("\nDigite 2 números inteiros para saber seu mdc (a, b): \n");
    scanf("%d%d",&a,&b);
    printf("O máximo divisor comum entre %d e %d é: %d\n", a, b, Mdc(a,b));
    // 1-c)
    printf("\nDigite 3 números inteiros para saber seu mdc (a, b, c): \n");
    scanf("%d%d%d",&a,&b,&c);
    printf("O máximo divisor comum entre %d, %d e %d é: %d\n", a, b, c, Mdc(Mdc(a,b), c));
    // 1-d)
    printf("\nDescubra o n-ésimo termo da sequência de Fibonacci\nDigite o n-ésimo termo:\n");
    scanf("%d",&num);
    printf("O termo %d da sequencia de Fibonacci é: %d\n", num, Fib(num));
	// 1-e)
    printf("\nDescubra se um número é primo\nDigite o número inteiro:\n");
    scanf("%d", &num);
    if(Primo(num)){
        printf("%d é primo\n", num);
    }
    else{
        printf("%d não é primo\n", num);
    }
	// 1-f)
    printf("\nVeja uma sequência decrescente de inteiros positivos menores que 'x'\nDigite o número inteiro 'x':\n");
    scanf("%d",&num);
    Decrescente(num);
	// 1-g)
    printf("\nDigite dois números inteiros para saber o resto da divisão deles:\n");
    scanf("%d%d", &a, &b);
    printf("O resto da divisão de %d por %d é: %d\n", a, b, Resto(a,b));
	// 1-h)
    printf("\nVeja o somatório de i*i, com i variando de 1 até n\nDigite 'n' (valor inteiro):\n");
    scanf("%d", &num);
    printf("O resultado do somatório será: %d\n", Form(num));
	// 1-i)
    printf("\nDigite dois números inteiros para saber o MMC deles:\n");
    scanf("%d%d", &a, &b);
    printf("O MMC de %d e %d é: %d\n", a, b, Mmc(a,b));
 	// 1-j)
    printf("\nDigite dois números inteiros para saber a divisão inteira deles:\n");
    scanf("%d%d", &a, &b);
    printf("O resultado da divisão inteira de %d por %d é: %d\n", a, b, Div(a,b));
	// 1-l)
    printf("\nDigite um número para saber sua raiz quadrada inteira:\n");
    scanf("%d", &num);
    printf("A raiz quadrada inteira de %d é: %d\n", num, Sqrt(num));
	// 1-m)
    printf("\nDigite um número para saber a soma de seus dígitos:\n");
    scanf("%d", &num);
    printf("A soma dos dígitos de %d é: %d\n", num, Dig(num));
	// 1-n)
    printf("\nDigite um valor inteiro 'a' e um inteiro 'b' para saber o valor de 'a' elevado a 'b':\n");
    scanf("%d%d", &a,&b);
    printf("O valor de %d elevado a %d é: %d\n", a, b, Exp(a,b));
	//1-o)
    printf("\nVeja uma sequencia crescente de todos os numeros maiores que 0 e menores ou iguais a 'n'\nDigite 'n':\n");
    scanf("%d", &num);
    Crescente(num);

	return 0;
}
