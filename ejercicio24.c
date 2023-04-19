#include <stdio.h>

int main() {
    int num, dig, sum = 0;

    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    do {
        dig = num % 10;
        if(dig % 2 == 0) {
            sum += dig;
        }
        num /= 10;
    } while(num != 0);

    printf("La suma de los dígitos pares es: %d\n", sum);

    return 0;
}
