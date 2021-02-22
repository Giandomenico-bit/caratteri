/* Si scriva un programma C contacifre.c che conti i
caratteri di spaziatura totali,
le cifre (separatamente) e il totale degli altri
caratteri forniti allo standard input. */

#include <stdio.h>
#include <ctype.h>

int main( void ) {

  char c;
  unsigned int contaCifre, contaCaratteri, contaSpazi;

  contaCifre = 0;
  contaSpazi = 0;
  contaCaratteri = 0;

  printf( "Inserisci caratteri : " );

  while( ( c = getchar() ) != '\n' ) {

      if( isdigit( c ) )
          contaCifre++;
      else if( c == ' ' )
          contaSpazi++;
      else
          contaCaratteri++;
          
  }

  printf( "\nNumero spazi : %u\n", contaSpazi );
  printf( "Numero cifre : %u\n", contaCifre );
  printf( "Numero caratteri rimanenti : %u\n", contaCaratteri );

  return 0;
}
