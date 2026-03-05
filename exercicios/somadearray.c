//Soma de Números em um Array
#include <stdio.h>

int main(void) {
    int numeros[5];
    int i, soma = 0;
        for (i = 0; i < 5; i++) {
        
            printf("Digite o %d número: ", i + 1);
            scanf("%d", &numeros[i]);
        }
        for (i = 0; i < 5; i++) {
            soma += numeros[i];
        }
    
    printf("A soma dos números é: %d\n", soma);
  return 0;
}
