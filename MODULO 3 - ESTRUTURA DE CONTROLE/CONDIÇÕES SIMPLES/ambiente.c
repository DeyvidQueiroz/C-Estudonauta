#include <stdio.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "Portuguese");

float vel;

printf("veloidade que esta o veiculo: ");
fflush(stdin);
scanf("%f", &vel);


if(vel>80){
printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
printf("\n\nVocê utrapassou a velocidade permitida\n\n.");
printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
}

return 0;
}