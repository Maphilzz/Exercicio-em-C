/*Universidade Estadual de Goi�s	
Curso: Engenharia Civil
Mat�ria:Programa��o
Docente: Hellen do Carmo
Discente: Matheus de Souza Borges
An�polis, 23/03/2022*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"Portuguese");

int m[5][5],i,j;
    
for(i=0;i<5;i++){
   
   printf("\n");

for(j=0;j<5;j++){
           
	printf("Linha: [%d] Coluna[%d]: ",i+1,j+1);
    scanf("%d",&m[i][j]);
            
            }
            }
   
   printf("\nMatriz completa: ");    
   
for(i = 0; i < 5; i++){
    
    printf("\n");

for(j = 0; j < 5; j++){
    
    printf("%d ", m[i][j]);         
}
}
    printf("\n Que est�o no tri�ngulo superior a diagonal principal: "); 

for(i = 0; i < 5; i++){
    
    printf("\n");

for(j = 0; j < 5; j++){
if(i<j){  

   printf("%d ", m[i][j]);
     
}

else{
    
    printf(" ", m[i][j]);

}
}
}
   printf("\nQue est�o no tri�ngulo inferior a diagonal principal: "); 

for(i = 0; i < 5; i++){
    
   printf("\n");

for(j = 0; j < 5; j++){
if(i>j){  

   printf("%d ", m[i][j]);

}

  else{
    
    printf(" ", m[i][j]);
    
}
}
}
    
    printf("\n Todos, exceto a diagonal principal: "); 

for(i = 0; i < 5; i++){
    
    printf("\n");

for(j = 0; j < 5; j++){
if(i!=j){  

    printf("%d ", m[i][j]);
    
}

else{
    
    printf(" ", m[i][j]);
    
}
}
}

    printf("\n Que est�o no tri�ngulo superior a diagonal secund�ria: "); 

for(i = 0; i < 5; i++){
    
    printf("\n");

for(j = 0; j < 5; j++){
if(i+j<4 ){  printf("%d ", m[i][j]);
        
}

else{
    
    printf(" ", m[i][j]);

}
}
}

    printf("\n Que est�o no tri�ngulo inferior a diagonal secund�ria: "); 

for(i = 0; i < 5; i++){
    
    printf("\n");

for(j = 0; j < 5; j++){
if(i+j>4 ){  printf("%d ", m[i][j]);
    
} 

else{
    
    printf(" ", m[i][j]);

}
}
}          
    printf("\n Todos, exceto a diagonal secud�ria: "); 

for(i = 0; i < 5; i++){ 
    
	printf("\n");
    
for(j = 0; j < 5; j++){
if(i+j!=5-1 ){  
  
    printf("%d ", m[i][j]);
    
} 

else{
    
    printf(" ", m[i][j]);

}
}
}

       
}
