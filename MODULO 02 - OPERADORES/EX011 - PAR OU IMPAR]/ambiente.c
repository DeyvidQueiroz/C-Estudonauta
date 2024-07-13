#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "Portuguese");

int nu;

printf("<<< EX011 - PAR OU IMPAR >>>\n");
printf("Digite um numero: ");
scanf("%d", &nu);

printf("Seu nume é %s", (nu%2)?"IMPAR":"PAR");

}