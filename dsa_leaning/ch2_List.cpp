#include "ch2_List.h"

//2.2-Ë³Ðò±í
int ListBaseFun() {	
	SeqList L;
	ch2_List List;
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
	return 0;
}
//2.3.2-µ¥Á´±í
int singleListFun() {
	ch2_SingleList sList;
	LinkList L;

}
