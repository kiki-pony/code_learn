// ch2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "data_struct.h"
#include "list.h"

void ListBaseFun();  //2.2顺序表
void SingleListBaesFun();    //2.3.2单链表
void DobuleListBaseFun();	//2.3.3双链表
void CircleListBaseFun();	//2.3.4循环链表
void StaticListBaseFun();	//2.3.5静态链表

int main()
{
    //ListBaseFun();
    //SingleListBaesFun();
	//DobuleListBaseFun();
	//StaticListBaseFun();

}

void ListBaseFun() {
	SeqList L;
	List List;
	List.InitSeqList(L);
	List.ListInsert(L, 1, 12);
	List.ListInsert(L, 2, 3);
	List.ListInsert(L, 3, 546);
	List.ListInsert(L, 4, 6);
	List.ListInsert(L, 5, 57);
	List.GetAllEle(L);
	List.ListDelete(L, 1);
	List.GetAllEle(L);
	List.getElem(L, 3);
	List.LocateElem(L, 3);
};
void SingleListBaesFun() {
	LinkList L;
	SingleList sList;
	sList.InitHeadList(L);
	sList.List_HeadInsert(L);
	sList.GetAllEle(L);
	sList.ListInsert(L, 1, 4);
	sList.ListInsert(L, 2, 6);
	sList.ListInsert(L, 3, 9);
	sList.GetAllEle(L);
	sList.ListDelete(L, 1);
	sList.GetAllEle(L);
	sList.GetElem(L, 2);
	sList.LocateElem(L, 7);
};
void DobuleListBaseFun() {
	DLinkList L;
	DobuleList dList;
	dList.InitDLinkList(L);
	dList.DLinkInsert(L, 1, 2);
	dList.DLinkInsert(L, 2, 4);
	dList.DLinkInsert(L, 3, 6);
	dList.GetAllElem(L);
};
void CircleListBaseFun() {};
void StaticListBaseFun() {
	SLinkList a;
	StaticList sList;
	sList.InitStaticList(a);
	sList.InsertStaticList(a, 2, 3);
	sList.InsertStaticList(a, 3, 5);
	sList.getAllEle(a);

};
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
