#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL,"Portuguese");

float larg, alt, comp;
 
 printf ("Atribua valores para o cálculo da área e quantidade de caixas:\n");
 printf("Comprimento: ");
 scanf("%f", &comp);
 
 printf("Largura: ");
 scanf("%f", &larg);
 
 printf("Altura: ");
 scanf("%f", &alt);
 
float area = (larg*alt)*2 + (comp*alt)*2;
float caixas = area/1.5;
 
 printf("Metros : %.2f \nCaixas : %.2f " , area, caixas);
 
}
