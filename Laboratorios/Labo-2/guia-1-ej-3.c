#include <stdio.h>

int main() {
    float kilometers;
    int gasoline;

    printf("Digite el numero de kilometros: \n");
    scanf("%f", &kilometers);
    
    printf("Digite el numero de litros de gasolina: \n");
    scanf("%i", &gasoline);

    printf("Se han consumido %i litros de gasolina en %.2f kilometros.\n", gasoline, kilometers);
    
    return 0;
}