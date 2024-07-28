#include <stdio.h>
#include <locale.h>


int main(){
setlocale(LC_ALL, "Portuguese");
printf("<<< - Ordem em dois Números >>>");
printf("\nMe diga Dois números e eu colocarei \nos dois em ordem crescente.");

float num1, num2;

printf("\n\nPrimeiro numero: ");
fflush(stdin);
scanf("%f", &num1);
printf("\nSegundo número: ");
fflush(stdin);
scanf("%f", &num2);

if(num1>num2){printf("Os numeros em ordem são %.0f e %.0f", num2, num1);}
else if(num1<num2){printf("Os numeros em ordem são %.0f e %.0f", num1, num2);}
else if(num1==num2){printf("Os dois numeros sao iguais");}

return 0;
}