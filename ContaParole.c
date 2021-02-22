#include <stdio.h>
#include <ctype.h>

int main( void ) {

  char ch;

  unsigned int parole = 0;
  unsigned int caratteri = 0;
  unsigned int riga = 0;

  FILE* fpunt = fopen( "file.txt", "r" );
  if( fpunt == NULL ) {
      fprintf( stderr, "Errore!" );
      return 1;
   }

   while( ( ch = fgetc( fpunt ) ) != EOF ) {
	   // se isspace e' vero 
	   // ch = '\n' oppure ch = ' ' oppure
	   // ch = '\f' oppure ch = '\r' oppure
	   // ch = '\t' oppure ch = '\v'
	   if( isspace( ch ) ) {
	       if( ch == ' ' )
                   parole++;
       	       else
		   riga++;
           }
	   else
	       caratteri++;
   }

   printf( "Parole totali : %u\n", parole + 1 );
   printf( "Righe torali : %u\n", riga );
   printf( "Caratteri totali : %u\n", caratteri - 1 );

  return 0;
}
