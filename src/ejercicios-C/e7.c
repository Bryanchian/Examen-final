#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

void reverse(char s[]) {
    int i, j;
    char c;
    int len = (int)strlen(s);
    int has_nl = 0;
    if (len > 0 && s[len-1] == '\n') {
        has_nl = 1;
        s[len-1] = '\0';
        len--;
    }
    for (i = 0, j = len - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    if (has_nl) {
        s[len] = '\n';
        s[len+1] = '\0';
    }
}

int main(void) {
    char line[MAXLINE];
    while (fgets(line, MAXLINE, stdin) != NULL) {
        reverse(line);
        fputs(line, stdout);
    }
    return 0;
}
