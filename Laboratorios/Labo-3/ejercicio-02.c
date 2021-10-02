#include <stdio.h>

int main() {
    int x = 0;
    int suma = 0;
    while(x >= 0) {
        printf("Digite un numero: \n");
        scanf("%i", &x);
        if( x % 2 == 0){
            suma = suma + x;
        }
    }
    printf("%i \n",suma);


    return 0;
}