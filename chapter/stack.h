#include <stdbool.h>

// 声明并定义变量，编译器会分配内存
// 该共享变量，所以地方都可以修改他的值
int i;
// 只声明，告诉编译器该变量在其他地方定义，不需要分配内存
extern int j;


void make_empty();
bool is_empty();
bool is_full();
void push(int i);
int pop();
