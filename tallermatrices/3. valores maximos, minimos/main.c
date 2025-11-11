#include <stdio.h>
#include <stdlib.h>

int main() {
    
    printf("Programa que encuentra min, max y promedio de una matriz 4x4\n ");
    
    int matriz[4][4] = {{15, 23, 8, 41}, {67, 32, 19, 5}, {91, 12, 57, 3}, {24, 38, 46, 10}};
    int i, j;
    int min, max;
    int suma = 0;
    int total_elementos = 4 * 4;
    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    min = max = matriz[0][0];
    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(matriz[i][j] < min) {
                min = matriz[i][j];
            }
            if(matriz[i][j] > max) {
                max = matriz[i][j];
            }
            suma += matriz[i][j];
        }
    }
    
    float promedio = (float)suma / total_elementos;
    printf("Valor minimo: %d\n", min);
    printf("Valor maximo: %d\n", max);
    printf("Suma total: %d\n", suma);
    printf("Total de elementos: %d\n", total_elementos);
    printf("Promedio: %.2f\n", promedio);
    
    return 0;
}