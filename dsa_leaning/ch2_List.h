#pragma once
#include "data_struct.h"


class ch2_List	//2.2顺序表
{
public:
	void InitSeqList(SeqList& L);	//动态初始化
	bool ListInsert(SeqList& L, int i, int e);	//插入操作，在顺序表L的第i个位置插入新元素e
};

class ch2_SingleList {

};

//动态初始化
void ch2_List::InitSeqList(SeqList& L) {
	L.data = new ElemType[InitSize]; //分配空间
	L.length = 0;
	L.Maxsize = InitSize;
	for (int i = 0; i < MaxSize; i++) {
		L.data[i] = 0;
	}
}

bool ch2_List::ListInsert(SeqList& L, int i, int e) {
	if (i < 1 || L.length + 1 < i) return false;
	if (L.length >= MaxSize) return false;
	for (int j = L.length; j >=i; j--)
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	return true;

}

