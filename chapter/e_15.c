#include <stdio.h>
// 引用本地文件，使用""
#include "./e_15.h"
#include "stack.h"

// Recommend define macro and type in the header file
#define M_TRUE 1
#define M_FALSE 0
typedef int M_BOOL;

void e_15() {
    printf("e 15 running.\n");
    i = 1;
    int j = 2;
    printf("%d, %d\n", i, j);

    make_empty();
    printf("%d\n", i);
}


