//PRIMO
#include <stdio.h>

int main(void) {
    int n, i;
    int divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d nao e primo.\n", n);
    } 
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                divisores++;
                break;
            }
        }

        if (divisores == 0) {
            printf("%d e um numero primo.\n", n);
        } else {
            printf("%d nao e primo.\n", n);
        }
    }

    return 0;
}
