#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define WEIGHT 3.0e-23
#define QUART 950

static void water(void)
{
    float num;
    double sum;
    printf("please input for water quart num:\n");
    scanf("%f", &num);
    sum = num * QUART / WEIGHT;
    printf("total is %e\n",sum);
}


static void area(void)
{
    float a, b, c;
    float s, area;
    printf("please input :\n");
    scanf("%f%f%f",&a,&b,&c);

    if (a+b <=c || a+c <=b || b+c <=a)
    {
        fprintf(stderr, "EINVAL\n");
        exit(1);
    }
    

    printf("a = %f\t b=%f\t c=%f\n", a, b, c);

    s = 1.0/2*(a+b+c);
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("area = %f\n", area);

}

int main()
{

    // water();
    area();

    exit(0);
}