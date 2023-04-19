#include <stdio.h>

int main() {
    int a = 0, b = 1, c = 0, contador = 0;

    while (c <= 2000) {
        if (c >= 1000) {
            contador++;
        }
        a = b;
        b = c;
        c = a + b;
    }

    printf("La cantidad de elementos de la serie de Fibonacci entre 1000 y 2000 es: %d \n", b);

    return 0;
}
