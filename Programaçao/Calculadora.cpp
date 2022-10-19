/************************************************
*	Universidade Estadual de Goiás - CCET		*
*	Data 16/02/2022								*
*	Engenharia Civil - 1º período 				*
*	Disciplina: Programação para Engenharia 	*
*	Docente: Hellen Carmo de Oliveira Matos		*
*	Acadêmico: Matheus de Souza Borges			*
*************************************************/
//2.	Faça um programa que leia dois números inteiros e apresente o seguinte menu na tela://
//1 - Soma                                                                                  //
//2 - Subtração                                                                             //
//3 - Divisão                                                                               //
//4 - Multiplicação                                                                         //
//5 - Potência                                                                              //
//7 - Sair                                                                                  //
//Escolhe uma opção:                                                                        //
//Conforme a operação escolhida, o algoritmo deverá apresentar o resultado e depois voltar ao menu. O algoritmo será finalizado somente quando for selecionado a opção 7.//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"Portuguese");

int op, num1, num2,e,pot=1;//Foi atribuído variáveis como opcao,num1,num2,e e pot que são utilizadas para exexutar o programa.//
   
do{

        printf("Escolha uma opção:\n1 - Soma\n2 - Subtração\n3 - Divisão\n4 - Multiplicação\n5 - Potência\n7 - Sair\n\n");
        scanf("%d", &op);//Aqui será atribuido ação por parte da pessoa/teclado,ou seja variavel na qual armazena o valor atribuido por uma tecla,nesse caso a variável "opcao".//

if(op > 0 && op < 5){//Comando utilizado para atribuir as opções e para que possa escolher//
            
         printf("Digite dois valores de sua prefêrencia: ");
         scanf("%d%d",&num1, &num2);//Aqui será atribuido ação por parte da pessoa/teclado,ou seja variavel na qual armazena o valor atribuido por uma tecla,nesse caso as variaveis: "num1" e "num2".//
}

switch(op) { //Utilizei switch por ser mais fácil que usar o if/else na qual quando comparado com um valor e caso seja verdadeira o comando será executado.//
        
        case 7:
            printf("Saindo...\n");//Caso seja escolhida essa opção no menu de opções e assim será apresentado.//
break;
        case 1:
            printf("Soma: %d\n",num1 + num2);//Caso seja escolhida essa opção no menu de opções e assim será apresentado.//
break;
        case 2:
            printf("Subtrção: %d\n", num1 - num2);//Caso seja escolhida essa opção no menu de opções e assim será apresentado.//
break;
        case 3:
            while(num2 == 0) {
                printf("Não existe divisão por zero!\n Digite outro valor: ");//Caso seja escolhida essa opção no menu de opções e assim será apresentado.//
         
               scanf("%d", &num2);
}
           
            printf("Divisão: %d\n", num1/num2);//Caso seja escolhida essa opção no menu de opções e assim será apresentado.//
break;
        case 4:
            printf("Multiplicação: %d\n", num1 * num2);//Caso seja escolhida essa opção no menu de opções e assim será apresentado.//
break;
        case 5:
        printf("Informe a base: ");//Caso seja escolhida essa opção no menu de opções e assim será apresentado.//
        scanf("%d",&num1);
        printf("Informe o expoente: ");//Caso seja escolhida essa opção no menu de opções e assim será apresentado.//
        scanf("%d",&num2);
  
for(e=0; e<num2; e++)
{
        pot *= num1;
      
if(num2 == 0) // Qualquer numero elevado a 0 é igual 1, necessário colocar esse comnado pois é um fundamento da matemática e como o programa é dinâmico,deve apresentar todas as situações,caso seja escolhida essa opção.//
{
        pot = 1;
}
    
}
         printf("\n%d elevado a %d = %d\n",num1,num2,pot);//Caso seja escolhida essa opção no menu de opções e assim será apresentado.//
        
break;
}
        

printf (" Caso queira sair digite o número 7,\n Caso contrario digite qualquer outro numero desejado:\n");//Após todo o programa rodar irá imprimir essa frase para que uma nova ação seja determinada.//
scanf ("%d", &op);//Aqui será atribuido ação por parte da pessoa/teclado,ou seja variavel na qual armazena o valor atribuido por uma tecla,nesse caso a variável "op".//

} while(op != 7);//Utilizado para executar uma repetição de um bloco quando a condição dada for verdadeira.//
}


