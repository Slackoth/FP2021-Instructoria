#include <stdio.h>

void fibonacci(int x);

int main() {
    int x;

    printf("Digite un numero: \n");
    scanf("%i", &x);
    
    fibonacci(x);

    return 0;
}

void fibonacci(int x) {
    int primerTermino = 0;
    int segundoTermino = 1;
    int tercerTermino;

    if(x == 1) {
        printf("%i\n", primerTermino);
        return;
    }

    if(x == 2) {
        printf("%i\n", primerTermino);
        printf("%i\n", segundoTermino);
        return;
    }

    printf("%i\n", primerTermino);
    printf("%i\n", segundoTermino);

    for(int i = 2; i < x; i++) {
        tercerTermino = primerTermino + segundoTermino;

        printf("%i\n", tercerTermino);

        primerTermino = segundoTermino;
        segundoTermino = tercerTermino;
    }
}