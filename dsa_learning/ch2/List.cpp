#include "List.h"
#include <stdio.h>

//顺序表
//动态初始化
void List::InitSeqList(SeqList& L) {	
	L.data = new int[InitSize]; //分配空间
	L.length = 0;
	L.Maxsize = InitSize;
	for (int i = 0; i < MaxSize; i++) {
		L.data[i] = 0;
	}
}

//插入操作，在顺序表L的第i个位置插入新元素e
bool List::ListInsert(SeqList& L, int i, int e) {	
	if (i < 1 || L.length + 1 < i) return false;
	if (L.length >= MaxSize) return false;
	for (int j = L.length; j >= i; j--)
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	cout << "在第" << i << "位成功插入" << e << endl;
	return true;
}

//增加动态数组的长度
void List::IncreaseSeqSize(SeqList& L, int len) {	
	int* p = L.data;	//指针数组，将p指向L.data首地址
	cout << "动态数组最大长度为：" << L.Maxsize << endl;
	L.data = new int[L.Maxsize + len];
	for (int i = 0; i < L.length; i++) {
		L.data[i] = p[i];
	}
	L.Maxsize = L.Maxsize + len;
	delete p;
	cout << "动态数组增加后的最大长度为：" << L.Maxsize << endl;
}

//删除,i为位序
bool List::ListDelete(SeqList& L, int i) {	
	if (i<1 || i>L.length) return false;
	cout << "要删除的第" << i << "位的值为：" << L.data[i - 1] << endl;
	for (int j = i; j < L.length; j++) {
		L.data[j - 1] = L.data[j];
	}
	L.length--;
	return true;

}

int List::getElem(SeqList& L, int i) {
	cout << "第" << i << "位值为" << L.data[i - 1] << endl;
	return L.data[i - 1];
}

int List::LocateElem(SeqList& L, int e) {
	for (int j = 0; j < L.length; j++) {
		if (L.data[j] == e) {
			cout << "要查找的" << e << "在第" << j + 1 << "位" << endl;
			return j + 1;
		}
	}
	return 0;
}

bool List::GetAllEle(SeqList& L) {		//输出SeqList的data
	printf("顺序表data-数组为：");
	for (int i = 0; i < L.length; i++) {
		cout << L.data[i] << "  ";
	}
	cout << endl;
	return true;
}



//单链表
//初始化一个不带头节点的单链表
bool SingleList::InitList(LinkList& L) {
	L = NULL;
	return true;
}

//初始化一个带头节点的单链表
bool SingleList::InitHeadList(LinkList& L) {
	L = new LNode;
	if (L == NULL) return false;
	L->next = NULL;
	L->data = -1;
	return true;
}

//头插法，输入-1结束
LinkList SingleList::List_HeadInsert(LinkList& L) {
	int x;
	cin >> x;
	while (x != -1) {
		InsertNextNode(L, x);
		cin >> x;
	}
	return L;
}

