#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(int argc, char *argv[]) {
	int numero [N];
	int elegido;
	for(int i=0; i<N;i++){
		printf("digite una serie de numeros entre (0-9): ");
		scanf("%d", &numero[i]);
		if(numero[i]==10){
			return 0;
		}
		else if (numero[i] < 0 || numero[i]>9){
			printf("numero fuera de rango, digite de nuevo entre (0-9): ");
			scanf("%d", &numero[i]);
			if (numero[i]==10) return 0;
		}
		
	}
	printf("escribe la posicion que desea mirar entre (0-9): ");
	scanf("%d", &elegido);
	
	printf("el numero en la posicion %d es %d\n", elegido, numero[elegido]);
	return 0;
}