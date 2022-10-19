#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"Portuguese");


    int tam = 10;
    int l, c, mat[tam][tam];

    // preenche a matriz gerando valores aleatórios
    for(l = 0; l < tam; l++){
        for(c = 0;  c< tam; c++){
            mat[l][c] = rand() % 100;
        }
    }

    // imprime a matriz na tela
    for(l = 0; l < tam; l++){
        for(c = 0;  c< tam; c++){
            printf("%2d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("\n\n Diagonal principal: ");
    for(l = 0; l < tam; l++){
        printf("%d ", mat[l][l]);
    }

    printf("\n\n Diagonal secundária: ");
    for(l = 0; l < tam; l++){
        printf("%d ", mat[l][tam - 1 - l]);
    }
    printf("\n\n");

  
}
