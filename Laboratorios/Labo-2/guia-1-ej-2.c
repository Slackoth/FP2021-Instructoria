#include <stdio.h>
#include <math.h>

int main() {
    float side = 6.0;
    
    float area = pow(side, 2);
    float volume = pow(side, 3);

    printf("Un cuadrado de lado 6.0 tiene un area de: %.2f.\n", area);
    printf("Un cubo de lado 6.0 tiene un volumen de: %.2f.\n", volume);
    
    return 0;
}