//�ڴ�ͷ���ĵ�����L�У�ɾ������ֵΪx�Ľ�㣬���ͷ���ռ䣬
// ����ֵΪx�Ľ�㲻Ψһ���Ա�д�㷨��ʵ������������


//#include<iostream>
//using namespace std;
//typedef int Elemtype;
//
//typedef struct LNode {
//	Elemtype data;
//	struct LNode* next;
//}LNode,*LinkList;
//
////������ͷ�巨
//LinkList List_HeadInsert(LinkList &L) 
//{
//	//����ͷ���
//	LNode* s;
//	L = (LinkList)malloc(sizeof(LNode));
//	L->next = NULL;
//	cout << "�����봴��Ԫ�ظ���" << endl;
//	int num = 0,data;
//	cin >> num;
//	cout << "�����������Ԫ��ֵ" << endl;
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
////������β�巨
//LinkList List_TailInsert(LinkList& L)
//{
//	//����ͷ���
//	LNode* s,*p;
//	L = (LinkList)malloc(sizeof(LNode));
//	L->next = NULL;
//	p = L;
//	cout << "�����봴��Ԫ�ظ���" << endl;
//	int num = 0, data;
//	cin >> num;
//	cout << "�����������Ԫ��ֵ" << endl;
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
////��ʾ����Ԫ��ֵ
//void show(LinkList L)
//{
//	if (L->next == NULL)
//	{
//		cout << "����Ϊ��" << endl;
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
////���α�����Ȼ��ɾ��
//void Dele_x(LinkList& L,Elemtype x)
//{
//	LNode* p,*q;//p����ָ��,q��ʱָ��
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
//	cout << "������Ҫɾ����ֵ" << endl;
//	cin >> x;
//	Dele_x(L, x);
//	show(L);
//}