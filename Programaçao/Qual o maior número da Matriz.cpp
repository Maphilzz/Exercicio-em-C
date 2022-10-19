#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
		
int mat[10][10];
int i, j, m, b;
int maior = 0;

for(i = 0;i < 10; i++){
for(j = 0; j < 10; j++){
    printf("Digite o elemento [%d][%d]\n", i, j);
    scanf("%d", &mat[i][j]);
}
}

for(i = 0; i < 10; i++){
		
   printf("\n");

for(j = 0; j < 10; j++){
		 
   printf("%d", &mat[i][j]);

if(maior < mat[i][j]){
maior = mat[i][j];
m = i + i;
b = j + i;
}
}
}
   printf("\nO maior número e : %d e pertence a linha %d e coluna %d (%dA%d)\n", maior, m, b, m, b);

system("pause");
return 0;
}
