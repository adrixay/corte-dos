#include <stdio.h>
#include <stdlib.h>

int main() {
    
    printf("Programa que suma filas y columnas de una matriz\n\n");
    
    int matriz[4][4] = {{15, 23, 8, 41}, {67, 32, 19, 5}, {91, 12, 57, 3}, {24, 38, 46, 10}};
    
    int i, j;
    int suma_fila[4] = {0};   
    int suma_columna[4] = {0}; 

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            suma_fila[i] += matriz[i][j];   
            suma_columna[j] += matriz[i][j]; 
        }
    }
    
    printf("\nSumas de filas:\n");
    for(i = 0; i < 4; i++) {
        printf("Suma fila %d: %d\n", i + 1, suma_fila[i]);
    }
    
    printf("sumas de columnas:\n");
    for(j = 0; j < 4; j++) {
        printf("suma columna %d: %d\n", j + 1, suma_columna[j]);
    }
    
    return 0;
}