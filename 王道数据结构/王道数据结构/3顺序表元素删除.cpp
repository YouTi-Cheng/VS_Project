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
////����Ϊn��˳���L����дһ��ʱ�临�Ӷ�Ϊ0(n)��
//// �ռ临�Ӷ�Ϊ0(1)���㷨�����㷨ɾ�����Ա�������ֵΪx������Ԫ��
//void X_Delect(sqList& L,int x)
//{
//	int a[MaxSize]={0}, num = 0;
//	for (int i = 0; i < L.length; i++)	//˳������ҵ�x����,�����
//	{
//		a[i] = num;
//		if (L.data[i] == x)
//		{
//			a[i] = 0;
//			num++;
//		}
//	}
//	//�����ƶ�
//	for (int i = 0; i < L.length ; i++)
//	{
//		L.data[i - a[i]]= L.data[i];
//	}
//	L.length = L.length-num;
//}
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
//
//
//
//int main()
//{
//	sqList L;
//	InitList(L);
//	show(L);
//	int x;
//	cout << "������Ҫɾ����Ԫ��ֵ" << endl;
//	cin >> x;
//	X_Delect(L,x);
//	show(L);
//	return 0;
//}