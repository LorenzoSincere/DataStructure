/**
* DataStructure--SqlList
* 顺序表
**/
#include<stdio.h>
#include<stdlib.h>

// 线性表长度的初始定义
#define InitSize 100
typedef struct{
    int *data; // 指示动态分配数组的指针
    int MaxSize, length; // 数组的最大容量和当前个数
}SqlList;

// 初始化顺序表
void InitList(SqlList L) {
    L.data = (int*)malloc(sizeof(int)*InitSize); // 初始动态分配语句
    L.length = 0;
    L.MaxSize = InitSize;
}

/**
* 顺序表基本操作--插入(i 为位序)
* the worst is O(n)，the best is O(1)
**/
int ListInsert(SqlList L, int i, int e) {
    if(i < 1 || i > L.length + 1) {
        return -1;
    }
    if(L.length >= L.MaxSize) {
        return -1;
    }
    for(int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j - 1];
    }
    L.data[i] = e;
    L.length++;
    return 1;
}

/**
* 顺序表基本操作--删除(i 为位序)
* the worst is O(n)，the best is O(1)
**/
int Listdelete(SqlList L, int i) {
    if(i < 1 || i > L.length) {
        return -1;
    }
    if(L.length == 0) {
        return -1;
    }

    int e = 0;
    e = L.data[i - 1];

    for(int j = i; j < L.length; j++) {
        L.data[i - 1] = L.data[j];
    }
    L.length--;
    return e;
}

/**
* 顺序表基本操作--按位查找(i 为位序)
* the worst is O(n)，the best is O(1)
**/
int GetElem(SqlList L,int i) {
    if(i < 1 || i > L.length) {
        printf("error");
        return -1;
    }
    return L.data[i-1];
}

/**
* 顺序表基本操作--按值查找(i 为位序)
* the worst is O(n)，the best is O(1)
**/
int LocateElem(SqlList L,int e) {
    for(int i = 0; i < L.length; i++) {
        if(L.data[i] == e){
            return i + 1;
        }
    }
    return -1;
}

/**
* 顺序表基本操作--顺序表判空
**/
int ListEmpty(SqlList L) {
    if(L.length == 0 || L.length < 0) {
        return -1;
    }
    else {
        return 1;
    }
}

/**
* 顺序表基本操作--返回顺序表长度
**/
int ListLength(SqlList L) {
    return L.length;
}

/**
* 顺序表基本操作--销毁顺序表
**/
int DestroyList(SqlList L) {
    if(L.data) {
        free(L.data);//释放L.data指向的内存区域
        L.data = NULL;//释放L.data指针本身
        L.length = 0;
        L.MaxSize = 0;
    } else {
        return -1;//如果本身L.data就没的话就失败了
    }
    return 1;
}

