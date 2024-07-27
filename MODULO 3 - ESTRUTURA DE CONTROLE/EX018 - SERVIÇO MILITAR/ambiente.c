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

printf("<<< EX018 -Serviço Militar >>>\n\n");
printf("Atualmente estamos no ano %i", y);
printf("\nEm que ano você nasceu? ");
scanf("%i", &ano);

printf("\n\n---------------------------\n\n");
int ida = y-ano;
printf("Sua idade atual é %i", ida);

if(ida > 17)
{

    printf("\nJa fez 18 anos. Espero sinceramente que tenha se alistado ");
}
else{
  printf("\nVocê ainda nâo tem 18 anos. Não pode se alistar");
}




return 0;
}