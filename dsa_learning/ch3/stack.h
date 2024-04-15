#pragma once
#include "data_struct.h"

class stack{
public:
	void InitStack(SqStack& S);		//初始化顺序栈
	bool StackEmpty(SqStack& S);	//判断栈空
	bool PushStack(SqStack& S, int x);	//进栈
	bool PopStack(SqStack& S, int x);	//出栈
	bool GetTop(SqStack& S, int& x);	//获取栈顶元素
};	
//共享栈
class shStack {
public:
	void InitShStack(ShStack& S);	//初始化共享栈
	bool ShStackAll(ShStack& S);	//判断栈满
};
//链栈
class linkStackFun {
public:
	void InitLinkStack(LinkStack& S);		//初始化链栈，带头结点,S始终指向第一个元素，即栈顶元素
	bool PushLinkStack(LinkStack& S, int x);	//进栈
	bool PopStack(LinkStack& S, int &x);	//出栈
	bool GetAllEle(LinkStack& S);	//输出所有值
};

