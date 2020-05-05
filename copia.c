/*Facendo uso della redirezione dell'input e dell'output,
utilizzare il programma eco visto negli esempi
per copiare file di caratteri.*/

#include <stdio.h>

int main( void ){

	char c;

	while( (c = getchar()) != '\n' && c != EOF ) {
		printf( "%c", c );
	}
	puts( "" );

	return 0;
}
