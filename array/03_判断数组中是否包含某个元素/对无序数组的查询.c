/*
 * 所谓无序数组，就是数组元素的排列没有规律。
 * 无序数组元素查询的思路也很简单，就是用循环遍历数组中的每个元素，把要查询的值挨个比较一遍。
 */
#include <stdio.h>

/* 查询无序数组 */
void handler1(void) {

    // 定义无序数组
    int nums[10] = {1, 10, 6, 296, 177, 23, 0, 100, 34, 999};

    int i, num, thisindex = -1;

    // 打印提示
    printf("Input an integer: ");

    // 输入值做对比查询
    scanf("%d", &num);
    for (i = 0; i < 10; i++) {
        if (nums[i] == num) {
          thisindex = i;
          break;
        }
    }

    // 健壮性考虑
    if (thisindex < 0) {
        printf("%d isn't  in the array.\n", num);
    } else {
        printf("%d is  in the array, it's index is %d.\n", num, thisindex);
    }
}

int main() {
    handler1();
    return 0;
}