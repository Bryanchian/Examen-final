#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int main(void) {
    char line[MAXLINE];

    while (fgets(line, MAXLINE, stdin) != NULL) {
        int len = (int)strlen(line);
        if (len > 0 && line[len-1] == '\n') {
            len--;
            line[len] = '\0';
        }
        while (len > 0 && (line[len-1] == ' ' || line[len-1] == '\t')) {
            len--;
            line[len] = '\0';
        }
        int empty = 1;
        for (int i = 0; i < len; ++i) {
            if (line[i] != ' ' && line[i] != '\t') { empty = 0; break; }
        }
        if (!empty) {
            printf("%s\n", line);
        }
    }
    return 0;
}
