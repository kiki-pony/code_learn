//2.2���Ա��˳���ʾ

#pragma once

#include <iostream>
#include <vector>

#include "data_struct.h"

using namespace std;

//2.2˳���
class List	
{
public:
	void InitSeqList(SeqList& L);	//��̬��ʼ��
	void IncreaseSeqSize(SeqList& L, int len);	//���Ӷ�̬����ĳ���
	bool ListInsert(SeqList& L, int i, int e);	//�����������˳���L�ĵ�i��λ�ò�����Ԫ��e
	bool ListDelete(SeqList& L, int i);	//ɾ��,iΪλ��ͷ�ڵ㲻��λ��
	int getElem(SeqList& L, int i);	//��λ����,iΪλ��
	int LocateElem(SeqList& L, int e);	//��ֵ����,eΪֵ
	bool GetAllEle(SeqList& L);		//���List��data
};

//2.3.2������
class SingleList	
{
public:
	bool InitList(LinkList& L);		//��ʼ��һ������ͷ�ڵ�ĵ�����
	bool InitHeadList(LinkList& L);			//��ʼ��һ����ͷ�ڵ�ĵ�����
	LinkList List_HeadInsert(LinkList& L);	//ͷ�巨������-1����
	bool InsertNextNode(LNode* p, int e);	//���룬��ָ���ڵ�����Ԫ��
	bool InsertPriorNode(LNode* p, int e);	//���룬��ָ���ڵ�ǰ����Ԫ��
	bool ListInsert(LinkList& L, int i, int e);	//����Ԫ�ص���������ͷ���ĵ�����
	bool ListDelete(LinkList& L, int i);	//ɾ������λ��ɾ��
	LNode* GetElem(LinkList& L, int i);	//���ң���λ���ң���ͷ���
	LNode* LocateElem(LinkList& L, int e);	//���ң���ֵ����
	bool GetAllEle(LinkList& L);	//���data
};

//2.3.3˫����
class DobuleList {
public:
	bool InitDLinkList(DLinkList& L);
	bool DLinkInsert(DLinkList& L, int i, int e);
	bool DLinkDelete(DLinkList& L, int i);
	bool GetAllElem(DLinkList& L);
};

//2.3.4ѭ������
class CircleList {
public:
	bool InitCircleSingleList(LinkList& L);	//��ʼ��һ��ѭ��������
	bool EmptyCircleSingleList(LinkList& L);	//ѭ���������п�
	bool isTailCircleSingleList(LinkList& L,LNode *p);	//�ж�p�ǲ��Ǳ�β�ڵ�
	bool InitCircleDList(DLinkList& L);	//��ʼ��һ��ѭ��˫����
	bool EmptyCircleDList(DLinkList& L);	//ѭ��˫�����п�
	bool isTailCircleDList(DLinkList& L, DNode* p);	//�ж�p�ǲ��Ǳ�β�ڵ�
	bool InsertNextCDNode(DNode* p, DNode* s);	//ѭ��˫����p�����s
	bool DeleteNextCDNode(DNode* p);	//ɾ��p�ĺ�̽ڵ�
	
};

//2.3.5��̬����
class StaticList {
public:
	bool InitStaticList(SLinkList& L);	//��ʼ��һ����̬����
	bool InsertStaticList(SLinkList& L, int n, int e);	//����ֵΪe��Ԫ�ص�λ��Ϊn��λ��
	bool getAllEle(SLinkList& L);	
};