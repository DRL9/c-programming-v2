//
//
#include "stdio.h"

#define NUMBER_HEIGHT 3
#define MAX_DIGITS 10

const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                             {0, 1, 1, 0, 0, 0, 0},
                             {1, 1, 0, 1, 1, 0, 1},
                             {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1},
                             {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1},
                             {1, 1, 1, 0, 0, 0, 0},
                             {1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 0, 1, 1},
};

void process_digit(int digit, int position);

void print_digits_array(int n, int a[n]);

void p_7() {
    printf("Enter a number:");
    int a[MAX_DIGITS];
    int count = 0;
    while (count < MAX_DIGITS) {
        int c = getchar();
        if (c >= '0' && c <= '9') {
            a[count] = c - '0';
            count++;
        } else if (c == '\n') {
            break;
        }
    }
    print_digits_array(count, a);

}

void print_digits_array(int n, int arr[n]) {
    for (int i = 0; i < NUMBER_HEIGHT; ++i) {
        for (int j = 0; j < n; ++j) {
            int digit = arr[j];
            process_digit(digit, i);
            printf(" ");
        }
        printf("\n");
    }
}

void process_digit(int digit, int position) {
    switch (position) {
        case 0:
            printf(" %c ", segments[digit][0] ? '_' : ' ');
            break;
        case 1:
            printf("%c%c%c",
                   segments[digit][5] ? '|' : ' ',
                   segments[digit][6] ? '_' : ' ',
                   segments[digit][1] ? '|' : ' ');
            break;
        default:
            printf("%c%c%c",
                   segments[digit][4] ? '|' : ' ',
                   segments[digit][3] ? '_' : ' ',
                   segments[digit][2] ? '|' : ' ');
            break;
    }
}

void run_e_10() {
    p_7();
}
