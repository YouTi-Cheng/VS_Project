////����������˳��ϲ�Ϊһ���µ�����˳�����������
////���˳���
//#include<iostream>
//using namespace std;
//#define MaxSize 50
//class sqList {
//public:
//	int data[MaxSize];
//	int length;
//};
//
////˳����ʼ��
//void InitList(sqList& L)
//{
//	cout << "����˳����Ԫ�ظ���" << endl;
//	cin >> L.length;
//	cout << '\n' << "��������ÿ��Ԫ�ص�ֵ" << endl;
//	for (int i = 0; i < L.length; i++)
//	{
//		cin >> L.data[i];
//	}
//}
//
//
////������ʾԪ�ص�ֵ
//void show(sqList L)
//{
//	for (int i = 0; i < L.length; i++)
//	{
//		cout << L.data[i] << "    ";
//	}
//	if (L.length == 0)
//	{
//		cout << "˳���Ϊ��" << endl;
//	}
//}
////����������˳��ϲ�Ϊһ���µ�����˳�����������
////���˳���
//sqList Merge(sqList L1, sqList L2)
//{
//	//����һ����˳���
//	sqList L3;
//	L3.length = L1.length + L2.length;
//	//��¼L1��L2����λ��
//	int a = 0, b = 0,c=0;
//	while (a < L1.length && b < L2.length)//L1.L2��û������
//	{
//		if (L1.data[a] < L2.data[b])
//		{
//			L3.data[c]=L1.data[a];
//			a++;
//			c++;
//		}
//		else {
//			L3.data[c] = L2.data[b];
//			b++;
//			c++;
//		}
//	}
//	while (a == L1.length&&b<L2.length)//L1�������
//	{
//		L3.data[c] = L2.data[b];
//		b++;
//		c++;
//	}
//	while (b == L2.length && a < L1.length)//L1�������
//	{
//		L3.data[c] = L1.data[a];
//		a++;
//		c++;
//	}
//	return L3;
//}
//
//
//int main()
//{
//	sqList L1,L2;
//	InitList(L1);
//	InitList(L2);
//	show(L1);
//	show(L2);
//	cout << "�ϲ�" << endl;
//	sqList L3 = Merge(L1, L2);
//	show(L3);
//	return 0;
//}