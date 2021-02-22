#include <stdio.h>

int main( void ) {

  char c;
  unsigned int count = 0;

  printf( "%s", "Inserisci caratteri : " );

  while( ( c = getchar() ) != '\n' ) {

          if( c == 'a' ) count++;
     else if( c == 'e' ) count++;
     else if( c == 'i' ) count++;
     else if( c == 'o' ) count++;
     else if( c == 'u' ) count++;
  }

  printf( "Vocali contate : %d\n", count );
  
  return 0;
}
