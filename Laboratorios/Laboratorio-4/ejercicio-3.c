#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contarDiagonalesDerechas(int cantidad, int matriz[cantidad][cantidad]);
int contarDiagonalesIzquierdas(int cantidad, int matriz[cantidad][cantidad]);

int main() {
    srand(time(0));

    int matriz[5][5];

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            matriz[i][j] = 5;

    for(int i = 0; i < 5; i++) {
        printf("\n");
        for(int j = 0; j < 5; j++)
            printf("%i ", matriz[i][i]);
    }

    printf("\n");
    contarDiagonalesDerechas(5, matriz);
    contarDiagonalesIzquierdas(5, matriz);
}

int contarDiagonalesDerechas(int cantidad, int matriz[cantidad][cantidad]) {
    int total = 0;
    
    for(int i = 0; i < cantidad; i++) {
        int aux = i;
        int cAux = cantidad - i;
        
        if(cAux > 1) {
            for(int j = 0; j < cAux; j++) {
                printf("J: %i\n", j);
                printf("Aux: %i\n", aux);
                printf("Valor: %i\n", matriz[j][aux]);

                total = total + matriz[j][aux];
                
                aux++;
            }
        }
        else 
            break;
    }

    printf("Derecha: %i\n", total);
    return total;
}

int contarDiagonalesIzquierdas(int cantidad, int matriz[cantidad][cantidad]) {
    int total = 0;

    for(int i = 0; i < cantidad; i++) {
        int aux = i + 1;
        int cAux = cantidad - i - 2;
        
        if(cAux < 4) {
            for(int j = cantidad - 1; j > cAux; j--) {
                printf("J: %i\n", j);
                printf("Aux: %i\n", aux);
                printf("Valor: %i\n", matriz[j][aux]);

                total = total + matriz[j][aux];
                
                aux--;
            }
        }
        else 
            break;
    }

    printf("Izquierda: %i\n", total);
    return total;
}