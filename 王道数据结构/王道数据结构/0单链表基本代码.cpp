#include<iostream>
using namespace std;
typedef int Elemtype;

typedef struct LNode {
	Elemtype data;
	struct LNode* next;
}LNode,*LinkList;

//单链表头插法
LinkList List_HeadInsert(LinkList &L) 
{
	//创建头结点
	LNode* s;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	cout << "请输入创建元素个数" << endl;
	int num = 0,data;
	cin >> num;
	cout << "请依次输入各元素值" << endl;
	for (int i = 0; i < num; i++)
	{
		cin >> data;
		s = (LinkList)malloc(sizeof(LNode));
		s->data = data;
		s->next = L->next;
		L->next = s;
	}
	return L;
}

//单链表尾插法
LinkList List_TailInsert(LinkList& L)
{
	//创建头结点
	LNode* s,*p;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	p = L;
	cout << "请输入创建元素个数" << endl;
	int num = 0, data;
	cin >> num;
	cout << "请依次输入各元素值" << endl;
	for (int i = 0; i < num; i++)
	{
		cin >> data;
		s = (LinkList)malloc(sizeof(LNode));
		s->data = data;
		p->next = s;
		p = p->next;
	}
	p->next = NULL;
	return L;
}

//显示链表元素值
void show(LinkList L)
{
	if (L->next == NULL)
	{
		cout << "链表为空" << endl;
	}
	else {
		LNode* p=L->next;
		while (p != NULL)
		{
			cout << p->data << "    ";
			p = p->next;
		}
	}
}

//计算链表长度
int Length(LinkList L)
{
	LNode* p = L;
	int i = 0;
	while (p->next != NULL)
	{
		p = p->next;
		i++;
	}
	return i;
}