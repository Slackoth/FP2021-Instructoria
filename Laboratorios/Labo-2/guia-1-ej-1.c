// Esta libreria nos permite utilizar funciones como printf
// y scanf
#include <stdio.h>
// Esta libreria que nos permite utilizar funciones como pow
// y M_PI (el valor de PI)
#include <math.h>

int main() {
    float radius = 5.6;
    
    // La funcion pow se utiliza para realizar potencias en los numeros
    float area = M_PI * pow(radius, 2);
    float volume = 4.0 / 3.0 * M_PI * pow(radius, 3);

    printf("Un circulo de radio 5.6 tiene un area de: %.2f.\n", area);
    printf("Una esfera de radio 5.6 tiene un volumen de: %.2f.\n", volume);
    
    return 0;
}