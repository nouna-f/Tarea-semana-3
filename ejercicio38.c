#include <stdio.h>

int main() {
    int n,cont = 0;
    int res;

    printf("Ingrese un número entero: ");
    scanf("%d", &n);

    for (int i=0; i<12; i++){
        cont++;
        res=n*cont;
        
        printf("%d * %d = %d\n", n, cont, res);
    }

    return 0;
}
