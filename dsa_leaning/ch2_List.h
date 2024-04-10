#pragma once

#include <iostream>
#include <vector>

#include "data_struct.h"

using namespace std;


class ch2_List	//2.2˳���
{
public:
	void InitSeqList(SeqList& L);	//��̬��ʼ��
	void IncreaseSeqSize(SeqList& L, int len);	//���Ӷ�̬����ĳ���
	bool ListInsert(SeqList& L, int i, int e);	//�����������˳���L�ĵ�i��λ�ò�����Ԫ��e
	bool ListDelete(SeqList& L, int i);	//ɾ��,iΪλ��
	int getElem(SeqList& L, int i);	//��λ����,iΪλ��
	int LocateElem(SeqList& L, int e);	//��ֵ����,eΪֵ
	bool GetAllEle(SeqList& L);		//���List��data
};

class ch2_SingleList {		//2.3.1������������
	bool InitList(LinkList& L);		//��ʼ��һ������ͷ�ڵ�ĵ�����
	bool InitHeadList(LinkList& L);			//��ʼ��һ����ͷ���ĵ�����
	LinkList List_HeadInsert(LinkList& L);	//ͷ�巨
};

void ch2_List::InitSeqList(SeqList& L) {	//��̬��ʼ��
	L.data = new int[InitSize]; //����ռ�
	L.length = 0;
	L.Maxsize = InitSize;
	for (int i = 0; i < MaxSize; i++) {
		L.data[i] = 0;
	}
}

bool ch2_List::ListInsert(SeqList& L, int i, int e) {	//�����������˳���L�ĵ�i��λ�ò�����Ԫ��e
	if (i < 1 || L.length + 1 < i) return false;
	if (L.length >= MaxSize) return false;
	for (int j = L.length; j >=i; j--)
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	cout << "�ڵ�" << i << "λ�ɹ�����" << e << endl;
	return true;
}

void ch2_List::IncreaseSeqSize(SeqList& L, int len) {	//���Ӷ�̬����ĳ���
	int* p = L.data;	//ָ�����飬��pָ��L.data�׵�ַ
	cout << "��̬������󳤶�Ϊ��" << L.Maxsize<<endl;
	L.data = new int[L.Maxsize + len];
	for (int i = 0; i < L.length; i++){
		L.data[i] = p[i];
	}
	L.Maxsize = L.Maxsize + len;
	delete p;
	cout << "��̬�������Ӻ����󳤶�Ϊ��" << L.Maxsize << endl;
}

bool ch2_List::ListDelete(SeqList& L, int i) {	//ɾ��,iΪλ��
	if (i<1 || i>L.length) return false;
	cout << "Ҫɾ���ĵ�"<<i<<"λ��ֵΪ��" << L.data[i-1] <<endl;
	for (int j = i; j < L.length; j++){
		L.data[j - 1] = L.data[j];
	}
	L.length--;
	return true;
	
}

int ch2_List::getElem(SeqList& L, int i) {
	cout << "��"<<i<<"λֵΪ" << L.data[i - 1] << endl;
	return L.data[i - 1];
}

int ch2_List::LocateElem(SeqList& L, int e) {
	for (int j = 0; j < L.length; j++){
		if (L.data[j] == e) {
			cout << "Ҫ���ҵ�" << e << "�ڵ�" << j + 1 << "λ" << endl;
			return j + 1;
		}	
	}
	return 0;
}

bool ch2_List::GetAllEle(SeqList& L) {		//���SeqList��data
	printf("����Ϊ��");
	for (int i = 0; i < L.length; i++) {
		cout << L.data[i]<<"  ";
	}
	cout << endl;
	return true;
}

