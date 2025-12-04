#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int matrix[2][3] = { {1, 4, 5}, {3, 5, 7} };
	int i, j;
	for (i=0; i<2; i++){
		for (j=0; j<3; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}