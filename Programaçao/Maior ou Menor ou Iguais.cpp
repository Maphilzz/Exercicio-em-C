#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
int x,y,maior;

    printf("Atribua dois valores e descubra qual o maior:\n");
    printf("Por favor digite o primeiro n�mero: ");
    scanf("%d", &x);

    printf("Por favor digite o segundo n�mero : ");
    scanf("%d", &y);

    
	
	
    if(x > y){
	maior = x;
    printf("O maior n�mero �: %d", maior);
	
	}else {
	x<y;
	maior = y;
      printf("O maior n�mero �: %d", maior);}
  
  
}

 
    
    
    
