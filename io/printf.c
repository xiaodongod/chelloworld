#include <stdio.h>
#include <stdlib.h>

#define STRSIZE 32

int main()
{

    printf("%d \n",567);

    printf("%x \n",255);
    printf("%o \n",65);
    printf("%o\n",567);
    printf("%c\n",65);
    printf("%s\n","ABC");

    printf("%e\n",567.789);
    printf("%f\n",567.789);
    printf("%g\n",567.789);
    printf("%%\n");



    float f = 123.456;
    printf("f=%8.1f\n",f);


    char str[STRSIZE] = "helloworld";
    printf("%-10.5s[over]\n", str);

    exit(0);
}