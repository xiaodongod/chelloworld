#include <stdio.h>
#include <stdlib.h>

#define M 10

// static void printArr(int* arr)
// {
//     for (int i = 0; i < sizeof(&arr)/sizeof(arr[0]); i++)
//     {
//         printf("%d,", arr[i]);
//     }
//     printf("\n");
    
// }

#if 0

static void printArr(int arr[])
{
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\n");
    
}

static void fibonacci(void)
{
    int fib[M] = {1, 1};
    for (int i = 2; i < M; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    printArr(fib);

    int i=0;
    int j=sizeof(fib)/sizeof(fib[0]) -1;

    while (i<j)
    {
        int tmp = fib[i];
        fib[i] = fib[j];
        fib[j] = tmp;
        i++;
        j--;
    }

}
#endif

static void bubble_sort(void)
{
    int a[8] = {34,5,11,22,42,7,49,20};

    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        for (int j = i+1; j < sizeof(a)/sizeof(a[0]); j++)
        {
            if(a[j] < a[i]) {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }
    
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        printf("%d,", a[i]);
    }
    printf("\n");

}



static void select_sort(void)
{
    int a[8] = {34,5,11,22,42,7,49,20};


    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        int index=i;
        for (int j = i+1; j < sizeof(a)/sizeof(a[0]); j++)
        {
            if(a[j] < a[index]) {
                index=j;
            }
        }
        int tmp = a[index];
        a[index] = a[i];
        a[i] = tmp;


    }
    
    for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        printf("%d,", a[i]);
    }
    printf("\n");

}




static void base_convert(void)
{
    int num, base,i;
    int n[128];

    printf("please enter the converted num: ");
    scanf("%d", &num);

    printf("please enter the base:");
    scanf("%d", &base);

    do
    {
        n[i] = num %base;
        num = num/base;
        i++;
    } while (num != 0);
    
    for (i -- ; i>=0; i--)
    {
        if (n[i] >= 10)
        {
            printf("%c", n[i]-10 + 'A');
        } else {
            printf("%d", n[i]);
        }
    }
    printf("\n");

}

static void primer(void)
{
    char primer[1001] = {0};
    int i,j;

    for ( i = 2; i < 1001; i++)
    {
        if (primer[i] == 0)
        {
            for (j = i*2; j < 1001; j+=i)
            {
                primer[j] = -1;
            }
        }
    }


    for ( i = 2; i < 1001; i++)
    {
        if (primer[i] == 0)
        {
            printf("%d is a primer \n", i);
        }
    }
}


int main()
{

    // fibonacci();
    // bubble_sort();

    // select_sort();
    // base_convert();

    primer();

    exit(0);
}
