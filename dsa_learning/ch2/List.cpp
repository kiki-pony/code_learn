#include "List.h"
#include <stdio.h>

//˳���
//��̬��ʼ��
void List::InitSeqList(SeqList& L) {	
	L.data = new int[InitSize]; //����ռ�
	L.length = 0;
	L.Maxsize = InitSize;
	for (int i = 0; i < MaxSize; i++) {
		L.data[i] = 0;
	}
}

//�����������˳���L�ĵ�i��λ�ò�����Ԫ��e
bool List::ListInsert(SeqList& L, int i, int e) {	
	if (i < 1 || L.length + 1 < i) return false;
	if (L.length >= MaxSize) return false;
	for (int j = L.length; j >= i; j--)
	{
		L.data[j] = L.data[j - 1];
	}
	L.data[i - 1] = e;
	L.length++;
	cout << "�ڵ�" << i << "λ�ɹ�����" << e << endl;
	return true;
}

//���Ӷ�̬����ĳ���
void List::IncreaseSeqSize(SeqList& L, int len) {	
	int* p = L.data;	//ָ�����飬��pָ��L.data�׵�ַ
	cout << "��̬������󳤶�Ϊ��" << L.Maxsize << endl;
	L.data = new int[L.Maxsize + len];
	for (int i = 0; i < L.length; i++) {
		L.data[i] = p[i];
	}
	L.Maxsize = L.Maxsize + len;
	delete p;
	cout << "��̬�������Ӻ����󳤶�Ϊ��" << L.Maxsize << endl;
}

//ɾ��,iΪλ��
bool List::ListDelete(SeqList& L, int i) {	
	if (i<1 || i>L.length) return false;
	cout << "Ҫɾ���ĵ�" << i << "λ��ֵΪ��" << L.data[i - 1] << endl;
	for (int j = i; j < L.length; j++) {
		L.data[j - 1] = L.data[j];
	}
	L.length--;
	return true;

}

int List::getElem(SeqList& L, int i) {
	cout << "��" << i << "λֵΪ" << L.data[i - 1] << endl;
	return L.data[i - 1];
}

int List::LocateElem(SeqList& L, int e) {
	for (int j = 0; j < L.length; j++) {
		if (L.data[j] == e) {
			cout << "Ҫ���ҵ�" << e << "�ڵ�" << j + 1 << "λ" << endl;
			return j + 1;
		}
	}
	return 0;
}

bool List::GetAllEle(SeqList& L) {		//���SeqList��data
	printf("˳���data-����Ϊ��");
	for (int i = 0; i < L.length; i++) {
		cout << L.data[i] << "  ";
	}
	cout << endl;
	return true;
}



//������
//��ʼ��һ������ͷ�ڵ�ĵ�����
bool SingleList::InitList(LinkList& L) {
	L = NULL;
	return true;
}

//��ʼ��һ����ͷ�ڵ�ĵ�����
bool SingleList::InitHeadList(LinkList& L) {
	L = new LNode;
	if (L == NULL) return false;
	L->next = NULL;
	L->data = -1;
	return true;
}

//ͷ�巨������-1����
LinkList SingleList::List_HeadInsert(LinkList& L) {
	int x;
	cin >> x;
	while (x != -1) {
		InsertNextNode(L, x);
		cin >> x;
	}
	return L;
}

//���룬��ָ���ڵ�����Ԫ��
bool SingleList::InsertNextNode(LNode* p, int e) {
	if (p == NULL) return false;
	LNode* s = new LNode;
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}

//���룬��ָ���ڵ�ǰ����Ԫ��
bool SingleList::InsertPriorNode(LNode* p, int e) {
	if (p == NULL) return false;
	LNode* s = new LNode;
	s->data = p->data;
	s->next = p->next;
	p->next = s;
	p->data = e;
	return true;
}

//����Ԫ�ص���������ͷ���ĵ�����
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

// ɾ������λ��ɾ��
bool SingleList::ListDelete(LinkList& L, int i) {
	if (i < 1||L==NULL) return false;
	LNode* p = L;
	int j = 0;
	while (p != NULL && j < i -1) {
		p = p->next;
		j++;
	}
	if (p->next == NULL || p == NULL) return false;
	cout << "Ҫɾ����Ԫ��Ϊ��" << p->next->data<<endl;
	p->next = p->next->next;
	return true;
}

//���ң���λ���ң���ͷ���
LNode* SingleList::GetElem(LinkList& L, int i) {
	if (i < 1 || L == NULL) return NULL;
	LNode* p = L;
	int j = 0;
	while (p != NULL && j < i) {
		p = p->next;
		j++;
	}
	if (p == NULL) return NULL;
	cout << "��λ���ң���" << i << "λֵΪ:" << p->data << endl;
	return p;
}

//���ң���ֵ����
LNode* SingleList::LocateElem(LinkList& L, int e) {
	if (L == NULL) return NULL;
	LNode* p = L;
	int j = 0;
	while (p != NULL&& p ->data!=e) {
		p = p->next;
		j++;
	}
	if (p == NULL) return NULL;
	cout << "��ֵ���ң�ֵΪ:" << e << "���ڵ�" << j <<"λ"<< endl;
	return p;
}

//���data
bool SingleList::GetAllEle(LinkList& L) {
	cout << "��ͷ���ĵ�����Ϊ��";
	LNode* p = L;
	while (p != NULL) {
		cout << p->data<<" ";
		p = p->next;
	}
	cout << endl;
	return true;
}


//˫����
//��ʼ��˫������ͷ��㣬
bool DobuleList::InitDLinkList(DLinkList& L) {
	L = new DNode;
	if (L == NULL) return false;
	L->prior = NULL;  //ʼ��ָ��NULL
	L->next = NULL;
	L->data = -1;
	return true;
}
//����Ԫ�ص�ָ��λ��
bool DobuleList::DLinkInsert(DLinkList& L, int i, int e) {
	DNode* p = new DNode;
	p = L;
	int j = 1;
	DNode* s = new DNode;
	s->data = e;
	if (L->next == NULL) {//��һ���ڵ�
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
	if (p->next == NULL) {  //���һ���ڵ�
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
//ɾ��ָ��λ��Ԫ��
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
	if (p->next == NULL) {  //���һ���ڵ�
		p->prior->next = NULL;
		return true;
	}
	p->next->prior = p->prior;
	p->prior->next = p->next;
	return true;
}

bool DobuleList::GetAllElem(DLinkList& L) {
	printf("˫����Ϊ��");
	DNode* p = new DNode;
	p = L;
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	return true;
}




//ѭ������
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



//��̬����
bool StaticList::InitStaticList(SLinkList &L) {	//��a[0]��next��Ϊ-1,��������next��Ϊ-2��ʾ����
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

