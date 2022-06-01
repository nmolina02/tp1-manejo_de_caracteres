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
         putchar (caracter);
      }
      else if (islower(caracter)){
         caracter = toupper(caracter);
         putchar (caracter);
      }
      else if (isdigit(caracter)){
         caracter;
      }
      else {
         putchar (caracter);
      }
   }

   return 0;
}