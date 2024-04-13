#pragma once

#define MaxSize 10
#define InitSize 10

//第二章：线性表

typedef struct {	//顺序表结构，静态分配	2.2
	int data[MaxSize];
	int length;
}SqList;

typedef struct {	//顺序表结构，动态分配	2.2
	int* data;
	int Maxsize, length;
}SeqList;

typedef struct LNode {	//单链表结点类型，2.3.1，循环单链表节点类型
	int data;
	struct LNode* next;
}LNode, * LinkList;

typedef struct DNode {	//双链表节点类型，2.3.3，循环双链表节点类型
	int data;
	struct DNode* next, * prior;
}DNode, * DLinkList;

typedef struct SNode{	//静态链表节点类型，2.3.5，默认长度为10
	int data;
	int next;
}SNode,*SLinkList[MaxSize];


class data_struct
{
};

