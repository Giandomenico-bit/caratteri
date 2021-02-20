#include <stdio.h>

int main( void ) {

  char ch;

  while( ( ch = getchar() ) != EOF ) {
      if( ch == ' ' )
          putchar( '\n' );
      else
          putchar( ch );
  }

  return 0;
}
