#pragma once

#include "data_struct.h"


class queueFun
{
public:
	void InitQueue(SqQueue& Q);		//初始化队列
	bool EnQueue(SqQueue& Q,int x);		//入队
	bool DeQueue(SqQueue& Q,int &x);		//出队
};

