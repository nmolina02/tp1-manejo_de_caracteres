/* Alumno: Nicolas Ariel Chavero Molina
Curso: SSL - K2002 */

#include <stdio.h>
#include <ctype.h>

int main() {
   int caracter;
   printf("Ingrese la palabra: ");

   while (EOF != (caracter=getchar())){
      if (isupper(caracter)){
         caracter = tolower(caracter);
         goto salida;
      }
      if (islower(caracter)){
         caracter = toupper(caracter);
      }
      if (isdigit(caracter)){
         caracter = '\0';
      }
      salida:
      putchar (caracter);
   }

   return 0;
}