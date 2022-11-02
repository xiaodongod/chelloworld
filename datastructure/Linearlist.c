
#include <stdio.h>

#define MAXSIZE 20


// 状态码
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status;

typedef int ElemType;

typedef  struct 
{
    ElemType data[MAXSIZE];
    int lenth;
}SqList;



Status InitList(SqList*);
Status IsEmpty(SqList*);
Status ClearList(SqList*);
Status GetElem(SqList*,int,ElemType*);

Status LocateElem(SqList*,ElemType);

Status ListInsert(SqList*,int,ElemType);

Status ListDelete(SqList*,int, ElemType*);

Status ListLengh(SqList*);

Status InitList(SqList* L)
{
    L->lenth = 0;
    return OK;
}

Status IsEmpty(SqList* L)
{
    return L->lenth == 0;
}

Status GetElem(SqList* L, int i, ElemType* e) 
{
    if (L->lenth ==0 || i<1||i>L->lenth)
    {
        return ERROR;
    }
    *e = L->data[i-1];
    return OK;
}



Status ListInsert(SqList *L, int i, ElemType e)
{
    if (L->lenth == MAXSIZE )
    {
        return ERROR;
    }
    if (i<1 || i<L->lenth+1)
    {
        return ERROR;
    }
    if (i<L->lenth)
    {
        for (int k=L->lenth-1; k >0; k--)
        {
            L->data[k+1] = L->data[k];
        }
    }
    L->data[i-1]=e;
    L->lenth++;
    return OK;
}

Status ListDelete(SqList *L, int i, ElemType *e)
{
    if (L->lenth < i || i<1)
    {
        return ERROR;
    }
    *e = L->data[i-1];
    if (i<L->lenth)
    {
        for (int k=i; k <L->lenth-1; k++)
        {
            L->data[k-1] = L->data[k];
        }
    }
    L->lenth--;

    return OK;
}




Status ListLengh(SqList* L)
{
    return L->lenth;
}


void PrintList(SqList* L)
{
    if (L->lenth > 0)
    {
        for (int i = 0; i < L->lenth; i++)
        {
            printf("%d ",L->data[i]);
        }
        printf("\n");
    }
}

Status ClearList(SqList* L)
{
    if (L->lenth > 0)
    {
        for (int i = 0; i < L->lenth; i++)
        {
            L->data[i]=NULL;
        }
    }
    L->lenth = 0;
    return OK;
}


int main()
{
        
    SqList L;
	SqList Lb;
    
    ElemType e;
    Status i;
    int j,k;
    i=InitList(&L);
    printf("初始化L后：L.length=%d\n",L.lenth);
    for(j=1;j<=5;j++)
    {
        i=ListInsert(&L,j,j);
    }
    printf("在L的表头依次插入1～5后：L.data=");
    PrintList(&L); 

    printf("L.length=%d \n",L.lenth);
    i=IsEmpty(&L);
    printf("L是否空：i=%d(1:是 0:否)\n",i);

    i=ClearList(&L);
    printf("清空L后：L.length=%d\n",L.lenth);
    i=IsEmpty(&L);
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