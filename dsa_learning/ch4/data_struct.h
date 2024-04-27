#pragma once


typedef struct {        //C-串的定长结构
    char ch[10];
    int length;
}SString;

typedef struct {        //C-串的动态分配
    char* ch;
    int length;
}HString;

typedef struct StringNode {      //串的链式存储
    char ch;
    struct StringNode* next;
} StringNode,*String;




