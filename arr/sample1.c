#include <stdio.h>
#include <stdlib.h>

#define M 3

int main()
{

    int arr[M];
    printf("%ld\n", sizeof(arr));

    printf("ar r= %p\n", arr);


    for (int i = 0; i < M; i++)
    {
        scanf("%d", &arr[i]);
    }
    

    for (int i = 0; i < M; i++)
    {
        printf("%p --> %d\n", &arr[i],  arr[i]);
    }
    

    exit(0);
}
