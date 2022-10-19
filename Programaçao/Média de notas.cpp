#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main () {

setlocale(LC_ALL,"Portuguese");

char ra;
float nota1, nota2, nota3, me, ma;

    printf ("Digite o registro acadêmico do aluno: \n");
    scanf ("%d", &ra);

    printf ("Digite a primeira nota do aluno: \n"); 
    scanf ("%f", &nota1);

    printf ("Digite a segunda nota do aluno: \n");
    scanf ("%f", &nota2);

    printf ("Digite a terceira nota do aluno: \n");
    scanf ("%f", &nota3);

    printf ("Digite a média dos exercícios do aluno: \n");
    scanf ("%f", &me);

    ma =  ((nota1) + (nota2 * 2) + (nota3 * 3) + (me)) / 7;

if (ma >= 9.0) {
        printf ("Aluno com registro acadêmico: %c\n", ra);
        printf ("A primeira nota desse aluno foi: %.2f\n", nota1);
        printf ("A segunda nota desse aluno foi: %.2f\n", nota2);
        printf ("A terceira nota desse aluno foi: %.2f\n", nota3);
        printf ("A média dos exercícios desse aluno foi: %.2f\n", me);
        printf ("A média de aproveitamento desse aluno foi: %.2f\n", ma);
        puts ("O conceito desse aluno é: A \n");
        puts ("ALUNO APROVADO!!!!");
}

else if (7.5 <= ma < 9.0) {
        printf ("Aluno com registro acadêmico: %c\n", ra);
        printf ("A primeira nota desse aluno foi: %.2f\n", nota1);
        printf ("A segunda nota desse aluno foi: %.2f\n", nota2);
        printf ("A terceira nota desse aluno foi: %.2f\n", nota3);
        printf ("A média dos exercícios desse aluno foi: %.2f\n", me);
        printf ("A média de aproveitamento desse aluno foi: %.2f\n", ma);
        puts ("O conceito desse aluno eh: B\n");
        puts ("ALUNO APROVADO!!!!");
}

else if (6.0 <= ma < 7.5) {
        printf ("Aluno com registro acadêmico: %c\n", ra);
        printf ("A primeira nota desse aluno foi: %.2f\n", nota1);
        printf ("A segunda nota desse aluno foi: %.2f\n", nota2);
        printf ("A terceira nota desse aluno foi: %.2f\n", nota3);
        printf ("A média dos exercícios desse aluno foi: %.2f\n", me);
        printf ("A média de aproveitamento desse aluno foi: %.2f\n", ma);
        puts ("O conceito desse aluno eh: C\n");
        puts ("ALUNO APROVADO!!!!");
}

else if (4.0 <= ma < 6.0) {
        printf ("Aluno com registro acadêmico: %c\n", ra);
        printf ("A primeira nota desse aluno foi: %.2f\n", nota1);
        printf ("A segunda nota desse aluno foi: %.2f\n", nota2);
        printf ("A terceira nota desse aluno foi: %.2f\n", nota3);
        printf ("A média dos exercícios desse aluno foi: %.2f\n", me);
        printf ("A média de aproveitamento desse aluno foi: %.2f\n", ma);
        printf ("O conceito desse aluno e: D\n");
        printf ("ALUNO REPROVADO!!!!");
}

else if (ma < 4.0) {
        printf ("O aluno com registro acadêmico: %c\n", ra);
        printf ("A primeira nota desse aluno foi: %.2f\n", nota1);
        printf ("A segunda nota desse aluno foi: %.2f\n", nota2);
        printf ("A terceira nota desse aluno foi: %.2f\n", nota3);
        printf ("A média dos exercícios desse aluno foi: %.2f\n", me);
        printf ("A média de aproveitamento desse aluno foi: %.2f\n", ma);
        printf ("O conceito desse aluno e: E\n");
        printf ("ALUNO REPROVADO!!!!");
}


}
