#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int matrix[4][4] = {{2, 3, 4, 5}, {5, 6, 7, 8}, {8, 9, 0, 1}, {5, 7, 3, 5}};
	int i;
	int j;
	printf("programa que lee pares en una matrix 4x4 \n");
	for(i=0; i<4; i++){
		for(j=0;j<4;j++){
		
		printf("%d ", matrix[i][j]);
	}
	printf("\n");
	}
	printf("los numeros pares de esta matriz son: \n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
				if(matrix[i][j] %2==0){
			printf("%d\n", matrix[i][j]);
		}
		}
	}

	return 0;
}