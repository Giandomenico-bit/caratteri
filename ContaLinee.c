#include <stdio.h>

int main( void ) {

  char ch;
  int count = 0;

  while( (ch = getchar()) != EOF ) {
    if( ch == '\n' ) {
      count = count + 1;
    }
  }
  printf( "Il numero delle linee è %d\n", count );

  return 0;
}
