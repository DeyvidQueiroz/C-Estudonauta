#include <stdio.h>
#include <locale.h>

void main() {
setlocale(LC_ALL, "Portuguese");

char nome[30];
int ida;
float kg;

printf("<<< EX003 - DADOS >>>\n\n");
printf("Qual é seu nome?\n");
fflush(stdin);
gets(nome);
printf("Quantos anos você tem\n");
scanf("%d", &ida);
printf("Qual é o seu peso? (Kg)\n\n");
scanf("%f", &kg);

printf("-------<<< PROCESSANDO >>>-------\n\n");
printf("Muito prazer, %s. Você tem %d anos e pesa %.2f kg correto?", nome, ida, kg);

}