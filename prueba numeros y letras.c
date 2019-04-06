#include <stdio.h>

int main(void) {
 int x=0;
 
 while (1) {
  printf("Ingrese un numero: ");
  if (scanf("%i", &x) != 1) {
   printf("Error! No es un numero!\n");
   /* Limpia el buffer del stdin (Evita el ciclo infinito) */
   while (getchar() != '\n');
  }
  else {
   printf("Numero ingresado: %i\n", x);
  }
 }
 
 return 0;
}
