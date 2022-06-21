/*
3. Escreva uma função “triangulo_area” que recebe dois parâmetros ( height e base ) e
retorna a área do triângulo correspondente.

Escreva uma função “triangulo_truncado” que também leva os parâmetros (height e
base) como entrada, e calcula a área de um triângulo sem a ponta. A ponta também é
um triângulo, sendo que sua altura e sua base correspondem a 10% da altura e base,
respectivamente, do triângulo maior. Use a função “triangulo_area” em sua solução.
*/

#include <stdlib.h>
#include <stdio.h>

float triangulo_area(float height, float base){
    return((height*base)/2);
}


float triangulo_truncado(float height, float base){
    float ponta, area;
    ponta=triangulo_area(height*0.1,base*0.1);
    area=triangulo_area(height,base);
    return area-ponta;
}


int main(){
    float base, altura;
    printf("Digite a base e a altura do triângulo:\n");
    scanf("%f%f",&base,&altura);
    printf("Área triângulo: %.2f\nÁrea triângulo truncado: %.2f\n",triangulo_area(altura,base),triangulo_truncado(altura,base));

    return 0;
}
