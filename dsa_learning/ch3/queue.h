#pragma once

#include "data_struct.h"


class queueFun
{
public:
	void InitQueue(SqQueue& Q);		//��ʼ������
	bool EnQueue(SqQueue& Q,int x);		//���
	bool DeQueue(SqQueue& Q,int &x);		//����
};

