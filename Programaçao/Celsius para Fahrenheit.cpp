#include<stdio.h>
#include<stdlib.h>

int main () {
   float F, C;

printf("Por gentileza, digite a temperatura em Celsius :\n");
scanf("%f", &C);
F=C * 1.8 + 32;
printf("Temperatura em Farenheit = %.1f\n",F);


}
