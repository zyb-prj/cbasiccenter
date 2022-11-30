#include <stdio.h>

/* 自动创建整型数组，依次存放数字1～10 */
void handler1(void) {

    // 定义整型数组，不赋值
    int nums[10];
    int i;

    //将1~10放入数组中
    for (i = 0; i < 10; i++) {
        nums[i] = (i + 1);
    }

    //依次输出数组元素
    for (i = 0; i < 10; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

/* 自定义输入10个数，保存至数组 */
void handler2(void) {
    int nums[10];
    int i;
   
    //从控制台读取用户输入
    for(i=0; i<10; i++){
        scanf("%d", &nums[i]);  //注意取地址符 &，不要遗忘哦
    }
   
    //依次输出数组元素
    for(i=0; i<10; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() { 
    handler1();
    handler2();
}