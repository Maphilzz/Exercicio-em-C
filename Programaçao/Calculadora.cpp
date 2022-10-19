/************************************************
*	Universidade Estadual de Goi�s - CCET		*
*	Data 16/02/2022								*
*	Engenharia Civil - 1� per�odo 				*
*	Disciplina: Programa��o para Engenharia 	*
*	Docente: Hellen Carmo de Oliveira Matos		*
*	Acad�mico: Matheus de Souza Borges			*
*************************************************/
//2.	Fa�a um programa que leia dois n�meros inteiros e apresente o seguinte menu na tela://
//1 - Soma                                                                                  //
//2 - Subtra��o                                                                             //
//3 - Divis�o                                                                               //
//4 - Multiplica��o                                                                         //
//5 - Pot�ncia                                                                              //
//7 - Sair                                                                                  //
//Escolhe uma op��o:                                                                        //
//Conforme a opera��o escolhida, o algoritmo dever� apresentar o resultado e depois voltar ao menu. O algoritmo ser� finalizado somente quando for selecionado a op��o 7.//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"Portuguese");

int op, num1, num2,e,pot=1;//Foi atribu�do vari�veis como opcao,num1,num2,e e pot que s�o utilizadas para exexutar o programa.//
   
do{

        printf("Escolha uma op��o:\n1 - Soma\n2 - Subtra��o\n3 - Divis�o\n4 - Multiplica��o\n5 - Pot�ncia\n7 - Sair\n\n");
        scanf("%d", &op);//Aqui ser� atribuido a��o por parte da pessoa/teclado,ou seja variavel na qual armazena o valor atribuido por uma tecla,nesse caso a vari�vel "opcao".//

if(op > 0 && op < 5){//Comando utilizado para atribuir as op��es e para que possa escolher//
            
         printf("Digite dois valores de sua pref�rencia: ");
         scanf("%d%d",&num1, &num2);//Aqui ser� atribuido a��o por parte da pessoa/teclado,ou seja variavel na qual armazena o valor atribuido por uma tecla,nesse caso as variaveis: "num1" e "num2".//
}

switch(op) { //Utilizei switch por ser mais f�cil que usar o if/else na qual quando comparado com um valor e caso seja verdadeira o comando ser� executado.//
        
        case 7:
            printf("Saindo...\n");//Caso seja escolhida essa op��o no menu de op��es e assim ser� apresentado.//
break;
        case 1:
            printf("Soma: %d\n",num1 + num2);//Caso seja escolhida essa op��o no menu de op��es e assim ser� apresentado.//
break;
        case 2:
            printf("Subtr��o: %d\n", num1 - num2);//Caso seja escolhida essa op��o no menu de op��es e assim ser� apresentado.//
break;
        case 3:
            while(num2 == 0) {
                printf("N�o existe divis�o por zero!\n Digite outro valor: ");//Caso seja escolhida essa op��o no menu de op��es e assim ser� apresentado.//
         
               scanf("%d", &num2);
}
           
            printf("Divis�o: %d\n", num1/num2);//Caso seja escolhida essa op��o no menu de op��es e assim ser� apresentado.//
break;
        case 4:
            printf("Multiplica��o: %d\n", num1 * num2);//Caso seja escolhida essa op��o no menu de op��es e assim ser� apresentado.//
break;
        case 5:
        printf("Informe a base: ");//Caso seja escolhida essa op��o no menu de op��es e assim ser� apresentado.//
        scanf("%d",&num1);
        printf("Informe o expoente: ");//Caso seja escolhida essa op��o no menu de op��es e assim ser� apresentado.//
        scanf("%d",&num2);
  
for(e=0; e<num2; e++)
{
        pot *= num1;
      
if(num2 == 0) // Qualquer numero elevado a 0 � igual 1, necess�rio colocar esse comnado pois � um fundamento da matem�tica e como o programa � din�mico,deve apresentar todas as situa��es,caso seja escolhida essa op��o.//
{
        pot = 1;
}
    
}
         printf("\n%d elevado a %d = %d\n",num1,num2,pot);//Caso seja escolhida essa op��o no menu de op��es e assim ser� apresentado.//
        
break;
}
        

printf (" Caso queira sair digite o n�mero 7,\n Caso contrario digite qualquer outro numero desejado:\n");//Ap�s todo o programa rodar ir� imprimir essa frase para que uma nova a��o seja determinada.//
scanf ("%d", &op);//Aqui ser� atribuido a��o por parte da pessoa/teclado,ou seja variavel na qual armazena o valor atribuido por uma tecla,nesse caso a vari�vel "op".//

} while(op != 7);//Utilizado para executar uma repeti��o de um bloco quando a condi��o dada for verdadeira.//
}


