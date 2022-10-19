#include <stdio.h>
#include<stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"Portuguese");
     int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,cont=0;
printf ("informe a idade de 10 pessoas:\n");
scanf ("%i %i %i %i %i %i %i %i %i %i", &n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
     if (n1>=18)
cont++;
     if (n2>=18)
cont++;
     if (n3>=18)
cont++;
     if (n4>=18)
cont++;
     if (n5>=18)
cont++;
     if (n6>=18)
cont++;
     if (n7>=18)
cont++;
     if (n8>=18)
cont++;
     if (n9>=18)
cont++;
     if (n10>=18)
cont++;

printf (" \n %i pessoas são maiores de 18 anos\n", cont);
printf ("\n\n");


}
