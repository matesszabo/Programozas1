#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){

    char greeting[6] = {'H','e','l','l','o','\0'};
    char greeting2[] = "Hello";

    printf("Greeting message: %s\n", greeting);
    printf("Greeting message: %s\n", greeting2);

    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int len;

    strcpy(str3, str1);
    printf("strcpy( str3, str1) : %s\n" , str3);

    strcat( str1, str2);
    printf("strcat( str1, str2) : %s\n",str1);

    len = strlen(str1);
    printf("strlen(str1) : %d\n", len);

    printf("strcmp(greeting1,greeting2) : %d\n", strcmp(greeting,greeting2));
    printf("strcmp(greeting1,greeting2) : %d\n", strcmp(greeting,str2));

    printf("strchr(greeting, 'e'): %s\n", strchr(greeting,'e'));
    printf("strstr(greeting, 'll'): %s\n", strstr(greeting,"ll"));

    return 0;
}