#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() { 
setlocale(LC_ALL,"Portuguese");
 
int numero, maior, menor, media =0; 
int i; 

printf("Digite 10 valores e logo em seguida ser� mostrado o maior, menor e a m�dia dos valores :\n");

printf("Primeiro n�mero:");
scanf("%d", &numero); 
printf("Segundo n�mero:");
scanf("%d", &numero); 
printf("Terceiro n�mero:");
scanf("%d", &numero); 
printf("Quarto n�mero:");
scanf("%d", &numero); 
printf("Quinto n�mero:");
scanf("%d", &numero); 
printf("Sexto n�mero:");
scanf("%d", &numero); 
printf("S�timo n�mero:");
scanf("%d", &numero); 
printf("Oitavo n�mero:");
scanf("%d", &numero); 
printf("Nono n�mero:");
scanf("%d", &numero); 
printf("D�cimo n�mero:");
scanf("%d", &numero); 

 
 maior=numero; 
 menor=numero; 
 
for(i=1; i<10; i++) 
{ 
 
 media = media + numero;
 
if(numero>maior) 
maior=numero; 
else 
if(numero<menor) 
menor=numero; 
} 
 media = media / 10;
 
 printf("\n O menor n�mero �: %d", menor); 
 printf("\n O maior n�mero �: %d", maior); 
 printf("\n A m�dia � : %d \n", media);


  }
