/*Facendo uso della redirezione dell'input e dell'output,
utilizzare il programma eco visto negli esempi
per copiare file di caratteri.*/

#include <stdio.h>

int main( void ){

  char c;

  while( ( c = getchar() ) != EOF )
       putchar( c );
  putchar( '\n' );

  return 0;
}
