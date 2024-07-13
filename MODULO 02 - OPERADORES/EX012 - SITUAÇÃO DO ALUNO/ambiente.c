#include <stdio.h>
#include <locale.h>

void main(){

float n1, n2;

printf("<<< EX012 - SITUAÇÃO DO ALUNO >>>\n");
printf("Primeira nota: ");
scanf("%f", &n1);
printf("Segunda nota: ");
scanf("%f", &n2);
fflush(stdin);

float res = (n1+n2)/2;

printf("A media do aluno foi %.1f", res);
printf("\nsua situação é %s", (res>6)?"APROVADO":"REPROVADO");

}