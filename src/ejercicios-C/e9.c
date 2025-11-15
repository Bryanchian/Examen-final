#include <stdio.h>

int main(void) {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            /* mostrar secuencia visible en vez de backspace real */
            printf(">\\b-");
        } else if (c == '\b') {
            printf("<\\b-");
        } else {
            putchar(c);
        }
    }
    return 0;
}
