//
//

#include <math.h>
#include "stdio.h"

int gcd(int m, int n) {
    if (n == 0) {
        return m;
    }
    return gcd(n, m % n);
}

float get_e(int n) {
    float e = 1.0f;
    for (int i = 1; i <= n; i++) {
        int f = 1;
        for (int j = 1; j <= i; j++) {
            f *= j;
        }
        e += 1.0f / f;
    }
    return e;
}

void run_e_06() {
    printf("e 06\n");
    // printf("enter two integers: ");
    // int a, b;
    // scanf("%d %d", &a, &b);
    // printf("Greatest common divisor: %d", gcd(a, b));

    // int n;
    // printf("enter n: ");
    // scanf("%d", &n);
    // printf("e: %f\n", get_e(n));

    int i = 1;
    while (1) {
        float e = get_e(i);
        printf("i: %d, e: %.19f\n", i, e);
        if (isinf(e)) {
            break;
        }
        i++;
    }
}