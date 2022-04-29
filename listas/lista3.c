/* 
Programação e Desenvolvimento de Software 1
Lista 3: Comandos de seleção e predicado
Nome: Lucas Albano Olive Cruz
*/

#include <stdlib.h>
#include <stdio.h>


float Max(float num1, float num2, float num3){                  // Retorna o maior valor
	if(num1 > num2 && num1 > num3){
		return num1;
	}
	else if(num2 > num3){
		return num2;
	}
	else{
		return num3;
	}
		
}


float Min(float num1, float num2, float num3){                  // Retorna o menor valor
	if(num1 < num2 && num1 < num3){
		return num1;
	}
	else if(num2 < num3){
		return num2;
	}
	else{
		return num3;
	}
}


int Par(int num1){                                              // Verifica se o número é par
	return(!(num1%2));
}
	

int Dentro(int num1, int num2, int num3){                       // Verifica se x está no intervalo
	if(num1 > Min(num1,num2,num3) && num1 < Max(num1, num2, num3)){
		return 1;
	}
	else{
		return 0;
	}
}


int Bissexto(int ano){
	if(ano%4 == 0 && ano%100 != 0){
		return 1;
	}
	else if(ano%400 == 0){
		return 1;
	}
	else{
		return 0;
	}
}


int main(){
	float a = 0, b = 0, c = 0;                                  // Usadas na Atividade 1
	int x = 0, y = 0, z = 0, ano=0;                             // Usadas nas Atividades 2 e 3 

	printf("\nProgramação e Desenvolvimento de Software 1\nLista 3: Comandos de seleção e predicado\n\n");

	printf("Digite 3 números (a, b, c):\n");                    // Atividade 1
	scanf("%f%f%f",&a,&b,&c);
	printf("\nO maior valor dentre a, b e c é: %.2f\n", Max(a,b,c));      // 1-a)
	printf("O menor valor dentre a, b e c é: %.2f\n", Min(a,b,c));        // 1-b)
	
	printf("\nDigite 3 números inteiros (x, y, z):\n");         // Atividade 2
	scanf("%d%d%d",&x,&y,&z);
	
	if(Par(x)){                                                           // 2-a)
		printf("\nO número %d é par\n", x);
	}
	else{
		printf("\nO número %d é ímpar\n", x);
	}
	
	if(Dentro(x,y,z)){
		printf("O número %d está DENTRO do intervalo [%d, %d]\n",x,y,z);  // 2-b)
	}
	else{
		printf("O número %d está FORA do intervalo [%d, %d]\n",x,y,z);    // 2-c)
	}

	printf("\nDescubra se o ano é bissexto. Digite um ano:\n"); // Atividade 3
	scanf("%d", &ano);
	if (Bissexto(ano)){
		printf("\nO ano %d é bissexto.\n", ano);
	}
	else{
		printf("\nO ano %d não é bissexto.\n", ano);
	}

	return 0;
}
