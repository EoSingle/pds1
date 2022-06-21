/*
4. A multiplicação de dois números inteiros pode ser feita através de somas sucessivas. 
Proponha uma função recursiva int mult(int n1, int n2) que calcule a multiplicação de
dois inteiros n1 e n2.
*/

#include<stdio.h>
#include<stdlib.h>

int mult(int n1, int n2){
    if(n2==0){
        return 0;
    }
    else{
        return n1+mult(n1, n2-1);
    }
}

int main(){
    int num1, num2;
    printf("\nCALCULADORA MULTIPLICAÇÃO\n");
    printf("Digite os números inteiros:\n");
    scanf("%d%d", &num1, &num2);
    printf("%d x %d = %d\n", num1, num2, mult(num1, num2));

    return 0;
}
