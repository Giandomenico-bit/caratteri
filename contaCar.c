#include <stdio.h>

int main( void ) {

  char c;
  unsigned int count = 0;

  printf( "%s", "Inserisci caratteri : " );

  while( ( c = getchar() ) != '\n' )
      count = count + 1;
  printf( "Numero caratteri inseriti : %u\n", count );

  return 0;
}
