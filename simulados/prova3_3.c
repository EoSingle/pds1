/*
3. (Google Maps) Crie o tipo de dados “Restaurante” que possui como componentes as
coordenadas de localização X e Y, o nível de preço,e o nome do restaurante. Assuma que
essas informações estejam em um arquivo o qual possa ser lido.
a. Faça uma função que imprima todos os restaurantes localizados a um raio de
distância de no máximo m metros.
b. Faça uma função que imprima todos os restaurantes localizados a um raio de
distância de no máximo m metros, e cujo preço não ultrapasse r reais.
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

struct Restaurante{
    char name[50];
    int x;
    int y;
    int level;
}

void FilterRange(struct Restaurante restaurantes[], int len, int raio){                  // a)
    for(int i=0; i<len; i++){
        if(sqrt(pow(restaurantes[i].x,2)+pow(restaurantes[i].y,2))<raio){
            printf("%s\n", restaurantes[i].name);
        }
    }
}

void FilterPrice(struct Restaurante restaurantes[], int len, int raio, int price){       // b)
    for(int i=0; i<len; i++){
        if(sqrt(pow(restaurantes[i].x,2)+pow(restaurantes[i].y,2))<raio && restaurantes[i].level<price){
            printf("%s\n", restaurantes[i].name);
        }
    }
}

int main(){                        // O programa não foi testado pois não era o objetivo da questão,
    FILE* fp;                      // o importante é a lógica do struct e das funções "Filter".
    int len, raio, price;

    printf("Informe o número de restaurantes no arquivo:\n");
    scanf("%d", &len);
    struct Restaurante restaurantes[len];

    fp = fopen("restaurantes.txt", "r+t");
    if(fp==NULL){
        printf("Erro na abertura do arquivo 'restaurantes.txt'.\n");
        fclose(fp);
    }

    for(int i=0; i<len; i++){
        fscanf(fp, "%s", &restaurantes[i].name);
        fscanf(fp, "%d", &restaurantes[i].x);
        fscanf(fp, "%d", &restaurantes[i].y);
        fscanf(fp, "%d", &restaurantes[i].level);
    }

    printf("Digite qual a distância máxima do restaurante:\n");
    scanf("%d", &raio);
    printf("Restaurantes encontrados:\n");
    FilterRange(restaurantes[], len, raio);

    printf("Digite qual o preço máximo do restaurante:\n");
    scanf("%d", &price);
    printf("Restaurantes encontrados:\n");
    FilterPrice(restaurantes[], len, raio, price);

    fclose(fp);
    return 0;
}