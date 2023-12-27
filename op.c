#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, j=10, value;

    value = i++ + ++j;

    printf("i = %d \n", i);
    printf("j = %d \n", j);
    printf("value = %d \n", value);



    int flag1 = 0xC;

    int flag2 = 0x9;

    printf("flag1 | flag2 = %d \n", flag1 | flag2);

    exit(0);

}