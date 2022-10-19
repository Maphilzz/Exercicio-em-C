#include<stdio.h>
#include<stdlib.h>

int main () {
	float A, B, C;
	
	     printf("Digite valores para A e B para gerarem resultado para C:\n");
         printf("A = ");
		 scanf("%f", &A);
		 printf("B = ");
	    
		scanf("%f", &B);
	if(A==B) {
	C=A+B;
	
         printf("Iguais soma: %.2f\n", C);		
}else {
		C=A*B;
		
         printf("Diferentes multiplica: %.2f\n", C);
}


}
