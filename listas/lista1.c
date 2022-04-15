// Algoritmos e Estruturas de Dados I
// Lista 1: Estruturas básicas
// Nome: Lucas Albano Olive Cruz

#include<stdio.h>
#include<math.h>

int main(){
    // Exercício 1
    printf("Exercício 1:\n\n");
    printf("1-a >> O resultade de 3 + 4 é: %d\n", 3+4);
    printf("1-b >> O resultade de inteiro de 7/4 é: %d\n", 7/4);
    printf("1-c >> O resultade de 3^2 é: %f\n", pow(3,2));
    printf("1-d >> O resultade de 5.3 * 2.1 é: %f\n", 5.3*2.1);
    printf("1-e >> O resultado de 2 * 5 - 2 é: %d\n", 2*5-2);
    printf("1-f >> O resultado de 2 + 2 * 5 é: %d\n", 2+2*5);
    printf("1-g >> O resultado de (2 + 5) * 3 é: %d\n", (2+5)*3);
    printf("1-h >> O resultado de sin(3.141502) é: %f\n", sin(3.141502));
    printf("1-i >> O resultado de sqrt(5) é: %f\n", sqrt(5));
    printf("1-j >> O resultado de 1 + 2 + 3 é: %d\n", 1+2+3);
    printf("1-k >> O resultado de 1 * 2 * 3 é: %d\n", 1*2*3);
    printf("1-l >> O resultado de (1 + 2 + 3) / 3.0 é: %f\n", (1+2+3)/3.0);
    printf("1-m >> O resultado de (2 + 4) * (3 - 1) é: %d\n", (2+4)*(3-1));
    printf("1-n >> O resultado de (9 / 3) + (3 * 2) é: %d\n", (9/3)+(3*2));
    printf("1-o >> O resultado de sin(4.5) + cos(3.7) é: %f\n", sin(4.5)+cos(3.7));
    printf("1-p >> O resultado de log(2.3) - log(3.1) é: %f\n", log(2.3)-log(3.1));
    printf("1-q >> O resultado de log (7) + (log(7) * log(7) - cos(log(7))) é: %f\n", log(7)+(log(7)*log(7)-cos(log(7))));
    printf("1-r >> O resultado de (10.3 + 8.4)/50.3 - (10.3 + 8.4) é: %f\n", (10.3+8.4)/50.3-(10.3 + 8.4));
    printf("1-s >> O resultado de (cos(0.8) + sin(0.8)) * (cos(0.8) - sin(0.8)) é: %f\n\n", (cos(0.8)+sin(0.8))*(cos(0.8)-sin(0.8)));
    
    //Exercício 2
    int num1, num2, num3, num4;
    printf("Exercício 2:\n\n");
    printf("Digite 4 números inteiros (a, b, c e d):\n");
    scanf("%d%d%d%d", &num1,&num2,&num3,&num4);
    printf("2-a >> O resultado de a + b é: %d\n", num1+num2);
    printf("2-b >> O resultado de a/c é: %d\n", num1/num2);
    printf("2-c >> O resultado de a^2 é: %f\n", pow(num1,2));
    printf("2-d >> O resultado de b * c é: %d\n", num2*num3);
    printf("2-e >> O resultado de a * b - c é: %d\n", num1*num2-num3);
    printf("2-f >> O resultado de a + b * c é: %d\n", num1+num2*num3);
    printf("2-g >> O resultado de (a + b) * c é: %d\n", (num1+num2)*num3);
    printf("2-h >> O resultado de sin(a) é: %f\n", sin(num1));
    printf("2-i >> O resultado de sqrt(b) é: %f\n", sqrt(num2));
    printf("2-j >> O resultado de a + b + c é: %d\n", num1+num2+num3);
    printf("2-k >> O resultado de a * b * c é: %d\n", num1*num2*num3);
    printf("2-l >> O resultado de (a + b + c) / d é: %d\n", (num1+num2+num3)/num4);
    printf("2-m >> O resultado de (a + b) * (a - d) é: %d\n", (num1+num2)*(num1-num4));
    printf("2-n >> O resultado de (b / c) + (a * d) é: %d\n", (num2/num3)+(num1*num4));
    printf("2-o >> O resultado de sin(b) + cos(c) é: %f\n", sin(num2)+cos(num3));
    printf("2-p >> O resultado de log(a) - log c é: %f\n", log(num1)-log(num3));
    printf("2-q >> O resultado de log(a) + (log(b) * log(d) - cos(log(c))) é: %f\n", log(num1)+(log(num2)*log(num4)-cos(log(num3))));
    printf("2-r >> O resultado de (b + a)/c - (d + a) é: %d\n", (num2+num1)/num3-(num4+num1));
    printf("2-s >> O resultado de (cos(d) + sin(c)) * (cos(b) - sin(a)) é: %f\n\n", (cos(num4)+sin(num3))*(cos(num2)-sin(num1)));

    //Exercício 3
    float num5, num6, num7;
    printf("Exercício 3\n\n");
    printf("Digite 3 números reais (a, b e c):\n");
    scanf("%f%f%f", &num5,&num6,&num7);
    printf("3-a >> A média de a, b e c é: %f\n", num5+num6+num7/3);
    printf("3-b >> A média ponderada de a com peso 3, b com peso 4 e c com peso 5 é: %f\n", ((num5*3)+(num6*4)+(num7*5))/3);
    printf("3-c >> O perímetro de um círculo de raio a é: %f\n", 2*3.14*num5);
    printf("3-d >> A área de um círculo de raio a é: %f\n", pow((3.14*num5),2));
    printf("3-e >> A área de um triângulo de base b e altura c é: %f\n", (num6*num7)/2);
    printf("3-f >> A hipotenusa de um triângulo retângulo de lados b e c é: %f\n\n", sqrt(pow(num6,2)+pow(num7,2)));
    return 0;
}