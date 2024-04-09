#pragma once
#define ElemType int
#define MaxSize 10
#define InitSize 10

//第二章：线性表
typedef struct {	//顺序表结构，静态分配	2.1
	ElemType data[MaxSize];
	ElemType length;
}SqList;

typedef struct {	//顺序表结构，动态分配	2.1
	ElemType* data;
	ElemType Maxsize, length;
}SeqList;

class data_struct
{
};

