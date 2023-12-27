#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3

int main()
{

    // char str[N] = {'a', 'b', 'c'};

    // char str[N] = "a";

    // int i;
    // for ( i = 0; i < N; i++)
    // {
    //     printf("%c ", str[i]);
    // }
    

    char str[32] = "hello\0abc";

    /*strlen & sizeof*/
    printf("%ld\n", strlen(str));
    printf("%ld\n", sizeof(str));

    strcpy(str, "abcde");
    puts(str);
    strncpy(str, "abcde", 2);
    puts(str);

    strcat(str, " ");
    strcat(str, "world");
    puts(str);


    strncat(str, "kkkkkk", 2);
    puts(str);


    char str1[32] = "world";
    char str2[32] = "whello";

    printf("%d\n", strcmp(str1, str2));

    printf("%d\n", strncmp(str1, str2, 1));

    exit(0);
}