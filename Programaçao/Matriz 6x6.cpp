#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 6
#define C 6

int main(){
	int i, j, m[L][C], aSoma=0, bSoma=0, cSoma=0, dSoma=0, eSoma=0, fSoma=0;

	
	printf("Preencha os dados da Matriz %dX%d\n", L, C);
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			printf("\nDigite os valores para M[%d][%d]\n", i, j);
			scanf("%d", &m[i][j]);
		}
	}


	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
		
			if(i==j){
				aSoma = aSoma + m[i][j];
			}

			
			if (j==C-i-1) {
				bSoma = bSoma + m[i][j];
			}
			

		}
	}

	printf("\n\n  Matriz \n\n");
	for(i=0; i < L; i++){
		printf("  %i\t[ ", i);
		for (j=0; j < C; j++){
			printf("%i ", m[i][j]);
		}
		printf("]\n");
	}

	printf("\n\n-------------------------\n");
	printf("\t A: %i\n", aSoma);
	printf("\t B: %i\n", bSoma);
	return 0;
}

