#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main() {
setlocale(LC_ALL,"Portuguese");

int codigo;
   printf("Digite o código do produto para saber a condição de pagamento que vai de 1 a 4 \n");
   printf("Código:");
   scanf("%d",&codigo);
switch (codigo){

case 1:
	
    printf("À vista em dinheiro ou cheque, recebe 10%% de desconto");
	break;

case 2:
	
    printf("À vista no cartão de crédito, rebe 5%% de desconto");
	break;

case 3:
	
    printf("Em duas vezes, preço normal de etiqueta sem juros");
	break;

case 4:
	
    printf("Em tres vezes, preco normal de etiqueta mais juros de 10%%");
	break;

default:
	printf("ERRO");
}

}
