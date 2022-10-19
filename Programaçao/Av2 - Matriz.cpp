/*Universidade Estadual de Goiás	
Curso: Engenharia Civil
Matéria:Programação
Docente: Hellen do Carmo
Discente: Matheus de Souza Borges
Anápolis, 23/03/2022*/


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
    printf("\n Que estão no triângulo superior a diagonal principal: "); 

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
   printf("\nQue estão no triângulo inferior a diagonal principal: "); 

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

    printf("\n Que estão no triângulo superior a diagonal secundária: "); 

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

    printf("\n Que estão no triângulo inferior a diagonal secundária: "); 

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
    printf("\n Todos, exceto a diagonal secudária: "); 

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
