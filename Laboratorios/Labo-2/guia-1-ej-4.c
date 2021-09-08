#include <stdio.h>

int main() {
    char nombre[10];

    printf("Digite un nombre de 10 caracteres: \n");
    scanf("%s", &nombre);
    
    printf("Ahora estas en la matrix, %s.\n", nombre);
    
    return 0;
}