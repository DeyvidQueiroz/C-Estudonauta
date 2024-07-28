#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("<<< EX027 - Tres valores em ordem >>>\n");
    printf("Me diga tres numeros e eu colocarei \neles em ordem para voce.\n\n");

    float n1, n2, n3;

    printf("Primeiro numero: ");
    scanf("%f", &n1);
    while(getchar() != '\n'); // Limpa o buffer de entrada

    printf("Segundo numero: ");
    scanf("%f", &n2);
    while(getchar() != '\n'); // Limpa o buffer de entrada

    printf("Terceiro numero: ");
    scanf("%f", &n3);
    while(getchar() != '\n'); // Limpa o buffer de entrada

    printf("-----------------------------\n");
    if (n1 >= n2 && n2 >= n3) {
        printf("MAIOR %.0f \nINTERMEDIARIO %.0f \nMENOR %.0f\n", n1, n2, n3);
    } else if (n1 >= n3 && n3 >= n2) {
        printf("MAIOR %.0f \nINTERMEDIARIO %.0f \nMENOR %.0f\n", n1, n3, n2);
    } else if (n2 >= n1 && n1 >= n3) {
        printf("MAIOR %.0f \nINTERMEDIARIO %.0f \nMENOR %.0f\n", n2, n1, n3);
    } else if (n2 >= n3 && n3 >= n1) {
        printf("MAIOR %.0f \nINTERMEDIARIO %.0f \nMENOR %.0f\n", n2, n3, n1);
    } else if (n3 >= n1 && n1 >= n2) {
        printf("MAIOR %.0f \nINTERMEDIARIO %.0f \nMENOR %.0f\n", n3, n1, n2);
    } else {
        printf("MAIOR %.0f \nINTERMEDIARIO %.0f \nMENOR %.0f\n", n3, n2, n1);
    }

    return 0;
}
