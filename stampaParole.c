/* Si scriva un programma C stampaparole.c che
stampi, una per riga, le parole di un testo
fornito allo standard input. Si ipotizzi che
nel testo in ingresso non siano presenti spazi multipli.

All'interno del codice sia presente la tabella
degli stati sotto forma di commento. */

#include <stdio.h>
#include <ctype.h>

int main( void ) {

  char c;

  while( ( c = getchar() ) != EOF ) {
      if( issapce( c ) )
          putchar( '\n' );
      else
          putchar( c );
  }

  return 0;
}
