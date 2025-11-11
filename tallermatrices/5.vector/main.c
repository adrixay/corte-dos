#include <stdio.h>
#include <stdlib.h>

int main() {
    
    printf("Programa que calcula el maximo de cada fila y lo almacena en un vector\n\n");
    
    int matriz[4][4] = {{15, 23, 8, 41}, {67, 32, 19, 5}, {91, 12, 57, 3}, {24, 38, 46, 10}};
    
    int i, j;
    int vector_maximos[4];
    
    // Mostrar matriz
    printf("Matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < 4; i++) {
        vector_maximos[i] = matriz[i][0];
        
        printf("Fila %d: %d", i + 1, matriz[i][0]);
        
        for(j = 1; j < 4; j++) {
            printf(", %d", matriz[i][j]);
            if(matriz[i][j] > vector_maximos[i]) {
                vector_maximos[i] = matriz[i][j];
            }
        }
        
        printf(" Maximo = %d\n", vector_maximos[i]);
    }
    for(i = 0; i < 4; i++) {
        printf("vector_maximos[%d] = %d\n", i, vector_maximos[i]);
    }
    
    return 0;
}