#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include <locale.h>
int main ( ){
setlocale(LC_ALL,"Portuguese");

float p, i, n, acumulado;    

printf ("Qual o valor da aplicação mensal:\n");
printf("Valor:");
scanf("%f",&p);

printf ("Qual o valor da taxa: \n");
printf("Taxa:");
scanf ("%f", &i);

printf ("Qual a quantidade de Meses: \n");
printf("Meses:");
scanf ("%f",&n);

acumulado = p*(1+i)*n-(1*i);

printf ("Voce tem: %1.f de poupança", acumulado);

}
