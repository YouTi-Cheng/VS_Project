//在带头结点的单链表L中，删除所有值为x的结点，并释放其空间，
// 假设值为x的结点不唯一，试编写算法以实现上述操作。


//#include<iostream>
//using namespace std;
//typedef int Elemtype;
//
//typedef struct LNode {
//	Elemtype data;
//	struct LNode* next;
//}LNode,*LinkList;
//
////单链表头插法
//LinkList List_HeadInsert(LinkList &L) 
//{
//	//创建头结点
//	LNode* s;
//	L = (LinkList)malloc(sizeof(LNode));
//	L->next = NULL;
//	cout << "请输入创建元素个数" << endl;
//	int num = 0,data;
//	cin >> num;
//	cout << "请依次输入各元素值" << endl;
//	for (int i = 0; i < num; i++)
//	{
//		cin >> data;
//		s = (LinkList)malloc(sizeof(LNode));
//		s->data = data;
//		s->next = L->next;
//		L->next = s;
//	}
//	return L;
//}
//
////单链表尾插法
//LinkList List_TailInsert(LinkList& L)
//{
//	//创建头结点
//	LNode* s,*p;
//	L = (LinkList)malloc(sizeof(LNode));
//	L->next = NULL;
//	p = L;
//	cout << "请输入创建元素个数" << endl;
//	int num = 0, data;
//	cin >> num;
//	cout << "请依次输入各元素值" << endl;
//	for (int i = 0; i < num; i++)
//	{
//		cin >> data;
//		s = (LinkList)malloc(sizeof(LNode));
//		s->data = data;
//		p->next = s;
//		p = p->next;
//	}
//	p->next = NULL;
//	return L;
//}
//
////显示链表元素值
//void show(LinkList L)
//{
//	if (L->next == NULL)
//	{
//		cout << "链表为空" << endl;
//	}
//	else {
//		LNode* p=L->next;
//		while (p != NULL)
//		{
//			cout << p->data << "    ";
//			p = p->next;
//		}
//	}
//}
//
////依次遍历，然后删除
//void Dele_x(LinkList& L,Elemtype x)
//{
//	LNode* p,*q;//p遍历指针,q临时指针
//	p = L;
//	while (p->next != NULL)
//	{
//		if (p->next->data == x)
//		{
//			q = p->next;
//			p->next = q->next;
//			free(q);
//		}
//		else {
//			p = p->next;
//		}
//	}
//}
//
//int main()
//{
//	LinkList L;
//	List_TailInsert(L);
//	show(L);
//	int x;
//	cout << "请输入要删除的值" << endl;
//	cin >> x;
//	Dele_x(L, x);
//	show(L);
//}