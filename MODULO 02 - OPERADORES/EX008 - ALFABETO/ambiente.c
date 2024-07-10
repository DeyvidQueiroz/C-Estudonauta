#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"Portuguese");

char letr;

printf("Digite uma letra: ");
scanf("%c", &letr);

char an = letr - 1;
char dp = letr + 1;

printf("Antes da letra %c temos a letra %c. Depois temos a letra %c", letr, an, dp);
}