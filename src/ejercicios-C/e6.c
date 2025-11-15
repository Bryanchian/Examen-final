#include <stdio.h>

#define MAXLINE 1000
#define LIMIT 80

int main(void) {
    int len;
    char line[MAXLINE];

    while (fgets(line, MAXLINE, stdin) != NULL) {
        /* longitud sin contar newline */
        len = 0;
        while (line[len] != '\0' && line[len] != '\n') len++;
        if (len > LIMIT) {
            printf("%s", line);
            if (line[len] != '\n') putchar('\n');
        }
    }
    return 0;
}
