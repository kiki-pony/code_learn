#pragma once


typedef struct {        //C-���Ķ����ṹ
    char ch[10];
    int length;
}SString;

typedef struct {        //C-���Ķ�̬����
    char* ch;
    int length;
}HString;

typedef struct StringNode {      //������ʽ�洢
    char ch;
    struct StringNode* next;
} StringNode,*String;




