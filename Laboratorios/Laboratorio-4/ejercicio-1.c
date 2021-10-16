#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void transponerMatriz(int normal[3][3]);

int main() {
    srand(time(0));

    int matriz[3][3];

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            matriz[i][j] = rand() % 50;

    printf("Matriz normal: \n");
    
    for(int i = 0; i < 3; i++) {
        printf("\n");
        for(int j = 0; j < 3; j++)
            printf("%i ", matriz[i][j]);
    }

    transponerMatriz(matriz);

    return 0;
}

void transponerMatriz(int normal[3][3]) {
    int matrizAux[3][3];

    // La matriz auxiliar sera recorrida por columnas:
    // -> Toma una columna, recorre todas sus filas
    // La matriz normal sera recorrida por filas
    // -> Toma una fila, recorre todas sus columnas
    for(int j = 0; j < 3; j++)
        for(int i = 0; i < 3; i++)
            matrizAux[i][j] = normal[j][i];

    printf("\nMatriz transpuesta: \n");
    
    for(int i = 0; i < 3; i++) {
        printf("\n");
        for(int j = 0; j < 3; j++)
            printf("%i ", matrizAux[i][j]);
    }

    printf("\n");
}