#include <stdio.h>

int main() {
    int even = 10 % 2;
    int odd = 7 % 2;
    int residue = 33 % 7; 

    printf("El numero 10 es par ya que su residuo es: %i.\n", even);
    printf("El numero 7 es impar ya que su residuo es: %i.\n", odd);
    printf("El residuo de la division de 33 entre 7 es: %i.\n", residue);

    return 0;
}