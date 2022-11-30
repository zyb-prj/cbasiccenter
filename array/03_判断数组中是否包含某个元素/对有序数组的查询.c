/*
 * 查询无序数组需要遍历数组中的所有元素，而查询有序数组只需要遍历其中一部分元素。
 * 例如有一个长度为 10
 * 的整型数组，它所包含的元素按照从小到大的顺序（升序）排列， 假设比较到第 4
 * 个元素时发现它的值大于输入的数字，那么剩下的 5
 * 个元素就没必要再比较了，肯定也大于输入的数字，这样就减少了循环的次数，提高了执行效率。
 */
#include <stdio.h>

/* 对有序数组做查询 */
void handler1(void) {

    // 定义一个一维整型有序数组
    int nums[10] = {0, 1, 6, 10, 23, 34, 100, 177, 296, 999};
    int i, num, thisindex = -1;

    // 终端打印提示
    printf("Input an integer: ");

    // 输入索引值
    scanf("%d", &num);
    for (i = 0; i < 10; i++) {
        if (nums[i] == num) {
            thisindex = i;
            break;
        } else if (nums[i] > num) {
            break;
        }
    }

    // 健壮性校验
    if (thisindex < 0) {
        printf("%d isn't  in the array.\n", num);
    } else {
        printf("%d is  in the array, it's index is %d.\n", num, thisindex);
    }
}

/* 使用二分法做有序数组查询 */
void handler2(void) {
    /* 已知升序数组 */
    int nums[10] = {1, 3, 6, 8, 10, 23, 30, 40, 44, 56};
  
    /* 定义数组索引 */
    int nums_len = sizeof(nums) / sizeof(nums[0]); // 数组长度
    int first_index = 0;                           // 数组头索引值
    int last_index = nums_len - 1;                 // 数组尾索引值
    int mid, index_value;                                       // 二分法中间值

    int count = 0;   // 保存查找次数

    /* 输入需要查找的数据值 */
    printf("Input an integer: ");
    scanf("%d", &index_value);

    while (first_index <= last_index) {
        count++;
        mid = (first_index + last_index) / 2;

        if (nums[mid] > index_value) {
            last_index = mid;
        } else if (nums[mid] > index_value) {
            first_index = mid;
        } else if (nums[mid] == index_value) {
            printf("您所查找的数据%d在当前数组中的位置为:%d\n", index_value, mid);
            break;
        } else {
            printf("当前值在数组中不存在!\n");
            break;
        }
    }
    
}

int main() {
    handler1();
    handler2();
    return 0;
}
