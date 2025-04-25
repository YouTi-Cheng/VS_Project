//试编写在带头结点的单链表L中删除一个最小值结点的高效算法
// (假设最小值结点是唯一的)

//#include<iostream>
//using namespace std;
//typedef int Elemtype;
//
//typedef struct LNode {
//	Elemtype data;
//	struct LNode* next;
//}LNode, * LinkList;
//
////单链表头插法
//LinkList List_HeadInsert(LinkList& L)
//{
//	//创建头结点
//	LNode* s;
//	L = (LinkList)malloc(sizeof(LNode));
//	L->next = NULL;
//	cout << "请输入创建元素个数" << endl;
//	int num = 0, data;
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
//	LNode* s, * p;
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
//		LNode* p = L->next;
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
////先找到最小值，然后再遍历删除该值的结点(有瑕疵，最小值只有一个
//// 不用遍历两次)
//void Dele_Min(LinkList& L)
//{
//	LNode* p, * q;//p遍历指针,q临时指针
//	p = L;
//	if (p->next == 0)
//	{
//		cout << "单链表为空" << endl;
//		return;
//	}
//	Elemtype min = p->next->data;
//	p = p->next;
//	while (p->next != NULL)
//	{
//		if (p->next->data <min)
//		{
//			min = p->next->data;
//		}
//		p = p->next;
//	}
//	//cout << "最小值为：" << min;
//	Dele_x(L, min);
//
//}
//
//int main()
//{
//	LinkList L;
//	List_TailInsert(L);
//	show(L);
//	Dele_Min(L);
//	show(L);
//}