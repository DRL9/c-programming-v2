#include "string.h"
#include <stdio.h>
#include <stdlib.h>

int readline(int n, char str[n]) {
    int i = 0, ch;
    while ((ch = getchar()) != '\n') {
        str[i] = (char)ch;
        if (++i >= n) {
            break;
        }
    }
    str[i] = '\0';
    return i;
}

void p_18() {
    printf("Enter a date (mm/dd/yyyy):");
#define LENGTH_DATE 10
    char str[LENGTH_DATE] = "";
    readline(LENGTH_DATE, str);
    char *p = str;
    int date, month, year;
    char tmp[4] = "";
    month = atoi(strncpy(tmp, p, 2));
    p += 3;
    date = atoi(strncpy(tmp, p, 2));
    p += 3;
    year = atoi(strncpy(tmp, p, 4));
    const char *months[] = {"January",   "February", "March",    "April",
                            "May",       "June",     "July",     "August",
                            "September", "October",  "November", "December"};
    printf("You entered the date %s %d, %d\n", months[month - 1], date, year);
}

void run_13() { p_18(); }
