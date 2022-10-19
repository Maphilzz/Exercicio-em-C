#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"Portuguese");
    float par,impar,zero;
    int num;
    
    printf("Digite um número de sua preferência:\n");
    printf("Número:");
    scanf("%d", &num);
    
    
    if(num %2==0)
    printf("O valor digitado é par.\n");
    else
    printf("O valor digitado é impar.\n");
    
}


