//����һ������n(nΪż��)�Ĳ�������ĵ������ҽ��ֵ������0��
// ����㷨��������������������͡�
// �����Ͷ���Ϊһ�����ֵ�����������ֵ֮�ͣ����ڵ�i�����(��0��ʼ)��
//���������Ϊ��n - i - 1����㡣Ҫ��:
//1)�����㷨�Ļ������˼�롣
//2)�������˼�룬����C�� C++���������㷨���ؼ�֮������ע�͡�
//3)˵������㷨��ʱ�临�ӶȺͿռ临�Ӷȡ�


//�㷨˼�룬��n/2�����ǰ��������������Ľ��β�巨�ӻض�������
//�ٴ���Ԫ���Ͷ�����㣨n/2��㣩���ù�����㣬���α������ҵ���ָ��
//��ָ���ֵ�����ֵ

#include<iostream>
using namespace std;
typedef int Elemtype;

typedef struct LNode {
	Elemtype data;
	struct LNode* next;
}LNode,*LinkList;

//������ͷ�巨
LinkList List_HeadInsert(LinkList &L) 
{
	//����ͷ���
	LNode* s;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	cout << "�����봴��Ԫ�ظ���" << endl;
	int num = 0,data;
	cin >> num;
	cout << "�����������Ԫ��ֵ" << endl;
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

//������β�巨
LinkList List_TailInsert(LinkList& L)
{
	//����ͷ���
	LNode* s,*p;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	p = L;
	cout << "�����봴��Ԫ�ظ���" << endl;
	int num = 0, data;
	cin >> num;
	cout << "�����������Ԫ��ֵ" << endl;
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

//��ʾ����Ԫ��ֵ
void show(LinkList L)
{
	if (L->next == NULL)
	{
		cout << "����Ϊ��" << endl;
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