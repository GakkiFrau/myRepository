#include <stdio.h>


/**
 *   函数回调本质为函数指针作为函数参数，函数调用时传入函数地址，
 *   这使我们的代码变得更加灵活，可复用性更强。
**/


typedef enum{
    FALSE = 0,
    TRUE = 1,
}BOOL;

BOOL compareGreater(int number, int compareNumber) {
    return number > compareNumber;
}   
BOOL compareLess(int number, int compareNumber) {
    return number < compareNumber;
}
void compareNumberFunction(int *numberArray, int count, int compareNumber, BOOL (*p)(int, int)) {
    for (int i = 0; i < count; i++) {
        if (p(*(numberArray + i), compareNumber)) {
            printf("%d\n", *(numberArray + i));
        }
    }
}

int main() {

    int numberArray[5] = {15, 34, 44, 56, 64};
    int compareNumber = 50;
    // 大于被比较数字情况：
    compareNumberFunction(numberArray, 5, compareNumber, compareGreater);
    // 小于被比较数字情况：
    compareNumberFunction(numberArray, 5, compareNumber, compareLess);

    return 0;
}