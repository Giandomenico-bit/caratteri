#include <stdio.h>
#include <ctype.h>

int main( void ) {

  char ch;

  while( ( ch = getchar() ) != EOF ) {
      if( issapce( ch ) )
          putchar( '\n' );
      else
          putchar( ch );
  }

  return 0;
}
