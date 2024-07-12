#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "Portuguese");

printf("<<< EX007 - Dobro e Terça Parte >>>");

int n;

printf("Digite um numero: ");
scanf("%d", &n);

int d = n * 2;
float t = (float)n / 3;


printf("Analisando o número %d, seu dobro é %d e sua terça parte é %.2f", n, d, t);

}