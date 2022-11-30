#include <stdio.h>
#include <stdlib.h>

/* 使用最原始的方式输出一个4x4的矩阵 */
void handler1(void) {

    // 对4x4个变量赋值
    int a1 = 20, a2 = 345, a3 = 700, a4 = 22;
    int b1 = 56720, b2 = 9999, b3 = 20098, b4 = 2;
    int c1 = 233, c2 = 205, c3 = 1, c4 = 6666;
    int d1 = 34, d2 = 0, d3 = 23, d4 = 23006783;

    // 借用占位符打印数据
    printf("%-9d %-9d %-9d %-9d\n", a1, a2, a3, a4);
    printf("%-9d %-9d %-9d %-9d\n", b1, b2, b3, b4);
    printf("%-9d %-9d %-9d %-9d\n", c1, c2, c3, c4);
    printf("%-9d %-9d %-9d %-9d\n", d1, d2, d3, d4);
    system("pause");
}

/* 使用数组输出一个4x4的矩阵 */
void handler2(void) {

    // 定义4个长度为4的一维整型数组并赋值
    int a[4] = {20, 345, 700, 22};
    int b[4] = {56720, 9999, 20098, 2};
    int c[4] = {233, 205, 1, 6666};
    int d[4] = {34, 0, 23, 23006783};

    // 借用占位符打印数据
    printf("%-9d %-9d %-9d %-9d\n", a[0], a[1], a[2], a[3]);
    printf("%-9d %-9d %-9d %-9d\n", b[0], b[1], b[2], b[3]);
    printf("%-9d %-9d %-9d %-9d\n", c[0], c[1], c[2], c[3]);
    printf("%-9d %-9d %-9d %-9d\n", d[0], d[1], d[2], d[3]);
}

int main() { 
    handler1();
    handler2();
    return 0;
}