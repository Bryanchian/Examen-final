#include <stdio.h>
#include <string.h>

int main() {
    char name[128];

    printf("Ejercicio 2\n");
    printf("Ingrese un nombre\n");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        
        size_t n = strlen(name);
        if (n > 0 && name[n-1] == '\n') name[n-1] = '\0';
        printf("Hola %s\n", name);
    } else {
        printf("No se leyó nombre\n");
    }

    return 0;
}
