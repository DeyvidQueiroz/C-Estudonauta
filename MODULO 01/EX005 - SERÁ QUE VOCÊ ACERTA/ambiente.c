#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
setlocale(LC_ALL, "Portuguese");
srand(time(NULL));

int n = rand() %5 + 1;
int p;

printf("<<< EX005 - Será que você acerta?\n\n >>>");
printf("Vou pensar em um número entre 1 e 5. tente adivinhar!\n");
printf("Qual é o seu palpite?");
scanf("%d", &p);
printf("\nEu pensei no número %d e você pensou no %d", n, p);
}
