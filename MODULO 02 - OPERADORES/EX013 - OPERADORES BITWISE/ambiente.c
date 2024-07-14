#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "Portuguese");

int n1;
int n2;

printf("<<< EX013 - Operadores Bitwise >>>");
printf("\n\nDigite o primeiro valor: ");
scanf("%d", &n1);
printf("Digite o segundo valor: ");
scanf("%d", &n2);
printf("\n------OPERAÇÕES BITWISE------\n");
printf("Calculando %d & %d é igual a %d", n1, n2, n1&n2);
printf("\nCalculando %d | %d é igual a %d", n1, n2, n1|n2);
printf("\nCalculando %d ^ %d é igual a %d", n1, n2, n1^n2);




}