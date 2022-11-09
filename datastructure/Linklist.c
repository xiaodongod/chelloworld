
#include <stdio.h>
#include <stdlib.h>


// 状态码
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;

typedef int ElemType;

typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node;

typedef struct Node *LinkList;



Status InitList(LinkList*);
Status IsEmpty(LinkList);
Status ClearList(LinkList);
Status GetElem(LinkList,int,ElemType*);

Status LocateElem(LinkList,ElemType);

Status ListInsert(LinkList,int,ElemType);

Status ListDelete(LinkList,int, ElemType*);

int ListLengh(LinkList);

Status InitList(LinkList *L)
{
    
    *L=(LinkList)malloc(sizeof(Node)); /* 产生头结点,并使L指向此头结点 */
    if(!(*L)) /* 存储分配失败 */
    {
        return ERROR; 
    }
    (*L)->next=NULL; /* 指针域为空 */
    return OK;
}

Status IsEmpty(LinkList L)
{
    
    if (L->next)
    {
        return OK;
    } else
    {
        return ERROR;
    }
    
}

Status GetElem(LinkList L, int i, ElemType *e) 
{


    LinkList p = L->next;

    int j = 1;
    while (p && j < i)
    {
        p = p->next;
        ++j;
    }
    *e = p->data;
    return OK;
}



Status ListInsert(LinkList L, int i, ElemType e)
{
    
    LinkList s = (LinkList)malloc(sizeof(Node));
    LinkList p = L->next;

    int j = 1;
    while (p && j < i)
    {
        p = p->next;
        ++j;
    }

    s->data=e;
    s->next=p->next;
    p->next=s;
    return OK;
}

Status ListDelete(LinkList L, int i, ElemType *e)
{
    LinkList p = L->next;

    int j = 1;
    while (p && j < i)
    {
        p = p->next;
        ++j;
    }

    LinkList q=p->next;

    p->next=q->next;

    *e=q->data;
    free(p);

    return OK;
}




int ListLengh(LinkList L)
{
    LinkList p = L->next;

    int j = 0;
    while (p)
    {
        p = p->next;
        ++j;
    }
    return j;
}


void PrintList(LinkList L)
{
    LinkList p = L->next;

    int j = 1;
    while (p)
    {
        printf("%d", p->data);
    }
    printf("\n");
}

Status ClearList(LinkList L)
{
    LinkList p = L->next;
    int j = 1;
    while (p)
    {
        free(p);
    }
    return OK;
}


int main()
{
        
    LinkList L;
	LinkList Lb;
    
    ElemType e;
    Status i;
    int j,k;
    i=InitList(&L);
    printf("初始化L后：L.length=%d\n", ListLengh(L));
    for(j=1;j<=5;j++)
    {
        i=ListInsert(L,j,j);
    }
    printf("在L的表头依次插入1～5后：L.data=");
    PrintList(L); 

    printf("L.length=%d \n", ListLengh(L));
    i=IsEmpty(L);
    printf("L是否空：i=%d(1:是 0:否)\n",i);

    i=ClearList(L);
    printf("清空L后：L.length=%d\n",ListLengh(L));
    i=IsEmpty(L);
    printf("L是否空：i=%d(1:是 0:否)\n",i);

    // for(j=1;j<=10;j++)
    //         ListInsert(&L,j,j);
    // printf("在L的表尾依次插入1～10后：L.data=");
    // ListTraverse(L); 

    // printf("L.length=%d \n",L.lenth);

    // ListInsert(&L,1,0);
    // printf("在L的表头插入0后：L.data=");
    // ListTraverse(L); 
    // printf("L.length=%d \n",L.lenth);

    // GetElem(L,5,&e);
    // printf("第5个元素的值为：%d\n",e);
    // for(j=3;j<=4;j++)
    // {
    //         k=LocateElem(L,j);
    //         if(k)
    //                 printf("第%d个元素的值为%d\n",k,j);
    //         else
    //                 printf("没有值为%d的元素\n",j);
    // }
    

    // k=ListLength(L); /* k为表长 */
    // for(j=k+1;j>=k;j--)
    // {
    //         i=ListDelete(&L,j,&e); /* 删除第j个数据 */
    //         if(i==ERROR)
    //                 printf("删除第%d个数据失败\n",j);
    //         else
    //                 printf("删除第%d个的元素值为：%d\n",j,e);
    // }
    // printf("依次输出L的元素：");
    // ListTraverse(L); 

    // j=5;
    // ListDelete(&L,j,&e); /* 删除第5个数据 */
    // printf("删除第%d个的元素值为：%d\n",j,e);

    // printf("依次输出L的元素：");
    // ListTraverse(L); 

	// //构造一个有10个数的Lb
	// i=InitList(&Lb);
    // for(j=6;j<=15;j++)
    //         i=ListInsert(&Lb,1,j);

	// unionL(&L,Lb);

	// printf("依次输出合并了Lb的L的元素：");
    // ListTraverse(L); 

    return 0;
}