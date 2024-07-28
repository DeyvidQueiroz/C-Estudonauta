#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
setlocale(LC_ALL, "Portuguese");
time_t t;
time(&t);
struct tm*data;
data = localtime(&t);
int h = data->tm_hour;
int ho = 18;
int d = 20;

printf("===============CINEMA ESTUDONALTA================\n");
printf("HORARIO DO FILMA: %ih - PREÇO DO INGRESSO: R$%i,00\n", ho, d);
printf("-----------------------------------------------------\n");
printf("HORA ATUAL: %dh", h);

float din;

printf("\n\nQuanto dinheiro voce tem? R$");
scanf("%f",&din);

if(din>19 && h<ho){
printf("Voce consegue comprer o ingresso. seja bem vindo(a)!");

}else{
printf("Infelizmente nao e possivel comprar o ingresso! Volte outro dia!");

}


    return 0;
}