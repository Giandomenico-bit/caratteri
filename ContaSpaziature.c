#include <stdio.h>

int main( void ) {

  char ch;
  int count = 0;

  while( ( ch = getchar()) != EOF ) {
    if( ch == '\t' || ch == ' ' || ch == '\n' ) {
      count = count + 1;
    }
  }
  puts( "" );
  printf( "Numero caratteri contati : %d\n", count );

  return 0;
}
