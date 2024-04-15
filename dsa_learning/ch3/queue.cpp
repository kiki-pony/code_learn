#include "queue.h"
#include "data_struct.h"

void queueFun::InitQueue(SqQueue& Q) {
	Q.rear = Q.front = 0;
}
bool queueFun::EnQueue(SqQueue& Q, int x) {
	if ((Q.rear + 1)%MaxSize == Q.front) return false;
	Q.data[Q.rear] = x;
	Q.rear = (Q.rear + 1) % MaxSize;
	return true;
}
bool queueFun::DeQueue(SqQueue &Q, int& x) {
	if (Q.rear == Q.front) return false;
	x = Q.data[Q.front];
	Q.front = (Q.front + 1) % MaxSize;
	return true;
}
