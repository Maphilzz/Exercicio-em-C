#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
setlocale(LC_ALL,"Portuguese");


float s, aumento, p, novo_salario;

printf ("Digite seu sal�rio atual:" );
scanf("%f",&s);

printf("Digite a porcentagem do aumento:");
scanf("%f",&p);

aumento=((s*p)/100);
novo_salario= (aumento+s);
printf("O novo sal�rio �: %1.f" , novo_salario);


}

