#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// TODO args con monto semanal
int main(int argc, char **argv) {
  int presupuesto;
  char input;
  int monto_total = 1000;
  // printf("Mi presupuesto semanal es: ");
  // scanf("%d", &presupuesto);
  do {
    char nombre_producto = '\0';
    int monto_ingresado;

    // TODO: Fix segundo scanf
    printf("Ingrese el nombre del producto comprado: ");
    scanf("%c", &nombre_producto);

    printf("Ingrese el monto del producto comprado: ");
    scanf("%d", &monto_ingresado);

    if (input == 0 || nombre_producto == '0') {
      break;
    }
    monto_total = monto_total + monto_ingresado;
    // TODO: quitarDeLaLista(nombre_producto);

  } while (1);
}
