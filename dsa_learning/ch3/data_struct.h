#pragma once

#define MaxSize 10
#define InitSize 10

//�����£�ջ�����к�����

typedef struct{			//3.1 ջ��˳��洢
	int data[MaxSize];
	int top;
}SqStack;
 
typedef struct {		//3.1 ����ջ
	int data[MaxSize];
	int top1;
	int top2;
}ShStack;

typedef struct LinkNode {	//3.1 ��ջ�ڵ�
	int data;
	struct LinkNode* next;
}LinkNode,*LinkStack;

typedef struct {		//3.2 ����
	int data[MaxSize];
	int front, rear;
}SqQueue;

typedef struct {	//3.2 ��ʽ����
	LinkNode* front, * rear;
}LinkQueue;

class data_struct
{
};

