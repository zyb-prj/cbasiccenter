#include <stdio.h>

int	main(void)
{
    // 定义大写字母表字符数组，长度为30
    char capital_alphabet[30];

    //
    char c;
    int index;

    for (c = 65, index = 0; c <= 90; c++, index++)
    {
        capital_alphabet[index] = c;
    }
    capital_alphabet[index] = 0;

    printf("%s\n", capital_alphabet);
    return (0);
}