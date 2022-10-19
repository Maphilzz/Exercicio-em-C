#include<stdio.h>
#include<stdlib.h>

int main(){
int m, b;
int mat[m][b], matc[m][b];
int i, j;
	
	printf("Digite o tamanho da linha da matriz , sendo primeiro a linha e depois a coluna: (ixj)\n");
	scanf("%d%d", &m, &b);
	


for(i = 0; i < m; i++){
for(j = 0; j < b; j++){
    
    printf("Digite o elemento [%d][%d]\n", i, j);
    scanf("%d", &mat[i][j]);
		       
if(mat[i][j] % 2 == 0){
matc[i][j] = +1;
}else{
matc[i][j] = -1;


}
}
}

          printf("\n Matriz antes de troca os termos: ");
for(i = 0; i < m; i++){
          printf("\n");
for(j = 0; j < b; j++){
		  printf("%d ", &mat[i][j]);
		  
}
}

          printf("\n Matriz depois de troca os termos:");
for(i =0; i < m; i++){
          printf("\n");
for(j = 0; j < b; j++){
		  printf("%d ", matc[i][j]);
		  
}
}

          
            

}
