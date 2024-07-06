#include <stdio.h>

void main() {
  int n;
float m;
char r;
char e;
char nome[30];

printf("Digite um numero inteiro\n");
scanf("%d", &n);
printf("Digite um numero REAL\n");
scanf("%f", &m);
printf("Voce digito os numeros %d, %.1f. Obrigado!", n, m);

printf("\nDigite uma letra:\n");
fflush(stdin);
scanf("%c", &r);

printf("\nDigite uma letra\n");
fflush(stdin);
e = getchar();

printf("\nas letras foram \"%c\", \"%c\"\n", r, e);

printf("\nDigite seu nome:\n");
fflush(stdin);
gets(nome);

printf("Teu nome e \"%s\"", nome);


}