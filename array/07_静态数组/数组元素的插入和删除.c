#include <stdio.h>

//自定义函数，用来输出数组元素
void display_array(int arr[], int len)
{
    int	i;

    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int	main(void)
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int nums_new1[9];
    int nums_new2[11];
    int i;

    //删除nums第6个元素
    for (i = 0; i < 10; i++)
    {
        //i等于6时直接跳过，不进行任何操作
        if (i < 6)
        {
            nums_new1[i] = nums[i];
        }
        else if (i > 6)
        {
            nums_new1[i - 1] = nums[i];
        }
    }
    display_array(nums_new1, 9);

    //在nums第6个元素后面插入一个整数 55
    for (i = 0; i < 10; i++)
    {
        if (i < 7)
        {
            nums_new2[i] = nums[i];
        }
        else if (i > 7)
        {
            nums_new2[i + 1] = nums[i];
        }
        else
        { //i等于7
            nums_new2[i] = 55;
            nums_new2[i + 1] = nums[i];
        }
    }
    display_array(nums_new2, 11);

    return (0);
}