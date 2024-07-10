#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "Portuguese");
printf("<<< EX006 - ANTECESSOR E SUCESSOR >>>\n\n");

int n;


printf("Digite um numero:");
scanf("%d", &n);

int a = n - 1;
int s = n + 1;

printf("\nAnalisando o numero %d, seu antecessor é %d e seu sucessor é %d", n, a, s);
}


