#include <stdio.h>
#include <locale>

int main () {

setlocale(LC_ALL, "Portuguese");

int n;

printf("<<< PAR OU IMPAR >>>");
printf("\n\nDigite um numero: ");
scanf("%i", &n);

if(n%2==0){
printf("\n>>> O Numero %i é PAR <<<", n);
}else{
    printf("\n>>> O Numero %i é IMPAR <<<", n);
}

return 0;
}