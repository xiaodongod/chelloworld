/***********************************main.c***********************************/
#include <stdio.h>
int main(void)
{
    char c;
    char str[20];
    enter_string(str);        /*调用字符串输入函数*/
    printf("The delete atring is: ");
    scanf("%c",&c);
    delete_string(str,c);    /*调用字符删除函数*/
    print_string(str);        /*打印处理后的字符串*/
    return 0;
}
