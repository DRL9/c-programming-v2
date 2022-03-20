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

int main() {
    // run_e_03();
    // run_e_04();
    // run_e_05();
    // run_e_06();
    // run_e_10();
#define STR_LEN 10
    char str[STR_LEN + 1];
    printf("input str:\n");
    readline(10, str);
    printf("---%s---", str);

    return 0;
}


