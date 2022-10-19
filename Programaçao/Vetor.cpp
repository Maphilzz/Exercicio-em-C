#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");

int a,b, c, conta;
a=0;
b=0;
	
printf("Quantos valores que estarão nesse vetor?\n");		
scanf("%d",&c);		
float vetor[c];
		
printf("Digite os valores do vetor\n");

while(a<c){
scanf("%f", &vetor[a]);

 a++;}
 a=0;

while(a<c){

conta=1;
b=a+1;

while(b<c){
if(vetor[b] != vetor[a]){

b++;

}else{

 conta++;
 c--;
 vetor[b] = vetor[c];
		}
	}
printf("%.1f aparece %d vezes\n",vetor[a],conta);

a++;
}
	

}

