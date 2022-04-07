//
//
#include "stdio.h"

// 简单的宏
void simple_macro() {
    // 定义常量
#define N 100
    char str[N];
    printf("%s\n", str);

    // 定义类型
#define BOOL int
    BOOL a = 0;
    printf("%d\n", a);

    // 空替换列表
#define DEBUG_A
}

// 带参数的宏
void macro_args() {
    // 注意 x, y 都要加括号， 目的是为了解决宏替换后，表达式优先级的问题
    // 注意 x, y 尽量不要用有副作用的表达式
#define MAX(x, y) ((x)>(y)?(x):(y))
    printf("max is %d\n", MAX(10 - 3, 20 - 2));
}

// 运算符
void operator() {
    // # 将宏参数（表达式）替换成字符串字面量
#define PRINT_INT(n) printf(#n " = %d\n", n)
    PRINT_INT(10 / 2);

    // ## 将两个记号粘合在一起
#define MK_ID(n) i##n
    int MK_ID(1) = 0, MK_ID(2) = 1;
    PRINT_INT(i1);
    PRINT_INT(i2);
}

void undef_macro() {
#define PI 3.14
#define TWO_PI (PI * 2)
    printf("%f\n", TWO_PI);
    // 取消宏定义
#undef PI
#define PI 3.14159
    printf("%f\n", TWO_PI);
}

// 预定义宏
void predefine_macro() {
    // __VA_ARGS__ 代表省略号相对应的参数 （C99）
#define PRINTLN(str, ...) printf(str "\n", __VA_ARGS__)

    PRINTLN("当前行号：%d", __LINE__);
    PRINTLN("文件路径: %s", __FILE__);
    PRINTLN("编译日期: %s", __DATE__);
    PRINTLN("编译时间: %s", __TIME__);
    PRINTLN("是否符合C标准: %d", __STDC__);

    // C99 中的预定义宏
    PRINTLN("是否是托管实现: %d", __STDC_HOSTED__);
    PRINTLN("支持的C标准: %ld", __STDC_VERSION__);
}

// 空的宏参数 C99
void empty_arg_macro() {
#define JOIN(x, y, z) x##y##z
    int JOIN(a, b, c) = 1, JOIN(a, b,) = 2, JOIN(, b, c) = 3;
    abc++, ab++, bc++;

    // # 如果是空那么替换成空字符串
#define MK_STR(str)  #str
    char str[] = MK_STR();
    printf("%s", str);
}

void fn_name() {
    PRINTLN("当前函数名: %s", __func__);
}

void condition_compile() {
#define DEBUG 1
#if DEBUG
    printf("debug mode\n");
#endif

#if defined(DEBUG)
    printf("定义过宏DEBUG\n");
#endif

#if defined(WIN32)
    printf("win\n");
#elif defined(MAC_OS_X_VERSION_10_10_2)
    printf("mac\n");
#elif defined(LINUX)
    printf("linux\n");
#endif
}

void run_e14() {
#define ECHO(s) {gets(s); puts(s);}
    // char str[10] = {};
    // if (1 > 0) ECHO(str)
    // printf("%d %s\n", __LINE__, __DATE__);
    // simple_macro();
    // macro_args();
    // operator();
    // undef_macro();
    // predefine_macro();
    // empty_arg_macro();
    // fn_name();
    condition_compile();
}

