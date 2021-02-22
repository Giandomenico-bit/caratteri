/*Si scriva un programma C contaparole.c che conti i
caratteri, le righe e le parole di un testo
fornito allo standard input. Si ipotizzi che
nel testo in ingresso non siano presenti
spazi multipli.

All'interno del codice sia presente la
tabella degli stati sotto forma di commento. */

#include <stdio.h>
#include <ctype.h>

int main( void ) {

  char c;

  unsigned int parole = 0;
  unsigned int caratteri = 0;
  unsigned int riga = 0;

   while( ( c = getchar() ) != EOF ) {
	   if( isspace( c ) ) {
	       if( c == '\n' ) riga++;
       	 else parole++;
     }
	   else caratteri++;
   }

   printf( "Parole totali : %u\n", parole + riga );
   printf( "Righe torali : %u\n", riga );
   printf( "Caratteri totali : %u\n", caratteri - 1 );

  return 0;
}
