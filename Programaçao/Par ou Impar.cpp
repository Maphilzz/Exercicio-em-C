#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
    float par,impar,zero;
    int num;
    
    printf("Digite um n�mero de sua prefer�ncia:\n");
    printf("N�mero:");
    scanf("%d", &num);
    
    
    if(num %2==0)
    printf("O valor digitado � par.\n");
    else
    printf("O valor digitado � impar.\n");
    
}


