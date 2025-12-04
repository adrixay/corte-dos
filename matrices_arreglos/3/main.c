#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char greetings[] = {'H', 'A', 'B', 'L', 'A', 'L', 'O', ' ', 'C', 'A', 'B', 'E', 'Z', 'O', 'N', '\0'};
	char greettings2[] = "HABLALO CABEZON";
	printf("%zu\n", sizeof(greetings));
	printf ("%zu\n", sizeof(greettings2));
	
	
	return 0;
}