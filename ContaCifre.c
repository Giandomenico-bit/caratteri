#include <stdio.h>

int main( void ) {

  char ch;
  int countDigit = 0;
  int countChar = 0;
  int coutSpace = 0;
  char cifre[ 10 ] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

  printf( "Inserisci caratteri : " );

  while( (ch = getchar()) != EOF ) {
    countChar = countChar + 1;
    for( int indice = 0; indice < 10; indice++ ) {
        if( ch == cifre[ indice ] ) countDigit = countDigit + 1;
    }
    if( ch == ' ' ) coutSpace = coutSpace + 1;
  }
  puts( "" );

  printf( "Numero spazi : %d\n", coutSpace );
  printf( "Numero cifre : %d\n", countDigit );
  printf( "Numero caratteri rimanenti : %d\n", countChar - coutSpace - countDigit );

  return 0;
}
