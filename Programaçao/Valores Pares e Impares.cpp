#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

int i, n = 0;
printf("Atribua um valor e será dado os números pares e ímpares de acordo com o valor dado :");
   printf("\nINFORME O VALOR: ");

fflush(stdin);

   scanf("%d", &n);
   printf("\n\n %d PRIMEIROS VALORES PARES SÃO:\n",n);

for(i=0; i<n*2; i++)

if(i % 2 == 0)

   printf("\n%3d\n",i);

   printf("\n\n %d PRIMEIROS VALORES ÍMPARES SÃO:\n",n);

for(i=0; i<n*2; i++)

if(i % 2 == 1)

   printf("\n%3d\n",i);


}
