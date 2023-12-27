#include <stdio.h>
#include <stdlib.h>

#if 0
void func(void)
{
    static int x=0;
    x=x+1;
    printf("%p -> %d \n", &x, x);
}

int main()
{

    auto int i ;
    int j;
    static int si;

    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("si = %d\n", si);


    func();
    func();
    func();

    exit(0);
}





int i=100;


void func(int i)
{
    printf("i = %d\n", i);
}


int main()
{
    int i=3;
    func(i);
    {
        int i = 5;
        printf("i = %d\n", i);
    }
    
    exit(0);
}


#endif




int i = 0;


void print_star(void)
{
    for ( i = 0; i < 5; i++)
    {
        printf("*");
    }
    printf("\n");
    
    printf("[%s]i = %d\n", __FUNCTION__, i);

}

int main()
{
    
    for ( i = 0; i < 5; i++)
    {
        print_star();
    }
    
    printf("[%s]i = %d\n", __FUNCTION__, i);
    exit(0);
}