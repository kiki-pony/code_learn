#pragma once

#define MaxSize 10
#define InitSize 10

//�ڶ��£����Ա�

typedef struct {	//˳���ṹ����̬����	2.2
	int data[MaxSize];
	int length;
}SqList;

typedef struct {	//˳���ṹ����̬����	2.2
	int* data;
	int Maxsize, length;
}SeqList;

typedef struct LNode {	//�����������ͣ�2.3.1��ѭ��������ڵ�����
	int data;
	struct LNode* next;
}LNode, * LinkList;

typedef struct DNode {	//˫����ڵ����ͣ�2.3.3��ѭ��˫����ڵ�����
	int data;
	struct DNode* next, * prior;
}DNode, * DLinkList;

typedef struct SNode{	//��̬����ڵ����ͣ�2.3.5��Ĭ�ϳ���Ϊ10
	int data;
	int next;
}SNode,*SLinkList[MaxSize];


class data_struct
{
};

