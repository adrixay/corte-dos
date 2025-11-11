#include <stdio.h>
#include <stdlib.h>

int main() {
    
    printf("programa que calcula maximo por fila, suma y promedia los maximos\n");
    
    int matriz[4][4] = {{15, 23, 8, 41}, {67, 32, 19, 5}, {91, 12, 57, 3}, {24, 38, 46, 10}};
    
    int i, j;
    int max_actual;
    int suma_maximos = 0;
    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("los maximos son:\n");
    
    for(i = 0; i < 4; i++) {
        max_actual = matriz[i][0];  
        
        for(j = 1; j < 4; j++) {
            if(matriz[i][j] > max_actual) {
                max_actual = matriz[i][j];
            }
        }
        
        printf("Fila %d - Maximo: %d\n", i + 1, max_actual);
        suma_maximos += max_actual;
    }
    printf("Suma de maximos: %d\n", suma_maximos);
    printf("Promedio de maximos: %.2f\n", (float)suma_maximos / 4);
    
    return 0;
}