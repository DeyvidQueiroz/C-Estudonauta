#include <stdio.h>
#include <locale.h>


int main(){
setlocale(LC_ALL, "Portuguese");

int ano;

printf("\n<<< EX019 - Ano Bissexto >>>\n\n");
printf("Digite um ano qualquer: ");
scanf("%d", &ano);
fflush(stdin);

int bi = ano % 4;

if(bi == 0){
printf("Esse ano e Bissexto");
}else{
printf("Esse ano não é Bissexto");
}


    return 0;
}