#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "./chapter/e_03.h"
#include "chapter/e_04.h"
#include "chapter/e_05.h"
#include "chapter/e_06.h"
#include "chapter/e_10.h"
#include "chapter/e_13.h"

void double2(int n, int *a) {
    for (int *p = a; p < a + n; p++) {
        *p = *p * 2;
    }
}

void foo(int m, int n) {
    int a[m][n], (*p)[n];
    p = a;
}

int count_spaces(const char *s) {
    int count = 0;
    while (*s != '\0') {
        if (*s == ' ') {
            count++;
        }
        s++;
    }
    return count;
}

char *readline2(int n) {
    int i = 0, ch;
    char line[n + 1];
    char *p = line;
    while ((ch = getchar()) != '\n') {
        p[i] = (char) ch;
        if (++i >= n) {
            break;
        }
    }
    p[i] = '\0';
    printf("%s\n--", p);
    return p;
}

int main() {
    // run_e_03();
    // run_e_04();
    // run_e_05();
    // run_e_06();
    // run_e_10();
    // printf("%d", count_spaces("  sd de"));
    // char *p = readline2(10);
    // printf("%s", p);

    run_13();

    return 0;
}


