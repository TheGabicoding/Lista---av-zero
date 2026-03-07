//CONTA STRINGS
#include <stdio.h>

int main(void) {
    char texto[100];
    int i = 0;
    int contador = 0;

    printf("Digite algo: ");
    fgets(texto, sizeof(texto), stdin);

    while (texto[i] != '\0' && texto[i] != '\n') {
        contador++;
        i++;
    }

    printf("A frase possui %d caracteres (incluindo espacos).\n", contador);

    return 0;
}
