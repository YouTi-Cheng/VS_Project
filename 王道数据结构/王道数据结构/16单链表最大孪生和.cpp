//设有一个长度n(n为偶数)的不带买结点的单链表，且结点值都大于0，
// 设计算法求这个单链表的最大孪生和。
// 孪生和定义为一个结点值与其孪生结点值之和，对于第i个结点(从0开始)，
//其孪生结点为第n - i - 1个结点。要求:
//1)给出算法的基本设计思想。
//2)根据设计思想，采用C或 C++语言描述算法，关键之处给出注释。
//3)说明你的算法的时间复杂度和空间复杂度。


//算法思想，在n/2个结点前断链，并将后面的结点尾插法接回断链处，
//再从首元结点和断链结点（n/2结点）设置工作结点，依次遍历，找到两指针
//所指结点值和最大值

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

void FindBroMax(LinkList L)
{

}