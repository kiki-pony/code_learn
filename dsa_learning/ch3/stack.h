#pragma once
#include "data_struct.h"

class stack{
public:
	void InitStack(SqStack& S);		//��ʼ��˳��ջ
	bool StackEmpty(SqStack& S);	//�ж�ջ��
	bool PushStack(SqStack& S, int x);	//��ջ
	bool PopStack(SqStack& S, int x);	//��ջ
	bool GetTop(SqStack& S, int& x);	//��ȡջ��Ԫ��
};	
//����ջ
class shStack {
public:
	void InitShStack(ShStack& S);	//��ʼ������ջ
	bool ShStackAll(ShStack& S);	//�ж�ջ��
};
//��ջ
class linkStackFun {
public:
	void InitLinkStack(LinkStack& S);		//��ʼ����ջ����ͷ���,Sʼ��ָ���һ��Ԫ�أ���ջ��Ԫ��
	bool PushLinkStack(LinkStack& S, int x);	//��ջ
	bool PopStack(LinkStack& S, int &x);	//��ջ
	bool GetAllEle(LinkStack& S);	//�������ֵ
};

