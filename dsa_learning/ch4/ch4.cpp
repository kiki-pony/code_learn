// ch4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。



//重要！！！
//使用C语言完成，不使用C++中的string类 

#include <iostream>

#include "data_struct.h"

using namespace std;

int Index_Simple(SString S, SString T);           //朴素模式匹配算法
int Index_KMP(SString S, SString T,int next[]);              //KMP算法
void get_next(SString T, int next[]);            //next数组获取
void get_nextVal(SString T, int nextval[]);      //进一步优化KMP算法

int main()
{
    string str = "abcdefg";     //C++风格
    SString S = {"ababaaabc",9};
    SString T = {"abc",3};
    int next[] = {0,1,1};
    cout <<  Index_Simple(S, T)<<endl;
    cout << Index_KMP(S, T, next)<<endl;
}

int Index_Simple(SString S, SString T) {
    int i=0, j = 0;  //序号从0开始
    while (j <= S.length && i < T.length) {
        if (S.ch[j] == T.ch[i]) {
            ++i; ++j;
        }
        else {
            j = j - i + 1;
            i = 0;
        }
    }
    if (i >= T.length) return j - T.length + 1 ;  //返回位序，从1开始
    else return 0;
}

int Index_KMP(SString S, SString T, int next[]) {
    int i = 1, j = 1;   //序号从1开始，next=0对应第一个前一位
    while (j <= S.length && i <= T.length) {
        if (S.ch[j-1] == T.ch[i-1]|| i == 0) {  //数组下标从0开始的
            ++i; ++j;
        }
        else {
            i = next[i-1];
        }
    }
    if (i > T.length) return j - T.length;
    else return 0;
}

void get_next(SString T, int next[]) {
    int i = 1, j = 0;           //i为next下标，从1开始记录；j为T的下标从0开始
    next[0] = 1;
    while (i < T.length) {
        if (j == 0 || T.ch[i] == T.ch[j]) {
            ++i; ++j;
            next[i] = j;
        }
        else {
            j = next[j];
        }
    }

};

void get_nextVal(SString T, int nextval[]) {

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
