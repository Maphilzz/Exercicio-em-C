#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL,"Portuguese");

int V[10];
int i,cont;
float menor,maior,posicao;
for (i=0;i<10;i++){
	printf("Digite o valor da posição %d de um vetor\n", (i+0));
	scanf("%d",&V[i]);
	
	if(i == 0){
     	menor = V[i];
     	maior = V[i];
		}
		
		
		else if(V[i]<menor){
	 	menor = V[i];
	}else if(V[i]>maior){
	 	maior = V[i];
   }
}
   printf("\nO maior vetor é: %.2f\n",maior);
   printf("O menor vetor é: %.2f\n",menor);


}
