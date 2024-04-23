#include "stack.h"
#include<iostream>
using namespace std;

void stack::InitStack(SqStack &S) {
	S.top = -1;	
}

inline bool stack::StackEmpty(SqStack& S) {
	return S.top == -1;
}

bool stack::PushStack(SqStack& S, int x) {
	if (S.top == MaxSize - 1) return false;
	S.data[++S.top] = x;
	return true;
}

//bool stack::PopStack(SqStack& S, int x) {
//	if (S.top == -1) return false;
//	x = S.data[S.top--];
//	return true;
//}

bool stack::PopStack(SqStack& S, unsigned  x) {
	if (S.top == -1) return false;
	x = S.data[S.top--];
	return true;
}

bool stack::GetTop(SqStack& S, int& x) {
	if (S.top == -1) return false;
	x = S.data[S.top];
	return true;
}



void shStack::InitShStack(ShStack& S) {
	S.top1 = -1;
	S.top2 = MaxSize;
}
bool shStack::ShStackAll(ShStack& S) {
	return S.top1 + 1 == S.top2;
}


void linkStackFun::InitLinkStack(LinkStack& S) {	//S始终指向第一个元素，即栈顶元素
	S = new LinkNode;
	S->data = -1;
	S->next = NULL;
}
bool linkStackFun::PushLinkStack(LinkStack& S, int x) {
	LinkNode* p = new LinkNode;
	p->data = S->data;
	p->next = S->next;
	S->next = p;
	S->data = x;
	return true;
}
bool linkStackFun::PopStack(LinkStack& S, int &x) {
	x = S->data;
	S = S->next;
	return true;
}

bool linkStackFun::GetAllEle(LinkStack& S) {
	LinkNode* p = S;
	cout << "链栈为：";
	while (p->next != NULL) {
		cout << p->data<<" ";
		p = p->next;
	}
	cout << endl;
	return true;
}




bool stackApply::bracketCheck(char str[], int length) {
	SqStack S;
	stack stack;
	stack.InitStack(S);	//初始化栈
	for (int i = 0; i < length; i++){
		if(str[i]=='(' || str[i] == '[' || str[i] == '{') {
			stack.PushStack(S, str[i]);   //左括号入栈
		}
		else {
			if (stack.StackEmpty(S)) return false;
			char topEle = ' ';
			stack.PopStack(S, topEle);		//栈顶元素出栈
			//是否匹配
			//if (str[i] != topEle) return false;	//直接使用这种无法比较
			if (str[i] == '(' && topEle != ')') return false;
			if (str[i] == '[' && topEle != ']') return false;
			if (str[i] == '{' && topEle != '}') return false;
		}
	}
	return stack.StackEmpty(S);
}