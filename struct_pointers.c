#include <stdio.h>



//结构体
typedef struct {
    char *name;  //姓名
    int age;  //年龄
    struct Person* next;
    
} Person;

typedef Person* PersonP;

typedef int* intp;

typedef struct 
{
    int data;
    struct Node *next;
}Node;



typedef int ElemType;

typedef Node* LinkList;


void test(int a, int* b)
{

    printf("%d\n", a);
    a+=1;
    printf("%d\n", *b);
}

void test2(PersonP p)
{
    // printf("%s", p->name);
    // printf("%d", p->age);
    // PersonP a = p->next;

    printf("\n");
}

int main()
{
   LinkList l = malloc(sizeof(LinkList));
   l->next;



}



