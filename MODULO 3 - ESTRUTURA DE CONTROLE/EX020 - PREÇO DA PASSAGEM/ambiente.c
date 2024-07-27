#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

printf("\n\n<<< EX020 - Preço da passagem >>>\n\n");
printf("======== TABELA DE PREÇOS ========");
printf("\nViagens até 200KM    R$0,50/km");
printf("\nA parti de 200KM      R$0,35/km ");
printf("\n---------------------------------\n\n");

int dis;

printf("Distancia total da viagem, em KM: ");
scanf("%d", &dis);

if(dis > 200){
printf("Uma viagem de %dKM vai custar R$0,35KM\n", dis);
printf("Valor TOTAL: R$%.2f", dis*0.35);
}else{
printf("Uma viagem de %dKM vai custar R$0,50KM\n", dis);
printf("Valor TOTAL: R$%.2f", dis*0.50);

}

return 0;
}