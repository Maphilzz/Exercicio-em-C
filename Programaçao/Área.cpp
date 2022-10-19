#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <locale.h>

int main()
{

setlocale(LC_ALL,"Portuguese");

float A,B,C,tri,cir,tra,qua,ret;
	
printf("Digite os valores em seguida será enviado o cálculo das áreas: \n");

printf("Primeiro valor:");
scanf("%f",&A);
printf("Segundo valor:");
scanf("%f",&B);	
printf("Terceiro valor:");
scanf("%f",&C);

tri= (A*C)/2;
cir=3.14159*pow(C,2);
tra=((A+B)*C)/2;
qua=B*B;
ret=A*B;

	printf(	"TRIÂNGULO: %.3lf\n",tri);
	printf(	"CÍRCULO: %.3lf\n",cir);
	printf(	"TRAPÉZIO: %.3lf\n",tra);
	printf(	"QUADRADO: %.3lf\n",qua);
	printf(	"RETÂNGULO: %.3lf\n",ret);
	


}
