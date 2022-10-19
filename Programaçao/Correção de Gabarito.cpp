#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"Portuguese");
	
int i,aluno,NotaFinal;         
char gab[10],resp[10];     
 
     printf("Digite o gabarito da prova: ");

for (i = 0; i < 10; i++) 
    
     scanf(" %c", &gab[i]);  

for (aluno = 1; aluno <= 30; aluno++) {
NotaFinal = 0;
    
    printf("Escreva as respostas do aluno %d: ", aluno);

for (i = 0; i < 10; i++) {
      
      scanf(" %c", &resp[i]);

if (resp[i] == gab[i])
NotaFinal = NotaFinal + 1;
}
if (NotaFinal>=7){
    
    printf("O aluno %d tirou nota %d , e está Aprovado\n", aluno, NotaFinal);} 
    
else {
    
    printf("O aluno %d tirou nota %d , e está Reprovado\n", aluno, NotaFinal);}
}


}
