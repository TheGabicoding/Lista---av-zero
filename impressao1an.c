//atividade Impressão de Números de 1 a N
#include <stdio.h>
int i;
int n;

int main(void) { 
printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
  
    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
