/* Si scriva un programma C contalinee.c
che conti quante linee sono fornite allo standard input. */

#include <stdio.h>

int main( void ) {

  char c;
  unsigned int count = 0;

  while( ( c = getchar() ) != EOF ) {
    if( c == '\n' ) count = count + 1;
  }
  printf( "Numero linee : %u\n", count );

  return 0;
}
