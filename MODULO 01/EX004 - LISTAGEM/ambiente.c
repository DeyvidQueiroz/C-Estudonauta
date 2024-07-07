#include <stdio.h>
#include <locale.h>

void main() {
setlocale(LC_ALL,"Portuguese");

char nome[20], nome2[20], nome3[20];
char sex, sex2, sex3;
float nota, nota2, nota3;





printf("<<< EX004 - Listagem >>>\n\n");
printf("Cadastrando a primeira pessoa:\n");
printf("------------------------------\n");
fflush(stdin);
printf("nome: ");
gets(nome);
printf("SEXO [M/F]: ");
sex = getchar();
printf("NOTA: ");
scanf("%f", &nota);



printf("\n\nCadastrando a segunda pessoa:\n");
printf("------------------------------\n");
fflush(stdin);
printf("nome: ");
gets(nome2);
printf("SEXO [M/F]: ");
sex2 = getchar();
printf("NOTA: ");
scanf("%f", &nota2);


printf("\n\nCadastrando a terceira pessoa:\n");
printf("------------------------------\n");
fflush(stdin);
printf("nome: ");
gets(nome3);
printf("\nSEXO [M/F]: ");
sex3 = getchar();
printf("NOTA: ");
scanf("%f", &nota3);


printf("Listagem Completa \n");
printf("-----------------------------------------\n");
printf("NOME \t\t\tSEXO \tNOTA\n");
printf("%-20s \t%c \t%.1f\n", nome, sex, nota);
printf("%-20s \t%c \t%.1f\n", nome2, sex2, nota2);
printf("%-20s \t%c \t%.1f\n", nome3, sex3, nota3);
printf("-----------------------------------------");


}