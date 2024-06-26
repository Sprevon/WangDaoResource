#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode{
    ElemType data;//数据域
    struct LNode *next;
}LNode,*LinkList;
//LNode*是结构体指针，和LinkList完全等价的
//输入3,4,5,6,7,9999
void list_head_insert(LNode* &L)
{
    L= (LinkList)malloc(sizeof(LNode));//申请头结点空间，头指针指向头结点
    L->next=NULL;
    ElemType x;
    scanf("%d",&x);
    LNode *s;//用来指向申请的新结点
    while(x!=9999)
    {
        s=(LinkList)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;//s的next指向原本链表的第一个结点
        L->next=s;//头结点的next，指向新结点
        scanf("%d",&x);
    }
}
//尾插法新建链表
void list_tail_insert(LNode* &L)
{
    L= (LinkList)malloc(sizeof(LNode));//申请头结点空间，头指针指向头结点
    L->next=NULL;
    ElemType x;
    scanf("%d",&x);
    LNode *s,*r=L;//s是用来指向申请的新结点，r始终指向链表尾部
    while(x!=9999)
    {
        s=(LinkList)malloc(sizeof(LNode));//为新结点申请空间
        s->data=x;
        r->next=s;//新结点给尾结点的next指针
        r=s;//r要指向新的尾部
        scanf("%d",&x);
    }
    r->next=NULL;//让尾结点的next为NULL
}

void print_list(LinkList L)
{
    L=L->next;
    while(L!=NULL)
    {
        printf("%3d",L->data);
        L=L->next;
    }
    printf("\n");
}

//按位置查找
LinkList GetElem(LinkList L,int SearchPos)
{
    int j=0;
    if(SearchPos<0)
    {
        return NULL;
    }
    while(L&&j<SearchPos)
    {
        L=L->next;
        j++;
    }
    return L;
}
//按值查找
LinkList LocateElem(LinkList L,ElemType SearchVal)
{
    while(L)
    {
        if(L->data==SearchVal)//如果找到对应的值，就返回那个结点的地址
        {
            return L;
        }
        L=L->next;
    }
    return NULL;
}
//i代表插入到第几个位置
bool ListFrontInsert(LinkList L,int i,ElemType InsertVal)
{
    LinkList p= GetElem(L,i-1);
    if(NULL==p)
    {
        return false;
    }
    LinkList q;
    q=(LinkList)malloc(sizeof(LNode));//为新结点申请空间
    q->data=InsertVal;
    q->next=p->next;
    p->next=q;
    return true;
}

//删除第i个位置的元素
//删除时L是不会变的，所以不需要加引用
bool ListDelete(LinkList L,int i)
{
    LinkList p= GetElem(L,i-1);//拿到要删除结点的前一个结点
    if(NULL==p)
    {
        return false;
    }
    LinkList q=p->next;//拿到要删除的结点指针
    if(NULL==q)//当链表只有5个结点，删除第6个结点，出现这种异常情况时，避免程序崩溃
    {
        return false;
    }
    p->next=q->next;//断链
    free(q);//释放被删除结点的空间
    return true;
}

//头插法，尾插法来新建链表
int main() {
    LinkList L,search;//L是链表头指针，是结构体指针类型
//    list_head_insert(L);//输入数据可以为3 4 5 6 7 9999,头插法新建链表
    list_tail_insert(L);
    print_list(L);//链表打印
//    //按位置查找
//    search=GetElem(L,2);
//    if(search!=NULL)
//    {
//        printf("Succeeded in searching by serial number\n");
//        printf("%d\n",search->data);
//    }
//    search=LocateElem(L,6);//按值查询
//    if(search!=NULL)
//    {
//        printf("Search by value succeeded\n");
//        printf("%d\n",search->data);
//    }
//    bool ret;
//    ret=ListFrontInsert(L,2,99);//新结点插入第i个位置
//    print_list(L);
    ListDelete(L,6);//删除第6个位置元素
    print_list(L);
    return 0;
}
