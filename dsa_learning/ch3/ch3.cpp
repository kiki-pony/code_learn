// ch3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "data_struct.h"
#include "stack.h"
#include "queue.h"

using namespace std;

int linkStackBaseFun();
int queueBaseFun();
int circleQueueBaseFun();
int linkQueueBaseFun();
int stackApplyFun();


int main()
{
    stackApplyFun();
}


int linkStackBaseFun() {
    LinkStack S;
    linkStackFun lStack;
    lStack.InitLinkStack(S);
    lStack.PushLinkStack(S, 1);
    lStack.PushLinkStack(S, 3);
    lStack.PushLinkStack(S, 6);
    lStack.PushLinkStack(S, 9);
    lStack.GetAllEle(S);
    int x = 0;
    lStack.PopStack(S, x);
    cout << "链栈出栈值为：" << x << endl;
    lStack.GetAllEle(S);
    return 0;
};

int queueBaseFun() {
    SqQueue Q;
    queueFun  queue;
    queue.InitQueue(Q);
    queue.EnQueue(Q, 3);
    queue.EnQueue(Q, 6);
    queue.EnQueue(Q, 7);
    queue.EnQueue(Q, 8);
    queue.EnQueue(Q, 5);
    queue.GetAllEle(Q);
    int x = 0; queue.DeQueue(Q, x);
  cout<<"出队元素为：" <<x <<endl;
  queue.GetAllEle(Q);
    return 0;
}
int circleQueueBaseFun() {
    circleQueueFun cQueue;
    SqQueue Q;
    cQueue.InitCircleQueue(Q);
    cQueue.EnCircleQueue(Q, 3);
    cQueue.EnCircleQueue(Q, 4);
    cQueue.EnCircleQueue(Q, 5);
    cQueue.EnCircleQueue(Q, 6);
    cQueue.EnCircleQueue(Q, 7);
    cQueue.EnCircleQueue(Q, 8);
    cQueue.EnCircleQueue(Q, 9);
    cQueue.EnCircleQueue(Q, 10);
    cQueue.EnCircleQueue(Q, 11);
    cQueue.EnCircleQueue(Q, 12);
    cQueue.EnCircleQueue(Q, 13);
    cQueue.EnCircleQueue(Q, 14);


    cQueue.GetAllCircleEle(Q);
    int x = 0;
    cQueue.DeCircleQueue(Q, x);
    cout << x << "     " << endl;
    cQueue.GetAllCircleEle(Q);
    return 0;
}
 int linkQueueBaseFun() {
    LinkQueue Q;
    linkQueueFun lQueue;
    lQueue.InitLinkQueue(Q);
    lQueue.EnLinkQueue(Q, 1);
    lQueue.EnLinkQueue(Q, 2);
    lQueue.EnLinkQueue(Q, 3);
    lQueue.GetAllCircalEle(Q);
    int x = 0;
    lQueue.DeLinkQueue(Q, x);
    lQueue.GetAllCircalEle(Q);

    return 0;

}

 int stackApplyFun() {
     stackApply stackA;
     //string str = "{[()]}";
     char str[] = "{[()]}(";
     bool result = false;
     result = stackA.bracketCheck(str,7);
     cout << result;
     return 0;
 }

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
