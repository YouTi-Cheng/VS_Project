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
////������ʾԪ�ص�ֵ
//void show(sqList L)
//{
//	for (int i = 0; i < L.length; i++)
//	{
//		cout << L.data[i] << "    ";
//	}
//}
//
////���һ����Ч���㷨����˳��������Ԫ�����ã�
//// Ҫ���㷨�Ŀռ临�Ӷ�Ϊ0(1)��
//void Reverse(sqList& L)
//{
//	int temp = 0;
//	for (int i = 0; i < L.length / 2; i++)
//	{
//		temp = L.data[i];
//		L.data[i] = L.data[L.length - 1 - i];
//		L.data[L.length - 1 - i] = temp;
//	}
//}
//
//int main()
//{
//	sqList L;
//	InitList(L);
//	show(L);
//	Reverse(L);
//	show(L);
//	return 0;
//}