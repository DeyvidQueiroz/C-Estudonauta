#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

float v;

printf("<<< EX016 - Consumidor ganha desconto >>>");

printf("\n\nQual foi o valor total das compras? R$");
scanf("%f", &v);


printf("Você comprou R$%.2f na nossa loja. ", v);

if(v>500){

float des = v*80/1000;

printf("\n\n================== ATENÇÃO ==============");
printf("\nPor fazer mais de R$500 em compras, você vai receber R$%.2f de desconto", des);
printf("\nO valor a ser pago é R$%.2f! ", v-des);
}
printf("Volte sempre!");
printf("\n-------------------------------------------");


    return 0;
}