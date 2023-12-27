#include <stdio.h>
#include <stdlib.h>


#define STRSIZE 32

int main()
{

    int i;
    float f;

    char ch, str[STRSIZE];

    printf("please enter:\n");


    scanf("%d", &i);
    // ch=getchar();

    scanf("%*c%c", &ch);
    printf("i=%d, ch=%c \n", i, ch);



#if 0
    while (1)
    {

        int ret = scanf("%d", &i);
        if (ret != 1)
        {
            printf("enter error!\n");
            break;
        }
        


        printf("i=%d \n", i);
    }
    
#endif

    // scanf("%s", str);
    // printf("%s\n", str);

    // scanf("%d%f", &i, &f);

    // printf("i=%d \n", i);
    // printf("f=%f \n", f);


    exit(0);
}