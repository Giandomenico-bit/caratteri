#include <stdio.h>

int main( void ) {

  char ch;
  int spazi = 0;

  printf( "Inserisci testo : " );
  while( (ch = getchar()) != '\n' ) {

    // conteggio spazi
    if( ch == ' ' ) {
      spazi = spazi + 1;
      continue;
    }
    // non esistono spaziature
    if( spazi == 0 ) {
      putchar( ch );
    }
    // esiste una sola spaziatura
    else if( spazi == 1 ) {
      putchar( ' ' );
      putchar( ch );
    }
    // esistono spaziature consecutive
    else {
      putchar( ' ' );
      putchar( ch );
      spazi = 0;
    }
  }

  puts( "" );

  return 0;
}
