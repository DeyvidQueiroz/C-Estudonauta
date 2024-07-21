#include <stdio.h>
#include <locale.h>
#include <time.h>

int main (){
setlocale(LC_ALL, "Portuguese");
time_t t;
time(&t);
struct tm * data;
data = localtime(&t);
int y = data->tm_year + 1900;
int a;

printf("Em que ano você nasceu? ");
scanf("%i", &a);
fflush(stdin);

int ida = y - a;

printf("------------------------------------------\n");
printf("Voce tem %i anos, certo?\n", ida);
printf("Seja bem vindo(a) ao Banco Estudonauta.\n");

if(ida>=65){
printf("=== ATENÇÃO! DIRIJA-SE ÁRA FILA PREFERENCIAL ===\n");
}
printf("--------------------------------------------");

return 0;
}