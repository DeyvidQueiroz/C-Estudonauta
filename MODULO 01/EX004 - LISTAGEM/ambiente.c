#include <stdio.h>
#include <locale.h>

void main() {
setlocale(LC_ALL,"Portuguese");

char nome[20], nome2[20];
char sex[1], sex2[1];
float nota, nota2;





printf("<<< EX004 - Listagem >>>\n\n");
printf("Cadastrando a primeira pessoa:\n");
printf("------------------------------\n");
printf("nome: ");
fflush(stdin);
gets(nome);
printf("\nSEXO [M/F]: ");
fflush(stdin);
gets(sex);
printf("\nNOTA: ");
scanf("%f", &nota);



printf("\n\nCadastrando a segunda pessoa:\n");
printf("------------------------------\n");
printf("nome: ");
fflush(stdin);
gets(nome2);
printf("\nSEXO [M/F]: ");
fflush(stdin);
gets(sex2);
printf("\nNOTA: ");
scanf("%f", &nota2);


printf("Listagem Completa \n");
printf("-----------------------------------------\n");
printf("NOME                    SEXO    NOTA\n");
printf("%-30s %1s    %.1f\n", nome, sex, nota);
printf("%-30s %1s    %.1f", nome2, sex2, nota2);


}