#pragma once

#include "data_struct.h"


class queueFun{
public:
	void InitQueue(SqQueue& Q);		//��ʼ������
	bool EnQueue(SqQueue& Q,int x);		//���
	bool DeQueue(SqQueue& Q,int &x);		//����
	bool EmptyQueue(SqQueue& Q);	//�ж϶ӿ�
	bool FullQueue(SqQueue& Q);		//�ж϶���
	void GetAllEle(SqQueue& Q);		//���ȫ��ֵ
};


class circleQueueFun {
public:
	void InitCircleQueue(SqQueue& Q);	//��ʼ��ѭ������
	bool EnCircleQueue(SqQueue& Q,int x);			//���ѭ������
	bool DeCircleQueue(SqQueue& Q, int& x);		//����
	bool EmptyCircleQueue(SqQueue& Q);	//�ж϶ӿ�
	bool FullCircleQueue(SqQueue& Q);		//�ж϶���
	bool GetAllCircleEle(SqQueue& Q);		//���ȫ��ֵ
};

class linkQueueFun {
public:
	void InitLinkQueue(LinkQueue& Q);	//��ʼ����ʽ���У���ͷ���
	bool EmptyLinkQueue(LinkQueue& Q);	//�п�
	bool EnLinkQueue(LinkQueue& Q, int x);			//���ѭ������
	bool DeLinkQueue(LinkQueue& Q, int& x);		//����
	bool GetAllCircalEle(LinkQueue& Q);		//���ȫ��ֵ
};

