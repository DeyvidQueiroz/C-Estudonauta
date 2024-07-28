#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

printf("<<<EX023 - Positivo ou Negativo >>>\n\n");

float number;

printf("Me diga um numero e eu te direi sse ele é POSITIVO, NEGATIVO ou NULO.\n\n");
printf("Digite um numero: ");
fflush(stdin);
scanf("%f", &number);

if(number>0){
printf("O valor %.0f é POSITIVO", number);
}else if(number<0){
printf("O valor %.0f é NEGATIVO", number);
}else if(number==0){
printf("O valor %.0f é NULO", number);
}


return 0;
}