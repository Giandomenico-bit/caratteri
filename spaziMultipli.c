/* Si scriva un programma C spazimultipli.c che elimini gli spazi
multipli da un testo dato in input. Si ignorino le tabulazioni
e i newline e si ipotizzi che la sequenza di caratteri
non inizi con spazio.

All'interno del codice sia presente la tabella degli
stati sotto forma di commento. */

#include <stdio.h>

int main( void ) {

  char c;
  unsigned int spazio = 0;

  printf( "%s", "Inserisci testo : " );
  while( ( c = getchar() ) != '\n' ) {

    if( c == ' ' )
        spazio = 1;
    else {
        if( spazio == 1 ) putchar( ' ' );
        putchar( c );
        spazio = 0;
    }
  }

  putchar( '\n' );

  return 0;
}
