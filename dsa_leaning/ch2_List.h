#pragma once

#include <iostream>
#include <vector>

#include "data_struct.h"

using namespace std;


class ch2_List	//2.2顺序表
{
public:
	void InitSeqList(SeqList& L);	//动态初始化
	void IncreaseSeqSize(SeqList& L, int len);	//增加动态数组的长度
	bool ListInsert(SeqList& L, int i, int e);	//插入操作，在顺序表L的第i个位置插入新元素e
	bool ListDelete(SeqList& L, int i);	//删除,i为位序
	int getElem(SeqList& L, int i);	//按位查找,i为位序
	int LocateElem(SeqList& L, int e);	//按值查找,e为值
	bool GetAllEle(SeqList& L);		//输出List的data
};

class ch2_SingleList {		//2.3.1链表——单链表
	bool InitList(LinkList& L);		//初始化一个不带头节点的单链表
	bool InitHeadList(LinkList& L);			//初始化一个带头结点的单链表
	LinkList List_HeadInsert(LinkList& L);	//头插法
};

void ch2_List::InitSeqList(SeqList& L) {	//动态初始化
	L.data = new int[InitSize]; //分配空间
	L.length = 0;
	L.Maxsize = InitSize;
	for (int i = 0; i < MaxSize; i++) {
		L.data[i] = 0;
	}
}

bool ch2_List::ListInsert(SeqList& L, int i, int e) {	//插入操作，在顺序表L的第i个位置插入新元素e
	if (i < 1 || L.length + 1 < i) return false;
	if (L.length >= MaxSize) return false;
	for (int j = L.length; j >=i; j--)
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	cout << "在第" << i << "位成功插入" << e << endl;
	return true;
}

void ch2_List::IncreaseSeqSize(SeqList& L, int len) {	//增加动态数组的长度
	int* p = L.data;	//指针数组，将p指向L.data首地址
	cout << "动态数组最大长度为：" << L.Maxsize<<endl;
	L.data = new int[L.Maxsize + len];
	for (int i = 0; i < L.length; i++){
		L.data[i] = p[i];
	}
	L.Maxsize = L.Maxsize + len;
	delete p;
	cout << "动态数组增加后的最大长度为：" << L.Maxsize << endl;
}

bool ch2_List::ListDelete(SeqList& L, int i) {	//删除,i为位序
	if (i<1 || i>L.length) return false;
	cout << "要删除的第"<<i<<"位的值为：" << L.data[i-1] <<endl;
	for (int j = i; j < L.length; j++){
		L.data[j - 1] = L.data[j];
	}
	L.length--;
	return true;
	
}

int ch2_List::getElem(SeqList& L, int i) {
	cout << "第"<<i<<"位值为" << L.data[i - 1] << endl;
	return L.data[i - 1];
}

int ch2_List::LocateElem(SeqList& L, int e) {
	for (int j = 0; j < L.length; j++){
		if (L.data[j] == e) {
			cout << "要查找的" << e << "在第" << j + 1 << "位" << endl;
			return j + 1;
		}	
	}
	return 0;
}

bool ch2_List::GetAllEle(SeqList& L) {		//输出SeqList的data
	printf("数组为：");
	for (int i = 0; i < L.length; i++) {
		cout << L.data[i]<<"  ";
	}
	cout << endl;
	return true;
}

