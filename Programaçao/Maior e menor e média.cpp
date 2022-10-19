#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() { 
setlocale(LC_ALL,"Portuguese");
 
int numero, maior, menor, media =0; 
int i; 

printf("Digite 10 valores e logo em seguida será mostrado o maior, menor e a média dos valores :\n");

printf("Primeiro número:");
scanf("%d", &numero); 
printf("Segundo número:");
scanf("%d", &numero); 
printf("Terceiro número:");
scanf("%d", &numero); 
printf("Quarto número:");
scanf("%d", &numero); 
printf("Quinto número:");
scanf("%d", &numero); 
printf("Sexto número:");
scanf("%d", &numero); 
printf("Sétimo número:");
scanf("%d", &numero); 
printf("Oitavo número:");
scanf("%d", &numero); 
printf("Nono número:");
scanf("%d", &numero); 
printf("Décimo número:");
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
 
 printf("\n O menor número é: %d", menor); 
 printf("\n O maior número é: %d", maior); 
 printf("\n A média é : %d \n", media);


  }
