#include <stdio.h>

int main() {
  char opt;
  int n1, n2;
  float res;
  printf("Seleccione el operador(+,-,*,/\n");
  scanf("%c", &opt);
  printf(" \n Primer número: ");
  scanf(" %d", &n1);
  printf("Segundo número: ");
  scanf(" %d", &n2);

  switch (opt) {
    case '+':
      printf("Realizando suma...\n");
      res = n1 + n2;
      printf(" La suma es: %.2f", n1, n2, res);
      break;
    case '-':
      printf("Realizando resta...\n");
      res = n1 - n2;
      printf("La resta es: %.2f", n1, n2, res);
      break;
    case '*':
      printf("Realizando multiplicación...\n");
      res = n1 * n2;
      printf("La multiplicacion es: %.2f", n1, n2, res);
      break;
    case '/':
      printf("Realizando division...\n");
      if (n2 == 0) {
        printf(" \n La division no puede ser por 0 ");
        scanf("%d", &n2);
      }
      res = n1 / n2;
      printf("Division de %d y %d es: %.2f", n1, n2, res);
      break;
    default:
      printf("Error. Algún dato incorrecto.");
  }
  return 0;
}