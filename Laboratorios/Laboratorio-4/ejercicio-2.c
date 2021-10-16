#include <stdio.h>

int inputUsuario();
void mostrarArreglo(int cantidad, int arreglo[cantidad]);

int main() {
    int cantidad = inputUsuario();
    int numeros[cantidad];

    for(int i = 0; i < cantidad; i++) {
        printf("Ingrese el numero: \n");
        scanf("%i", &numeros[i]);
    }

    int contPares = 0, contImpares = 0;

    for(int i = 0; i < cantidad; i++)
        if(numeros[i] % 2 == 0)
            contPares++;
        else
            contImpares++;

    int pares[contPares], impares[contImpares];

    for(int i = 0, j = 0, k = 0; i < cantidad; i++) 
        if(numeros[i] % 2 == 0) {
            pares[j] = numeros[i];
            j++;
        }
        else {
            impares[k] = numeros[i];
            k++;
        }

    mostrarArreglo(contPares, pares);
    mostrarArreglo(contImpares, impares);
    
    return 0;
}

int inputUsuario() {
    int cantidad = 0;
    
    printf("Ingrese la cantidad de numeros enteros que quiere ingresar: \n");
    scanf("%i", &cantidad);

    return cantidad;
}

void mostrarArreglo(int cantidad, int arreglo[cantidad]) {
    for(int i = 0; i < cantidad; i++) 
        printf("%i ", arreglo[i]);
    
    printf("\n");
}