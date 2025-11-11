#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int matrix [4][4]= {{2, 3, 4, 5}, {3, 4, 2, 4}, {3, 4, 2, 1},{5, 6, 7, 9}};
	int i, j, k;
	int suma=0;
	int contador=0;
	printf("programa que calcula el promedio de numeros impares de una matriz 4x4\n");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d ", matrix[i][j] );
		}
		printf("\n");
	}
	printf("los numeros impares de la matriz son: \n");
		for(i=0; i<4; i++){
		for(j=0; j<4; j++){
		    if(matrix[i][j] %2==1){
		    		printf("%d ", matrix[i][j] );
		    		suma+=matrix[i][j];
		    		contador++;
			}
		}
		printf("\n");
	}
	float prom=(float)suma/contador;
	printf("la cantidad de impares es: %d \n ", contador);
	printf("la suma de los impares es: %d \n", suma);
	printf("el promedio de la suma de impares es: %.2f \n", prom);
	return 0;
}