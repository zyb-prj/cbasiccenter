#include <stdio.h>
#include <string.h>
int main(){
    char str1[50] = "hahahaa";
    char str2[50] = "hehe";
    strcpy(str1, str2);
    printf("str1: %s\n", str1);
    return 0;
}