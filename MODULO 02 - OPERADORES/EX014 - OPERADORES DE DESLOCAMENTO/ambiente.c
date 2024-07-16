#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "Portuguese");
int n1, n2;

printf("<<< EX014 - Operadores de Deslocamento >>>");
printf("\n\nDigite um numero: ");
scanf("%d", &n1);
printf("Digite o deslocamento: ");
scanf("%d", &n2);

printf("-----PERAÇOES SHIFT-----");
printf("\nCalculando %d << %d é igual a %d", n1, n2, n1<<n2 );
printf("\nCalculando %d >> %d é igual a %d", n1, n2, n1>>n2 );

}