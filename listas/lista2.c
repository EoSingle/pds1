/* 
Programação e Desenvolvimento de Software 1
Lista 2: Procedimentos e funções
Nome: Lucas Albano Olive Cruz
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14


float Media(float a, float b, float c){                    // Média
	return (a+b+c)/3;
}


float MediaPond(float a, float b, float c){                // Média Ponderada
	return ((3*a)+(b*4)+(c*5))/12;
}   


float Perimetro(float r){                                  // Perímetro do Círculo
	return 2*PI*r;
}


float AreaCirc(float r){                                   // Área do Círculo
	return PI*(pow(r,2));
}


float AreaTriang(float a, float h){			               // Área do Triângulo
	return (a*h)/2;
}


float AreaCaixa(float a, float b, float c){                // Area de uma caixa
	return (2*a*b)+(2*a*c)+(2*c*b);
}


float VolumeCaixa(float a, float b, float c){              // Volume de uma Caixa
	return a*b*c;
}


float AreaCilindro(float a, float b){                      // Area de um Cilindro
	return (AreaCirc(a)*2)+(Perimetro(a)*b);
}


float VolumeCilindro(float a, float b){                    // Volume de um Cilindro
	return AreaCirc(a)*b;
}


float Hipotenusa(float a, float b){                        // Hipotenusa 
	return sqrt(pow(a,2)+pow(b,2));
}


float Raiz(float a, float b, float c, float delta){        // Raiz positiva
	return (-b + sqrt(delta))/(2*a);
}


int main(){
	float a = 0, b = 0, c = 0;
	printf("\nProgramação e Desenvolvimento de Software 1\nLista 2: Procedimentos e funções\n\n");
	printf("Digite 3 números (a, b, c):\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("\nMédia de a, b e c: %.2f\n", Media(a,b,c));
	printf("Média ponderada de a, b e c com peso 3, 4 e 5: %.2f\n", MediaPond(a,b,c));
	printf("Perímetro de um círculo com raio 'a': %.2f unidades\n", Perimetro(a));
	printf("Área do círculo de raio 'a': %.2f unidades\n", AreaCirc(a));
	printf("Área do Triângulo de lado 'a' e altura 'b': %.2f unidades\n", AreaTriang(a, b));
	printf("Área de uma caixa com arestas a, b e c: %.2f unidades\n", AreaCaixa(a, b, c));
	printf("Volume de uma caixa com arestas a, b e c: %.2f unidades\n", VolumeCaixa(a, b, c));
	printf("Área de um cilindro de raio 'a' e altura 'b': %.2f unidades\n", AreaCilindro(a, b));
	printf("Volume de um cilindro de raio 'a' e altura 'b': %.2f unidades\n", VolumeCilindro(a, b));
	printf("Hipotenusa de um triângulo retângulo de catetos 'b' e 'c': %.2f unidades\n", Hipotenusa(b,c));
	float delta=0;          
	delta = pow(b,2)-4*a*c;   // Calculo de delta de a, b e c
	if (delta < 0){
		printf("Raiz positiva da equação do segundo grau definida por ax²+bx+c: A equação não possui raízes reais\n");
	} else {
		printf("Raiz positiva da equação do segundo grau definida por ax²+bx+c: %f\n", Raiz(a, b, c, delta));
	}
	return 0;
}