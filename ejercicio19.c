#include <stdio.h>
#include <math.h>

int main() {
    int n, primo=1;

    printf("Ingrese un número entero: ");
    scanf("%d", &n);

    if (n <= 1) {
        primo = 0;
    }
    else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo == 1) {
        printf("%d es primo\n", n);
    }
    else {
        printf("%d no es primo\n", n);
    }

    return 0;
}
