#include <stdio.h>

int main() {
    int x, y, i, sum2 = 0, sum5 = 0, count2 = 0, count5 = 0;
    float avg2, avg5;
    
    printf("Ingrese un número entero x: ");
    scanf("%d", &x);
    printf("Ingrese un número entero y: ");
    scanf("%d", &y);
    
    // Sumamos los x primeros múltiplos de 2
    for (i = 1; count2 < x; i++) {
        if (i % 2 == 0) {
            sum2 += i;
            count2++;
        }
    }
    
    // Sumamos los y primeros múltiplos de 5
    for (i = 1; count5 < y; i++) {
        if (i % 5 == 0) {
            sum5 += i;
            count5++;
        }
    }
    
    // Calculamos el promedio de los x primeros múltiplos de 2
    avg2 = (float) sum2 / x;
    
    // Calculamos el promedio de los y primeros múltiplos de 5
    avg5 = (float) sum5 / y;
    
    // Comparamos los promedios y mostramos el resultado
    if (avg2 > avg5) {
        printf("El promedio de los %d primeros múltiplos de 2 es mayor que el promedio de los %d primeros múltiplos de 5\n", x, y);
    } else {
        printf("El promedio de los %d primeros múltiplos de 2 no es mayor que el promedio de los %d primeros múltiplos de 5\n", x, y);
    }
    
    return 0;
}
