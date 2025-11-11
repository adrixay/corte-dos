#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("programa que suma y promedia las posiciones pares de una matriz \n");
	
	int matrix[4][4]={{2,3,5,6}, {2,3,4,5}, {3,4,5,6}, {9,8,7,5}};
	int contador=0;
	int i, j;
	int suma=0;
	float prom;
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
    printf("las posiciones pares de la matriz son: \n");
    for(i=0; i<4; i++){
		for(j=0; j<4; j++){
		if(i,j %2==1){
			suma+=matrix[i][j];
				contador++;
				printf("%d ", matrix[i][j]);
		}
		}
		printf("\n");
	}
	printf("el numero de posiciones pares que hay es: %d \n", contador);
	printf("la suma de los numeros de estas posiciones es: %d \n", suma);
	printf("el promedio de estos valores es: %.2f \n", prom=(float)suma/contador);
	
	return 0;
}