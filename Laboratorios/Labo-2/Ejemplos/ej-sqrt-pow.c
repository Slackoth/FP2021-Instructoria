#include <stdio.h>
#include <math.h>

int main() {
    float a = 2.5, b = 7.7, c = 3.3;
    float positiveQuadraticFormula = (- b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
    float negativeQuadraticFormula = (- b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;

    printf("Formula cuadratica positiva %.2f\n", positiveQuadraticFormula);
    printf("Formula cuadratica negativa %.2f\n", negativeQuadraticFormula);

    return 0;
}