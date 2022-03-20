#include <stdio.h>

int readline(int n, char str[n]) {
    int i = 0, ch;
    while ((ch = getchar()) != '\n') {
        str[i] = (char) ch;
        if (++i >= n) {
            break;
        }
    }
    str[i] = '\0';
    return i;
}
