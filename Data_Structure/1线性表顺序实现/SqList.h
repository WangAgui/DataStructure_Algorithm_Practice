/*                线性表动态内存分配顺序存储结构               */

#include "common.h"
#include <cstdlib>

#define ElemType int
 
#define LIST_INIT_SIZE	10	//线性表存储空间的初始分配量
#define LISTINCREMENT	10	//线性表存储空间的分配增量
 
typedef struct{
	ElemType* elem;	//存储空间基址
	int length;			//当前长度
	int listsize;		//当前分配的存储容量（以sizeof(ElemType)为单位）
} SqList;


Status InitList(SqList &L);
	//操作结果：构造一个空的线性表L。
 
Status DestroyList(SqList &L);
	//初始条件：线性表L已存在。
	//操作结果：销毁线性表L。
 
 
bool ListEmpty(SqList L);
	//初始条件：线性表L已存在。
	//操作结果：若L为空表，则返回TRUE，否则返回FALSE。
 
int ListLength(SqList L);
	//初始条件：线性表L已存在。
	//操作结果：返回L中数据元素的个数。
 
ElemType GetElem(SqList L, int i);
	//初始条件：线性表L已存在，1<=i<=ListLength(L)。
 
Status ListInsert(SqList &L, int i, ElemType e);
	//初始条件：线性表L已存在，1<=i<=ListLength(L)+1.
	//操作结果：在L中第i个位置之前插入新的数据元素e，L的长度加1.
 
ElemType ListDelete(SqList &L, int i);
	//初始条件：线性表L已存在且非空，1<=i<=ListLength(L).
	//操作结果：删除L的第i个数据元素，并返回删除的值 
 

void PrintList(SqList L);
	//将线性表内部所有数据打印 
