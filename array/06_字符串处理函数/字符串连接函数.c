#include <stdio.h>
#include <string.h>
int main(){
    char str1[100]="The URL is ";
    char str2[60];
    printf("Input a URL: ");
    gets(str2);
    strcat(str1, str2);
    puts(str1);
   
    return 0;
}