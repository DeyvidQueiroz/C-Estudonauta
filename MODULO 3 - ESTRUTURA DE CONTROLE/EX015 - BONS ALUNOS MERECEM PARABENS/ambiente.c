#include <stdio.h>
#include <locale.h>

int main (){
setlocale(LC_ALL, "Portuguese");

float p, s;


printf("<<< EX015 - Bons alunos merecem parabens >>>");
printf("\n\nDigite a primeira nota: ");
scanf("%f", &p);
printf("digite a segunda nota: ");
scanf("%f", &s);
fflush(stdin);

float m =(p+s)/2;

printf("-------------------------\n");
if(m>=7){
printf("MEUS PARABÉNS!!!! ");
}
printf("Sua média foi %.1f", m);
printf("\n-------------------------");


return 0;
}