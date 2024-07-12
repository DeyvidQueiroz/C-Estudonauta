#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "Portuguese");
printf("<<< EX009 - preço do produto >>>");

char pro[30];
float vl;
int por;

printf("\n\nproduto: ");
scanf("%s", &pro);
printf("Valor: ");
scanf("%f", &vl);
printf("Desconto: (%%)");
scanf("%d", &por);

float des = vl - (vl * 10/1000);

printf("O produto %s custava R$%.2f. Mas com  %d%% de desconto passa a custar R$%.2f ", pro, vl, por, des);


}