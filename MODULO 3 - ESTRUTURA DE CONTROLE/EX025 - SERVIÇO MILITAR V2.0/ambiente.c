#include <stdio.h>
#include <locale>
#include <time.h>


int main() {
setlocale(LC_ALL, "Portuguese");
time_t t;
time(&t);
struct tm * data;
data = localtime(&t);

int y = data->tm_year + 1900;
int ano;

printf("<<< EX025 -Serviço Militar V2.0 >>>\n\n");
printf("Atualmente estamos no ano %i", y);
printf("\nEm que ano você nasceu? ");
scanf("%i", &ano);

printf("\n\n---------------------------\n\n");
int ida = y-ano;
printf("Sua idade atual é %i", ida);

if(ida > 18)
{
int idd = ida - 18;
int yy = ano + 18;

    printf("\nSeu alistamento foi em %i. Já se passaram %i anos ", yy, idd );
}
else if(ida < 18){
int idd2 = 18 - ida;
int yy2 = y + idd2;

  printf("\nSeu alistamento sera em %i. Ainda faltam %i ano(s).", yy2, idd2);
}else if(ida==18){
printf("Voce completa %i anos exatamente em %i. Va se alistar", ano, ida);
}
printf("\n---------------------------------");




return 0;
}