#pragma once
#define ElemType int
#define MaxSize 10
#define InitSize 10

//�ڶ��£����Ա�
typedef struct {	//˳���ṹ����̬����	2.1
	ElemType data[MaxSize];
	ElemType length;
}SqList;

typedef struct {	//˳���ṹ����̬����	2.1
	ElemType* data;
	ElemType Maxsize, length;
}SeqList;

class data_struct
{
};