//插入，在指定节点后插入元素
bool SingleList::InsertNextNode(LNode* p, int e) {
	if (p == NULL) return false;
	LNode* s = new LNode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

//插入，在指定节点前插入元素
bool SingleList::InsertPriorNode(LNode* p, int e) {
	if (p == NULL) return false;
	LNode* s = new LNode;
	s->data = p->data;
	s->next = p->next;
	p->next = s;
	p->data = e;
	return true;
}

//插入元素到单链表，带头结点的单链表
bool SingleList::ListInsert(LinkList& L, int i, int e) {
	if (i < 1) return false;
	LNode* p = L;
	int j = 0;
	while (p != NULL && j < i -1) {
		p = p->next;
		j++;
	}
	return InsertNextNode(p, e);
}

// 删除，按位序删除
bool SingleList::ListDelete(LinkList& L, int i) {
	if (i < 1||L==NULL) return false;
	LNode* p = L;
	int j = 0;
	while (p != NULL && j < i -1) {
		p = p->next;
		j++;
	}
	if (p->next == NULL || p == NULL) return false;
	cout << "要删除的元素为：" << p->next->data<<endl;
	p->next = p->next->next;
	return true;
}

//查找，按位查找，带头结点
LNode* SingleList::GetElem(LinkList& L, int i) {
	if (i < 1 || L == NULL) return NULL;
	LNode* p = L;
	int j = 0;
	while (p != NULL && j < i) {
		p = p->next;
		j++;
	}
	if (p == NULL) return NULL;
	cout << "按位查找，第" << i << "位值为:" << p->data << endl;
	return p;
}

//查找，按值查找
LNode* SingleList::LocateElem(LinkList& L, int e) {
	if (L == NULL) return NULL;
	LNode* p = L;
	int j = 0;
	while (p != NULL&& p ->data!=e) {
		p = p->next;
		j++;
	}
	if (p == NULL) return NULL;
	cout << "按值查找，值为:" << e << "，在第" << j <<"位"<< endl;
	return p;
}

//输出data
bool SingleList::GetAllEle(LinkList& L) {
	cout << "带头结点的单链表为：";
	LNode* p = L;
	while (p != NULL) {
		cout << p->data<<" ";
		p = p->next;
	}
	cout << endl;
	return true;
}


//双链表
//初始化双链表，带头结点，
bool DobuleList::InitDLinkList(DLinkList& L) {
	L = new DNode;
	if (L == NULL) return false;
	L->prior = NULL;  //始终指向NULL
	L->next = NULL;
	L->data = -1;
	return true;
}
//插入元素到指定位置
bool DobuleList::DLinkInsert(DLinkList& L, int i, int e) {
	DNode* p = new DNode;
	p = L;
	int j = 1;
	DNode* s = new DNode;
	s->data = e;
	if (L->next == NULL) {//第一个节点
		p->next = s;
		s->prior = p;
		s->next = NULL;
		return true;
	}
	p = p->next;
	while (p->prior != NULL && j < i - 1) {
		p = p->next;
		j++;
	}
	if (p == NULL)return false;
	if (p->next == NULL) {  //最后一个节点
		p->next = s;
		s->prior = p;
		s->next = NULL;
		return true;
	}
	s->next = p->next;
	p->next->prior = s;
	s->prior = p;
	p->next = s;
	return true;
}
//删除指定位置元素
bool DobuleList::DLinkDelete(DLinkList& L, int i) {
	if (L->next == NULL || i < 1)return false;
	DNode* p = new DNode;
	p = L->next;
	int j = 1;
	while (p->prior != NULL && j < i) {
		p = p->next;
		j++;
	}
	if (p == NULL) return false;
	if (p->next == NULL) {  //最后一个节点
		p->prior->next = NULL;
		return true;
	}
	p->next->prior = p->prior;
	p->prior->next = p->next;
	return true;
}

bool DobuleList::GetAllElem(DLinkList& L) {
	printf("双链表为：");
	DNode* p = new DNode;
	p = L;
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	return true;
}




//循环链表
bool CircleList::InitCircleSingleList(LinkList& L) {
	L = new LNode;
	if (L == NULL) return false;
	L->next = NULL;
	return true;
}
inline bool CircleList::EmptyCircleSingleList(LinkList& L) {
	return L->next == NULL;
}
inline bool CircleList::isTailCircleSingleList(LinkList& L,LNode *p) {
	return p->next == L;
}
bool CircleList::InitCircleDList(DLinkList& L) {
	L = new DNode;
	if (L == NULL) return false;
	L->next = L;
	L->prior = L;
	return true;
}
inline bool CircleList::EmptyCircleDList(DLinkList& L) {
	return L->next == L;
}
inline bool CircleList::isTailCircleDList(DLinkList& L, DNode* p) {
	return p->next == L;
}
bool CircleList::InsertNextCDNode(DNode* p, DNode* s) {
	if (p == NULL) return false;
	s->next = p->next;
	p->next->prior = s; 
	s->prior = p;
	p->next = s;
	return true;
}
bool CircleList::DeleteNextCDNode(DNode* p) {
	if (p == NULL) return false;
	DNode* q = p->next;
	p->next = q->next;
	q->next->prior = p;
	delete q;
	return true;
}



//静态链表
bool StaticList::InitStaticList(SLinkList &L) {	//把a[0]的next设为-1,把其他的next设为-2表示空闲
	L[0] = new SNode;
	L[0]->next = -1;
	L[0]->data = 0;
	return true;
}
bool StaticList::InsertStaticList(SLinkList& L, int n, int e) {
	if (n <= 1) return false;
	SNode* p = new SNode;
	L[n - 1] = p;
	L[n - 1]->data = e;
	L[n - 1]->next = -1;
	L[n - 2]->next = n - 1;
	return true;
}
bool StaticList::getAllEle(SLinkList& L) {
	if (L == NULL) return false;
	int j = 0;
	SNode* p = *L;
	do {
		cout << p->data << " ";
		p = L[p->next];
		j++;
	} while (L[j]->next != -1);
	cout << L[j]->data;
	return true;
}

