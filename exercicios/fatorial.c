//FATORIAL
#include <stdio.h>

int main(void) {
  int n, i;
  int fatorial = 1;

  printf("Digite um numero inteiro não negativo: ");
  scanf("%d", &n);

  if (n < 0){
    printf("Número inválido!");
  }
  else {
    for (i = 1; i <= n; i++) {
      fatorial = fatorial * i;
    }
    printf("O fatorial de %d é %d", n, fatorial);
  }

  return 0;
}
