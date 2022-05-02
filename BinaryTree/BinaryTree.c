//
// Created by libocheng on 2022/5/2.
//
#include <stdio.h>
#include <stdlib.h>

typedef char ElemType;
typedef struct BiTNode
{
    ElemType data;
    struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

BiTree Create() {
    char ch;
    scanf("%c",&ch);
    if(ch == '#') return NULL;
    BiTree T = (BiTree)malloc(sizeof(struct BiTNode));
    T->data = ch;
    T->lchild = Create();
    T->rchild = Create();
    return T;
};

void Preorder(BiTree T);
void Inorder(BiTree T);
void Postorder(BiTree T);

int main()
{
    BiTree T = Create();
    printf("Preorder:");   Preorder(T);   printf("\n");
    printf("Inorder:");    Inorder(T);    printf("\n");
    printf("Postorder:");  Postorder(T);  printf("\n");
    return 0;
}

void Preorder(BiTree T){
    if(T == NULL)
        return;
    printf(" %c",T->data);
    Preorder(T->lchild);
    Preorder(T->rchild);
}
void Inorder(BiTree T){
    if(T == NULL)
        return;
    Inorder(T->lchild);
    printf(" %c",T->data);
    Inorder(T->rchild);
}
void Postorder(BiTree T){
    if(T == NULL)
        return;
    Postorder(T->lchild);
    Postorder(T->rchild);
    printf(" %c",T->data);
}