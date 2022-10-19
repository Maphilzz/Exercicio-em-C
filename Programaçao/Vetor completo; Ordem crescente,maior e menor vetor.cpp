#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
setlocale(LC_ALL,"Portuguese");

int V[10];
int i;
float menor,maior,posicao,pos;
for (i=0;i<10;i++){
	printf("Digite o valor da posição %d de um vetor\n", (i+0));
	scanf("%d",&V[i]);
	
	if(i == 0){
     	menor = V[i];
     	maior = V[i];
		pos=0;
	}else if(V[i]>maior){
	 	maior = V[i];
	 	pos=0+i;
	}		
	
}
	printf("O vetor V[10] é igual a :");
	for(i=0; i<10; i++){
   	printf("%d,",V[i]);
   }
   printf("\nO maior vetor eh: %.2f\n",maior);
   printf("O maior vetor encontra se na posição %.0f\n",pos);


}
