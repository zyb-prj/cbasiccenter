#include <stdio.h>
int	main(void)
{
    char str1[] = "printf通过字符串名字输出：ya!haha";
    char str2[] = "puts通过字符串名字输出：ya!haha";

    //通过字符串名字输出
    printf("%s\n", str1);
    //直接输出
    printf("%s\n", "printf直接输出：ya!hehe");

    //通过字符串名字输出
    puts(str2);
    //直接输出
    puts("put直接输出：ya!hehe");

    return (0);
}