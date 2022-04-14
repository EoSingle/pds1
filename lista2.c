/* 
Programação e Desenvolvimento de Software 1
Lista 2: Procedimentos e funções
Nome: Lucas Albano Olive Cruz
Matrícula: 2022036209
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

float Media(float a, float b, float c){       // Média
	return (a+b+c)/3;
}


float MediaPond(float a, float b, float c){   // Média Ponderada
	return ((3*a)+(b*4)+(c*5))/12;
}   

float Perimetro(float r){                     // Perímetro do Círculo
	return 2*PI*r;
}

float AreaCirc(float r){                      // Área do círculo
	return PI*(pow(r,2));
}

int main(){
	float a = 0, b = 0, c = 0;
	printf("Programação e Desenvolvimento de Software 1\nLista 2: Procedimentos e funções\n\n");
	printf("Digite 3 números (a, b, c):\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("\nMédia de a, b e c: %.2f\n", Media(a,b,c));
	printf("Média ponderada de a, b e c com peso 3, 4 e 5: %.2f\n", MediaPond(a,b,c));
	printf("Perímetro de um círculo com raio 'a': %.2f\n", Perimetro(a));
	printf("Área do círculo de raio 'a': %.2f\n", AreaCirc(a));
	return 0;
}
