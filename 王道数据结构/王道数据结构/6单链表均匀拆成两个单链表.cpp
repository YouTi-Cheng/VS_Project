//��C = { a1��b1��a2��b2����an,bn}Ϊ���Ա�
//���ô�ͷ����hc�������ţ����һ���͵��㷨��������
//Ϊ�������Ա�ʹ��
//A = {a1��a2,��an }��B = {bn����b2��b1)

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
//void DeleBet_AB(LinkList& L, Elemtype a, Elemtype b)
//{
//
//}
