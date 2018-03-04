#include<cstdio>
#include<iostream>
#include<string>
#include<stdlib.h>
#define ERROR -1
#define OK 1
using namespace std;
typedef int ElemType Status;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList
