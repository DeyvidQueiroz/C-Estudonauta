#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\n\n<<< EX021 - Inverso ou Oposto >>>\n\n");

    float num, res;

    printf("Digite um numero (positivo ou negativo): ");
    fflush(stdin);
    scanf("%f", &num);

    if(num>0){
        res = 1/num;
        printf("O inverso de %.0f é ingual a %.4f.\n", num, res);

    }else{
        res = num *(-1);
        printf("O oposto de %.0f é ingual a %.0f.\n", num, res);


    }

    return 0;
}