/************************************************
*	Universidade Estadual de Goi�s - CCET		*
*	Data 16/02/2022								*
*	Engenharia Civil - 1� per�odo 				*
*	Disciplina: Programa��o para Engenharia 	*
*	Docente: Hellen Carmo de Oliveira Matos		*
*	Acad�mico: Matheus de Souza Borges			*
*************************************************/


//Fazer um programa em C que mostre na tela um X de asteriscos (*). O programa deve solicitar um n�mero inteiro n, que ser� o n�mero de linhas (a altura) do seu X. Um exemplo de entrada e a sa�da que exemplificam o que se pede s�o mostrados a seguir
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
	
int A, O, es; 
  
    
       printf("Escolha um valor inteiro que seja maior do que 2 para determinar a altura: ");
       scanf("%d", &es);
       printf("\n"); 

while(es<3){//Com
	
      printf("Digite novamente um valor, o n�mero inserido deve ser maior que 2\n");
      scanf("%d", &es);
      printf("\n"); 
	
}
for (O = 1; O <=es/2; O++){ 
for(A = O; A >= 1; A--){ 

      printf(" ");}
      printf("*");
				
for (A = es - (2*O) ; A >=1; A--){ 
      printf(" ");} 			
      printf("*");
      printf("\n"); 
}			
if(es % 2 != 0){ 
for(A = O; A >= 1; A--){ 
     
      printf(" ");}
      printf("*");
      printf("\n");
}     			
for (O = 1; O <=es/2; O++){ 
for(A = (es/2)-O +1; A >= 1; A--){ 

      printf(" ");}
      printf("*");
        	
if(es % 2 == 0){ 
for (A = 2 ; A <2*O; A++){ 

      printf(" ");} 
}
else { 
for (A = 2 ; A <=2*O; A++){
     
      printf(" ");} 
}
       
      printf("*");
      printf("\n");
}
      printf("\n");			

system("pause");
return 0;
}





