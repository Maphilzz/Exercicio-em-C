#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
    float numero,positivo,negativo,zero;
    int num;
    
    printf("Digite um número de sua preferência:\n");
    printf("Número:");
	scanf("%d", &num);
    if(num>0){
    printf(" Seu número é Positivo",num);
    }else{
    if (num<0)
    printf("Seu número é Negativo",num);
    }
    if(num==0){
    printf("Seu número é Nulo",num);
    }

    }
