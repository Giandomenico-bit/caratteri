#include <stdio.h>

int main( void ) {

  char ch;
  int count = 0;

  printf( "Inserisci caratteri : " );
  
  while( (ch = getchar()) != '\n' ) {
    count = count + 1;
  }
  printf( "Numero caratteri inseriti : %d\n", count );

  return 0;
}
