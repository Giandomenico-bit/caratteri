#include <stdio.h>
#include <ctype.h>

int main( void ) {

  char c;
  unsigned int count = 0;

  while( ( c = getchar() ) != EOF ) {
    if( isspace( c ) ) count = count + 1;
  }
  printf( "Numero caratteri contati : %d\n", count );

  return 0;
}
