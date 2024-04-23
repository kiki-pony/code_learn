#include<iostream>

#include "queue.h"
#include "data_struct.h"

using namespace std;

void queueFun::InitQueue(SqQueue& Q) {
	Q.rear = Q.front = 0;
}
bool queueFun::EnQueue(SqQueue& Q, int x) {
	if (Q.rear > MaxSize) return false;
	Q.data[Q.rear] = x;
	Q.rear++;
	return true;
}
bool queueFun::DeQueue(SqQueue &Q, int& x) {
	if (Q.rear == Q.front) return false;
	x = Q.data[Q.front];
	Q.front = (Q.front + 1);
	return true;
}

inline bool queueFun::EmptyQueue(SqQueue& Q) {
	return Q.rear == Q.front;
}
inline bool queueFun::FullQueue(SqQueue& Q) {
	return Q.rear  == MaxSize+1;
}
void queueFun::GetAllEle(SqQueue& Q) {
	int i = Q.front;
	while (i != Q.rear) {
		cout << Q.data[i]<<" ";
		i++;
	}
	cout << endl;
}

void circleQueueFun::InitCircleQueue(SqQueue& Q) {
	Q.front = 0;
	Q.rear = 0;
}

/*
* ѭ��������Ӳ���
* ���ֲ�����ʹ���һ��λ���޷�ʹ�ã���ʹ�������������:
*	1. ʹ�ö���Ԫ�ع�ʽ��(Q.rear+MaxSize-Q.front)%MaxSize �ж�
*	2. ��SqQueue���һ��size�����Ա�Ƕ��еĳ���
*	3. ��SqQueue���һ��tag�����Ա��������е�ɾ��/��ӣ�ֻ��ɾ���Ż�ӿգ���ӲŻ����
* 
*/
bool circleQueueFun::EnCircleQueue(SqQueue& Q,int x) {
	/*��������:
	*	1. (Q.rear+MaxSize-Q.front)%MaxSize == MaxSize
	*	2. size == MaxSize
	*	3. Q.front==Q.rear&& tag == 1
	*/	
	if ((Q.rear + 1) % MaxSize == Q.front)return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % MaxSize;
	return true;
}
bool circleQueueFun::DeCircleQueue(SqQueue& Q, int& x) {
	if (Q.rear == Q.front) return false;
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}
inline bool circleQueueFun::EmptyCircleQueue(SqQueue& Q) {
	return Q.front == Q.rear;
}
inline bool circleQueueFun::FullCircleQueue(SqQueue& Q) {
	return (Q.rear + 1) % MaxSize == Q.front;
}
bool circleQueueFun::GetAllCircleEle(SqQueue& Q) {
	if (EmptyCircleQueue(Q)) return false;
	int i = Q.front % MaxSize;
	while (i != Q.rear % MaxSize) {
		cout << Q.data[i] << " ";
		i++;
	}
	cout << endl;
	return true;
}



void linkQueueFun::InitLinkQueue(LinkQueue& Q) {
	Q.front  = new LinkNode;
	Q.rear = new LinkNode;
	Q.front->data = -1;
	Q.rear->data = -1;
	Q.front->next = Q.rear;
	Q.rear->next = NULL;
}

bool linkQueueFun::EmptyLinkQueue(LinkQueue& Q) {
	return Q.front->next == Q.rear;
}
bool linkQueueFun::EnLinkQueue(LinkQueue& Q, int x) {
	LinkNode* s = new LinkNode;
	s->data = x;
	s->next = NULL;
	Q.rear->next = s;
	Q.rear = s;
	return true;
}
bool linkQueueFun::DeLinkQueue(LinkQueue& Q, int &x) {
	if (EmptyLinkQueue(Q)) return false;
	LinkNode* p = Q.front->next->next;
	x = p->data;
	cout << "��ͷ������ʽ����ɾ����Ԫ��Ϊ��" << x<<endl;
	Q.front->next = p->next;
	delete(p);
	return true;
}
bool linkQueueFun::GetAllCircalEle(LinkQueue& Q) {
	LinkNode* p = Q.front->next;
	if (EmptyLinkQueue(Q)) return false;
	cout << "��ͷ������ʽ���е�ֵΪ��";
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
	return true;
}


