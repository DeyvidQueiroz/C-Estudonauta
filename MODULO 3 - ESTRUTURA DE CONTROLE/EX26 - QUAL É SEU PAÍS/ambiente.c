#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char country[3]; // Ajustado o tamanho para armazenar "br", "pt" e o terminador nulo

    printf("<<< EX026 - Qual é seu país >>>\n");
    printf("\nEm que país você nasceu? ");
    fgets(country, sizeof(country), stdin);

    // Remover o newline ('\n') lido pelo fgets, se presente
    country[strcspn(country, "\n")] = '\0';

    if (strcmp(country, "br") == 0) {
        printf("Nascido em %s você é Brasileiro", country);
    } else if (strcmp(country, "pt") == 0) {
        printf("Nascido em %s você é Português", country);
    } else {
        printf("País não reconhecido.");
    }

    return 0;
}
