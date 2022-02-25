#include <stdio.h>
#include <string.h>

/**
 * @brief 函数指针作为函数返回值 
 * int (*findFunction(char *))(int, int)
 *  findFunction是一个标识符
 *  findFunction()是一个函数
 *  findFunction(char *)函数接受一个类型为char *的参数
 *  *findFunction(char *)函数返回一个指针
 *  (*findFunction(char*))()这个指针指向一个函数
 *  (*findFunction(char*))(int, int)指针指向的函数接受两个整形参数
 *  int (*findFunction(char *))(int, int)指针指向的函数返回一个整形
**/

// 重定义函数指针类型
typedef int (*FUNC)(int, int);

// 求最大值函数
int maxValue(int a, int b) {
    return a > b ? a : b;
}

// 求最小值函数
int minValue(int a, int b) {
    return a < b ? a : b;
}
// findFunction函数定义
FUNC findFunction(char *name) {
    if (0 == strcmp(name, "max")) {
        return maxValue;
    } else if (0 == strcmp(name, "min")) {
        return minValue;
    }

    printf("Function name error");
    return NULL;
}   

int main() {

    int (*p)(int, int) = findFunction("max");
    printf("max = %d\n", p(9, 5));

    int (*p1)(int, int) = findFunction("min");
    printf("min = %d\n", p1(1, 5));

    return 0;
}