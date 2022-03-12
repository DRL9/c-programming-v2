#include "stdio.h"

void p_5() {
    printf("enter income:");
    int income;
    scanf("%d", &income);
    float tax;
    if (income < 750) {
        tax = 0;
    } else if (income < 2250) {
        tax = 7.5f + (income - 750) * 0.02f;
    } else if (income < 3750) {
        tax = 37.5f + (income - 3750) * 0.03f;
    } else if (income < 5250) {
        tax = 82.5f + (income - 5250) * 0.04f;
    } else if (income < 7000) {
        tax = 142.5f + (income - 7000) * 0.05f;
    } else {
        tax = 230.0f + (income - 7000) * 0.06f;
    }
    printf("your tax is: $%.2f", tax);
}


void run_e_05() {
    printf("e05\n");
    p_5();
}
