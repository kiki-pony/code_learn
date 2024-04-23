#pragma once

#include "data_struct.h"


class queueFun{
public:
	void InitQueue(SqQueue& Q);		//初始化队列
	bool EnQueue(SqQueue& Q,int x);		//入队
	bool DeQueue(SqQueue& Q,int &x);		//出队
	bool EmptyQueue(SqQueue& Q);	//判断队空
	bool FullQueue(SqQueue& Q);		//判断队满
	void GetAllEle(SqQueue& Q);		//输出全部值
};


class circleQueueFun {
public:
	void InitCircleQueue(SqQueue& Q);	//初始化循环对列
	bool EnCircleQueue(SqQueue& Q,int x);			//入队循环队列
	bool DeCircleQueue(SqQueue& Q, int& x);		//出队
	bool EmptyCircleQueue(SqQueue& Q);	//判断队空
	bool FullCircleQueue(SqQueue& Q);		//判断队满
	bool GetAllCircleEle(SqQueue& Q);		//输出全部值
};

class linkQueueFun {
public:
	void InitLinkQueue(LinkQueue& Q);	//初始化链式队列，带头结点
	bool EmptyLinkQueue(LinkQueue& Q);	//判空
	bool EnLinkQueue(LinkQueue& Q, int x);			//入队循环队列
	bool DeLinkQueue(LinkQueue& Q, int& x);		//出队
	bool GetAllCircalEle(LinkQueue& Q);		//输出全部值
};

