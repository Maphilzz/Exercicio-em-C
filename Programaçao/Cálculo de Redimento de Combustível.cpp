#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
   float tempo,velocidade,distancia, velo_media, litros;
    
   printf("Preencha formul�rio atribuindo valores para descobrir a m�dia do seu carro:\n");
   
   printf("Tempo gasto(horas): ");
   scanf("%f", &tempo);
   
   printf("Velocidade(km/h): ");
   scanf("%f", &velocidade);
   
   distancia = tempo*velocidade;
   velo_media = distancia/tempo;
   litros = distancia/12;
   
   printf("\n Dist�ncia:%1.f \n Velocidade M�dia:%1.f \n Tempo:%1.f \n Litros:%1.f",distancia,velo_media,tempo,litros);



}
