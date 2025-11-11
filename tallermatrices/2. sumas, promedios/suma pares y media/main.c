#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int matrix[4][4] = {{1,3,849384934,5}, {5,1,1,9}, {3,5,9,651}, {1,5,3,2}};
	int suma=0;
	int contador=0;
	int i, j;
	float promedio;
	printf("programa que halla el promedio de pares en una matriz 4x4 \n");
	for(i=0; i<4;i++){
		for(j=0; j<4; j++){
			printf("%d ", matrix[i][j]);
			
		}
		printf("\n");
	}
	printf("los numeros pares de la matriz son: \n");
		for(i=0; i<4;i++){
		for(j=0; j<4; j++){
		if(matrix[i][j] %2==0){
			printf("%d \n", matrix[i][j]);
			suma += matrix[i][j];
			contador++;
		}
			
		}
	}
	printf("la cantidad de numeros pares es: %d \n", contador);
	printf("la suma de los pares es: %d \n", suma);
	if(contador!=0){
		printf("el promedio de la suma de los pares es: %.2f \n",  promedio=(float)suma/contador);
	     if(contador=0){
			printf("no se puede dividir entre 0");
		}
	}
	return 0;
	}
	