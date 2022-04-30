/**
* DataStructure--LinkList
* 单链表
**/
#include<stdio.h>
#include<stdlib.h>

#define MaxSize 100

// 单链表结点类型的初始定义
typedef struct LNode {
    int data;
    struct LNode *next;
}LNode, *LinkList;

// 头插法初始化单链表(带头结点)
LinkList List_HeadInsert(LinkList L) {
    LNode *s;
    int x;
    // 系统生成一个LinkList，同时将该链表的起始位置赋给指针变量L
    // 创建头结点
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    scanf("please input the value: %d\n", &x);
    while(x != 9999) {
        // 系统生成一个LNode型的结点，同时将该结点的起始位置赋给指针变量s
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}

// 尾插法初始化单链表
LinkList List_TailInsert(LinkList L) {
    int x;
    L = (LNode*) malloc (sizeof(LNode));
    // r为表尾指针
    LNode *s, *r = L;
    scanf("please input the value: %d\n", &x);
    while(x != 9999) {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
    }
    r->next = NULL;
    return L;
}

// /**
// * ***基本操作--插入(i 为位序)
// * the worst is O(n)，the best is O(1)
// **/
// int List***(*** L, int i, int e) {
//     return 1;
// }

// /**
// * ***基本操作--删除(i 为位序)
// * the worst is O(n)，the best is O(1)
// **/
// int ***delete(*** L, int i) {

//   return e;
// }

/**
* ***基本操作--按序号查找结点(i 为序号)
* O(n)
**/
int GetElem(LinkList L,int i) {
    int j = 1;

    return 1;
}

/**
* ***基本操作--按值查找(i 为位序)
* the worst is O(n)，the best is O(1)
**/
int LocateElem(*** L,int e) {

return -1;
}

/**
* ***基本操作--***判空
**/
int ***Empty(*** L) {

}

/**
* ***基本操作--返回***长度
**/
int ListLength(SqlList L) {
    return L.length;
}

/**
* ***基本操作--销毁***
**/
int Destroy***(*** L) {

}

/**
* 打印
**/
void display(LinkList L){
    LinkList temp = L;// 将temp指针重新指向头结点
    //只要temp指针指向的结点的next不是Null，就执行输出语句。
    while (temp->next) {
        temp = temp->next;
        printf("%d",temp->data);
    }
    printf("\n");
}






/*-------------------------------主函数测试-----------------------------*/
int main() {
    //初始化链表（1，2，3，4）
    printf("初始化链表为：\n");
    link *p=initLink();
    display(p);

    printf("在第4的位置插入元素5：\n");
    p=insertElem(p, 5, 4);
    display(p);

    printf("删除元素3:\n");
    p=delElem(p, 3);
    display(p);

    printf("查找元素2的位置为：\n");
    int address=selectElem(p, 2);
    if (address==-1) {
        printf("没有该元素");
    } else {
        printf("元素2的位置为：%d\n",address);
    }
    printf("更改第3的位置的数据为7:\n");
    p=amendElem(p, 3, 7);
    display(p);
    return 0;
}




