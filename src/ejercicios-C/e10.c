#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {
    int c, state = OUT;
    int wl = 0;
    int counts[1000] = {0};
    int maxlen = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                if (wl >= 1000) wl = 999;
                counts[wl]++;
                if (wl > maxlen) maxlen = wl;
                wl = 0;
            }
            state = OUT;
        } else {
            state = IN;
            wl++;
        }
    }
    if (state == IN) {
        if (wl >= 1000) wl = 999;
        counts[wl]++;
        if (wl > maxlen) maxlen = wl;
    }

    for (int i = 1; i <= maxlen; ++i) {
        if (counts[i] > 0) {
            printf("%3d | ", i);
            for (int j = 0; j < counts[i]; ++j) putchar('*');
            putchar('\n');
        }
    }
    return 0;
}
