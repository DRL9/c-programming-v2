/**
 * 格式化输入与输出
 */
#include "stdio.h"


// %i 和 %d 的区别
void e3_faq1() {
    // printf, 两者没有区别
    printf("%i, %d\n", 1, 1);

    int input1, input2;
    printf("input1: ");
    scanf("%d", &input1);
    printf("input2: ");
    scanf("%i", &input2);
    printf("input1 is %d, input2: is %d", input1, input2);


}

void run_e_03() {
    printf("run exercise 03\n");
    e3_faq1();
}
