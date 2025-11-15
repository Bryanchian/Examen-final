#include <stdio.h>

int main() {
    int val;

    printf("Ejercicio 1\n");
    printf("Ingrese un valor entero\n");
    if (scanf("%d", &val) == 1) {
        printf("Salida: %d\n", val);
    } else {
        printf("Entrada no valida\n");
    }

    return 0;
}
