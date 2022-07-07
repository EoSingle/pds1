/* 
Programação e Desenvolvimento de Software 1
Lista 10: Registros
Nome: Lucas Albano Olive Cruz
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

#define PI 3.14159265

struct Ponto{            // Exercício 1
    float x;
    float y;
};

struct Triangulo{        // Exercício 4
    struct Ponto p1;
    struct Ponto p2;
    struct Ponto p3;
};

struct Retangulo{        // Exercício 9
    struct Ponto p1;
    struct Ponto p2;
    struct Ponto p3;
    struct Ponto p4;
};

struct Circunferencia{   // Exercício 13
    struct Ponto p;
    float r;
};


float Distancia(struct Ponto p1, struct Ponto p2){                                                                                   // Exercício 2
    return(sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2)));
}


void Atribuir_ponto(struct Ponto* p, float a, float b){                                                                              // Exercício 3
    p->x = a;
    p->y = b;
}


float Triangulo_perimetro(struct Triangulo t){                                                                                       // Exercício 5
    return(Distancia(t.p1,t.p2)+Distancia(t.p2,t.p3)+Distancia(t.p3,t.p1));
}


float Triangulo_area(struct Triangulo t){                                                                                            // Exercício 6
    return((Distancia(t.p1,t.p2)*Distancia(t.p2,t.p3))/2);
}


bool Triangulo_equilatero(struct Triangulo t){                                                                                       // Exercício 7
    float a = Distancia(t.p1,t.p2);
    float b = Distancia(t.p2,t.p3);
    float c = Distancia(t.p3,t.p1);
    if(a==b && b==c && c==a){
        return 1;
    } 
    else{
        return 0;
    }
}


bool Triangulo_semelhante(struct Triangulo t1, struct Triangulo t2){                                                                 // Exercício 8
    if(pow(Distancia(t1.p1, t1.p2)/Distancia(t2.p1,t2.p2),2) == Triangulo_area(t1)/Triangulo_area(t2)){
        return 1;
    }
    else{
        return 0;
    }
}


float Retangulo_perimetro(struct Retangulo r){                                                                                       // Exercício 10
    return(Distancia(r.p1,r.p2)+Distancia(r.p2,r.p3)+Distancia(r.p3,r.p4)+Distancia(r.p4,r.p1));
}


float Retangulo_area(struct Retangulo r){                                                                                            // Exercício 11
    return(Distancia(r.p1,r.p2)*Distancia(r.p2,r.p3));
}


bool Retangulo_quadrado(struct Retangulo r){                                                                                         // Exercício 12
    float a = Distancia(r.p1,r.p2);
    float b = Distancia(r.p2,r.p3);
    float c = Distancia(r.p3,r.p4);
    float d = Distancia(r.p4,r.p1);
    if(a==c && b==d){
        return 1;
    }
    else{
        return 0;
    }
}


float Circunferencia_perimetro(struct Circunferencia c){                                                                             // Exercício 14
    return(2*PI*c.r);
}


float Circunferencia_area(struct Circunferencia c){                                                                                  // Exercício 15
    return(PI*pow(c.r,2));
}


bool Circunferencia_contem_ponto(struct Circunferencia c, struct Ponto p){                                                           // Exercício 16
    if(Distancia(c.p,p)<=c.r){
        return 1;
    }
    else{
        return 0;
    }
}


bool Circunferencia_contem_triangulo(struct Circunferencia c, struct Triangulo t){                                                   // Exercício 17
    if(Circunferencia_contem_ponto(c,t.p1) && Circunferencia_contem_ponto(c,t.p2) && Circunferencia_contem_ponto(c,t.p3)){
        return 1;
    }
    else{
        return 0;
    }
}


bool Circunferencia_contem_retangulo(struct Circunferencia c, struct Retangulo r){                                                   // Exercício 18
    if(Circunferencia_contem_ponto(c,r.p1) && Circunferencia_contem_ponto(c,r.p2) && Circunferencia_contem_ponto(c,r.p3) && Circunferencia_contem_ponto(c,r.p4)){
        return 1;
    }
    else{
        return 0;
    }
}


bool Circunferencia_pertence(struct Circunferencia c, struct Ponto p){                                                               // Exercício 19
    if(Distancia(c.p,p)==c.r){
        return 1;
    }
    else{
        return 0;
    }
}


bool Circunferencia_circunscrita_tri(struct Circunferencia c, struct Triangulo t){                                                   // Exercício 20
    if(Circunferencia_pertence(c,t.p1) && Circunferencia_pertence(c,t.p2) && Circunferencia_pertence(c,t.p3)){
        return 1;
    }
    else{
        return 0;
    }
}


bool Circunferencia_circunstrita_ret(struct Circunferencia c, struct Retangulo r){                                                   // Exercício 21
    if(Circunferencia_pertence(c,r.p1) && Circunferencia_pertence(c,r.p2) && Circunferencia_pertence(c,r.p3) && Circunferencia_pertence(c,r.p4)){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    
    // Testes Parte I
    struct Ponto p1, p2;
    Atribuir_ponto(&p1,1,2);
    Atribuir_ponto(&p2,3,4);
    printf("Ponto P1: %.2f, %.2f\n", p1.x, p1.y);
    printf("Ponto P2: %.2f, %.2f\n", p2.x, p2.y);
    printf("Distancia entre os pontos P1 e P2: %.2f\n",Distancia(p1,p2));

    // Testes Parte II
    struct Triangulo t1={{1,2}, {4,2}, {4,6}}, t2={{3,4}, {6,4}, {6,8}};
    printf("\nPontos do Triângulo 'T1': (%.2f, %.2f), (%.2f, %.2f), (%.2f, %.2f)\n", t1.p1.x, t1.p1.y, t1.p2.x, t1.p2.y, t1.p3.x, t1.p3.y);
    printf("Perimetro do triangulo T1: %.2f\n",Triangulo_perimetro(t1));
    printf("Area do triangulo T1: %.2f\n",Triangulo_area(t1));
    printf("Triângulo T2: (%.2f, %.2f), (%.2f, %.2f), (%.2f, %.2f)\n", t2.p1.x, t2.p1.y, t2.p2.x, t2.p2.y, t2.p3.x, t2.p3.y);
    printf("Detalhes do triangulo T1:\n");
   if(Triangulo_equilatero(t1)){
        printf("Triângulo equilatero\n");
    }
    else{
        printf("Triângulo não equilatero\n");
    }
    printf("Os triângulos T1 e T2 são:\n");
    if(Triangulo_semelhante(t1,t2)){
        printf("Triângulos semelhantes\n");
    }
    else{
        printf("Triângulos não semelhantes\n");
    }

    // Testes Parte III
    struct Retangulo r1={{1,2}, {5,2}, {5,5}, {1,5}};
    printf("\nPontos do Retangulo 'R1': (%.2f, %.2f), (%.2f, %.2f), (%.2f, %.2f), (%.2f, %.2f)\n", r1.p1.x, r1.p1.y, r1.p2.x, r1.p2.y, r1.p3.x, r1.p3.y, r1.p4.x, r1.p4.y);
    printf("Perimetro do retangulo R1: %.2f\n",Retangulo_perimetro(r1));
    printf("Area do retangulo R1: %.2f\n",Retangulo_area(r1));
    printf("O Retangulo R1 é:\n");
    if(Retangulo_quadrado(r1)){
        printf("Quadrado\n");
    }
    else{
        printf("Não quadrado\n");
    }

    // Testes Parte IV
    struct Circunferencia c1={{1,1}, 4};
    printf("\nCentro da circunferência C1: (%.2f, %.2f)\n", c1.p.x, c1.p.y);
    printf("Raio da circunferência C1: %.2f\n", c1.r);
    printf("Perímetro da circunferência C1: %.2f\n", Circunferencia_perimetro(c1));
    printf("Area da circunferência C1: %.2f\n", Circunferencia_area(c1));
    printf("O ponto P1 está contido na circunferência C1?\n");
    if(Circunferencia_contem_ponto(c1,p1)){
        printf("Sim\n");
    }
    else{
        printf("Não\n");
    }
    printf("O triangulo T1 está contido na circunferência C1?\n");
    if(Circunferencia_contem_triangulo(c1,t1)){
        printf("Sim\n");
    }
    else{
        printf("Não\n");
    }
    printf("O retangulo R1 está contido na circunferência C1?\n");
    if(Circunferencia_contem_retangulo(c1,r1)){
        printf("Sim\n");
    }
    else{
        printf("Não\n");
    }
    printf("O ponto P1 está na linha definida pela circunferência C1?\n");
    if(Circunferencia_pertence(c1,p1)){
        printf("Sim\n");
    }
    else{
        printf("Não\n");
    }
    printf("O triangulo T1 é circunscrito a C1?\n");
    if(Circunferencia_circunscrita_tri(c1,t1)){
        printf("Sim\n");
    }
    else{
        printf("Não\n");
    }
    printf("O retangulo R1 é circunscrito a C1?\n");
    if(Circunferencia_circunstrita_ret(c1,r1)){
        printf("Sim\n");
    }
    else{
        printf("Não\n");
    }

    return 0;
}
