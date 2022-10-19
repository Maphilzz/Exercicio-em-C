#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main (void) {
setlocale(LC_ALL,"Portuguese");
  
   //ENTRADA
float larg,comp,pot_lamb;

printf("Largura(m):");
scanf("%f", &larg);
printf("Comprimento(m):");
scanf("%f", &comp);
printf("Potencia(w):");
scanf("%f", &pot_lamb );
 
   //PROCESSAMENTO
float area_m2 = larg*comp;
float potencia_total= area_m2*18;
float num_lampadas= potencia_total/pot_lamb;
  
   //SAIDA
printf("Área: %.2f\n", area_m2);
printf("Potência Total: %.2f\n", potencia_total);
printf("Número de lâmpadas: %.2f\n", num_lampadas);

}
