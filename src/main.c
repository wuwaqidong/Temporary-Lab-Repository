#include <stdio.h>
#include "math_utils.h"

int main() {
    int n;
    printf("请输入一个非负整数：");
    if (scanf("%d", &n) != 1) {
        printf("输入无效。\n");
        return 1;
    }
    int result = factorial(n);
    if (result == -1) {
        printf("负数没有阶乘。\n");
    } else {
        printf("%d 的阶乘是 %d\n", n, result);
    }
    return 0;
}
