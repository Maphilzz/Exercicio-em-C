#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
    float numero,positivo,negativo,zero;
    int num;
    
    printf("Digite um n�mero de sua prefer�ncia:\n");
    printf("N�mero:");
	scanf("%d", &num);
    if(num>0){
    printf(" Seu n�mero � Positivo",num);
    }else{
    if (num<0)
    printf("Seu n�mero � Negativo",num);
    }
    if(num==0){
    printf("Seu n�mero � Nulo",num);
    }

    }
