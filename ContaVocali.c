#include <stdio.h>

int main( void ) {

  char vocali[ 10 ] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
  char ch;
  int count = 0;

  printf( "Inserisci vocali : " );
  while( (ch = getchar()) != '\n' ) {

    for( int indice = 0; indice < 10; indice++ )
      if( ch == vocali [ indice ] ) count = count + 1;
  }

  printf( "Vocali contate : %d\n", count );

  return 0;
}
