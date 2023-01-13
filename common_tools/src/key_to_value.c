//
// Created by zyb_w on 2023/1/13.
//

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
 * 去除字符串前后空格
 *
 * @param strIn
 * @param strOut
 */
void trim_string_space(char *strIn, char *strOut) {
    char *start, *end, *temp;//定义去除空格后字符串的头尾指针和遍历指针
    temp = strIn;
    while (*temp == ' ') {
        ++temp;
    }

    start = temp; //求得头指针
    temp = strIn + strlen(strIn) - 1; //得到原字符串最后一个字符的指针(不是'\0')

    while (*temp == ' ') {
        --temp;
    }

    end = temp; //求得尾指针

    for (strIn = start; strIn <= end;) {
        *strOut++ = *strIn++;
    }

    *strOut = '\0';
}

/**
 * 根据key值获取value值
 *
 * @param keyAndValue  eg:" key1 = kkkki"，必须用'='连接，如需其它则要修改源码
 * @param key          eg:"key1"
 * @param value        eg: char value[20] = {0}, value
 */
void from_ket_get_value(char *keyAndValue, char *key, char *value) {
    char *p = keyAndValue;

    /*
     * strstr()函数用来检索子串在字符串中首次出现的位置
     * keyAndValue为所检测的字符串，key为要检索的子字符串
     */
    p = strstr(keyAndValue, key);
    if (p == NULL) {
        printf("没有key\n");
        return;
    }

    /*
     * 指针地址跨过key值，获取字符串后面的信息
     * 去掉剩余字符串所有空格
     */
    p += strlen(key);
    trim_string_space(p, value);

    /**
     * 索引到"="说明一切尽在掌握之中
     */
    p = strstr(value, "=");
    if (p == NULL) {
        printf("没有=\n");
        return;
    }
    p += strlen("=");
    trim_string_space(p, value);

    p = strstr(value, "=");
    if (p != NULL) {
        printf("多余的=\n");
        return;
    }
    p = value;
    trim_string_space(p, value);
}