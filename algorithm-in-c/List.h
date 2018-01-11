
#ifndef __GuaList_H__
#define __GuaList_H__

#include <stdbool.h>


// ���� �ṹ��, ����
struct NodeStruct;
typedef struct NodeStruct Node;


struct ListStruct;
typedef struct ListStruct List;

typedef int type;

List *
ListCreate(int *element, int numberOfElements);

void
ListLog(List *list);

/*
1.1
����һ�� GuaList �ĳ���
*/
int
ListLength(List *list);

/*
1.2
���һ�� GuaList ���Ƿ����ĳ��Ԫ��
*/
bool
ListContains(List *list, type element);

/*
1.3
�� GuaList ��ĩβ���һ��Ԫ��
*/
void
ListAppend(List *list, type element);

/*
1.4
�� GuaList ��ͷ�����һ��Ԫ��
*/
void
ListPrepend(List *list, type element);

/*
1.5
��һ�� GuaList �в���ĳ��Ԫ��, �����±�(���)
���������, ���� -1
*/
int
ListIndexOfElement(List *list, type element);

/*
1.6
��һ�� GuaList �в���һ��Ԫ��, �±�(���) Ϊ index
�����ǷǷ����(�±���ڳ���)
*/
void
ListInsertElementAtIndex(List *list, type element, int index);

type
ListShift(List *list);

int
ListElementAtIndex(List *list, int index);

void ListRemove(List * list);

#endif
