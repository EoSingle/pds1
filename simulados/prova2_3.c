/* 
3. Desenvolva uma função recursiva que calcule o número de vezes em que um dígito d ocorre
em um número natural N. Exemplo: o dígito 5 ocorre 3 vezes em 165054135.
*/
#include <stdio.h>
#include<stdlib.h>


int nvezes(int num, int d){
    if(num==0) return 0;
    if(num%10==d){ 
        return 1+nvezes(num/10, d);
    }else{
        return nvezes(num/10, d);
    }
}


int main(){
    int num, d;
    printf("Descubra quantas vezes um dígito se repete em um número\n");
    printf("Digite um número e depois um digito:\n");
    scanf("%d%d", &num, &d);
    printf("O dígito %d se repete %d vezes no número %d.\n", d, nvezes(num,d), num);
    
    return 0;
}
