#include <stdio.h>

int main(void) {
    int c;
    int prev_blank = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            if (!prev_blank) {
                putchar(' ');
                prev_blank = 1;
            }
        } else {
            putchar(c);
            prev_blank = 0;
        }
    }
    return 0;
}
