#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a[3] = {1,2,3};
    int i;


    int *p = a;


    for ( i = 0; i < sizeof(a)/sizeof(*a); i++)
    {
        // scanf("%d", &(a[i]));
        scanf("%d", p++);
    }


    // for ( i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    for ( i = 0; i < sizeof(a)/sizeof(*a); i++)
    {
        // printf("%p -> %d \n", a+i, a[i]);
        // printf("%p -> %d \n", p+i, a[i]);
        // printf("%p -> %d \n", p+i, *(p+i));


        printf("%d\n", *p++);


    }
    printf("\n");
    

    exit(0);
}