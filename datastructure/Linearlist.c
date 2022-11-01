


#define MAXSIZE 20;


// 状态码
#define OK 1;
#define ERROR 0;
#define TRUE 1;
#define FALSE 0;

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
    if (i<=L->lenth)
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
    if (L->lenth < i )
    {
        return ERROR;
    }
    if (i<1 || i<L->lenth+1)
    {
        return ERROR;
    }
    if (i<=L->lenth)
    {
        for (int k=L->lenth-1; k >0; k--)
        {
            L->data[k+1] = L->data[k];
        }
    }


    return OK;
}
