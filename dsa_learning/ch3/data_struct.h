#pragma once

#define MaxSize 10
#define InitSize 10

//第三章：栈、队列和数组

typedef struct{			//3.1 栈的顺序存储
	int data[MaxSize];
	int top;
}SqStack;
 
typedef struct {		//3.1 共享栈
	int data[MaxSize];
	int top1;
	int top2;
}ShStack;

typedef struct LinkNode {	//3.1 链栈
	int data;
	struct LinkNode* next;
}LinkNode,*LinkStack;

typedef struct {		//3.2 队列
	int data[MaxSize];
	int front, rear;
}SqQueue;


class data_struct
{
};

