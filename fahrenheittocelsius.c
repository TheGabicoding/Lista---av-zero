//CONVERSOR TEMPERATURAS
#include <stdio.h>

int main(void) {
double temp, c, f;
char escala;
    printf("Escolha temperatura e escala ex: 30 c");
    scanf("%lf %c", &temp, &escala);

    if (escala == 'c' || escala == 'C'){
        f = (temp * 9.0/5.0) + 32;
        printf("%.2lf C é igual a %2.lf F\n",temp, f);
    }


    else if (escala == 'f' || escala == 'F'){
        c = 5.0/9.0 * (temp - 32);
        printf("%.2lf F É igual a %.2lf C\n", temp, c);
    }
    
  else {
    printf("Entrada inválida.\n");
  }
  return 0;
}
