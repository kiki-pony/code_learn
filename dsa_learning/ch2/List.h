//2.2线性表的顺序表示

#pragma once

#include <iostream>
#include <vector>

#include "data_struct.h"

using namespace std;

//2.2顺序表
class List	
{
public:
	void InitSeqList(SeqList& L);	//动态初始化
	void IncreaseSeqSize(SeqList& L, int len);	//增加动态数组的长度
	bool ListInsert(SeqList& L, int i, int e);	//插入操作，在顺序表L的第i个位置插入新元素e
	bool ListDelete(SeqList& L, int i);	//删除,i为位序，头节点不算位序
	int getElem(SeqList& L, int i);	//按位查找,i为位序
	int LocateElem(SeqList& L, int e);	//按值查找,e为值
	bool GetAllEle(SeqList& L);		//输出List的data
};

//2.3.2单链表
class SingleList	
{
public:
	bool InitList(LinkList& L);		//初始化一个不带头节点的单链表
	bool InitHeadList(LinkList& L);			//初始化一个带头节点的单链表
	LinkList List_HeadInsert(LinkList& L);	//头插法，输入-1结束
	bool InsertNextNode(LNode* p, int e);	//插入，在指定节点后插入元素
	bool InsertPriorNode(LNode* p, int e);	//插入，在指定节点前插入元素
	bool ListInsert(LinkList& L, int i, int e);	//插入元素到单链表，带头结点的单链表
	bool ListDelete(LinkList& L, int i);	//删除，按位序删除
	LNode* GetElem(LinkList& L, int i);	//查找，按位查找，带头结点
	LNode* LocateElem(LinkList& L, int e);	//查找，按值查找
	bool GetAllEle(LinkList& L);	//输出data
};

//2.3.3双链表
class DobuleList {
public:
	bool InitDLinkList(DLinkList& L);
	bool DLinkInsert(DLinkList& L, int i, int e);
	bool DLinkDelete(DLinkList& L, int i);
	bool GetAllElem(DLinkList& L);
};

//2.3.4循环链表
class CircleList {
public:
	bool InitCircleSingleList(LinkList& L);	//初始化一个循环单链表
	bool EmptyCircleSingleList(LinkList& L);	//循环单链表判空
	bool isTailCircleSingleList(LinkList& L,LNode *p);	//判断p是不是表尾节点
	bool InitCircleDList(DLinkList& L);	//初始化一个循环双链表
	bool EmptyCircleDList(DLinkList& L);	//循环双链表判空
	bool isTailCircleDList(DLinkList& L, DNode* p);	//判断p是不是表尾节点
	bool InsertNextCDNode(DNode* p, DNode* s);	//循环双链表p后插入s
	bool DeleteNextCDNode(DNode* p);	//删除p的后继节点
	
};

//2.3.5静态链表
class StaticList {
public:
	bool InitStaticList(SLinkList& L);	//初始化一个静态链表
	bool InsertStaticList(SLinkList& L, int n, int e);	//插入值为e的元素到位序为n的位置
	bool getAllEle(SLinkList& L);	
};