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
//
////������˳�����ɾ��������ֵ�ظ���Ԫ�أ�ʹ��������Ԫ�ص�ֵ����ͬ
//void Del(sqList &L)
//{
//	//��¼�ظ��ظ�����num
//	int num = 0;
//	for (int i = 1; i < L.length; i++)
//	{
//		if (L.data[i] == L.data[i - 1])
//		{
//			num++;
//		}
//		else {
//			L.data[i-num] = L.data[i];
//		}
//	}
//	L.length = L.length - num;
//}
//
//int main()
//{
//	sqList L;
//	InitList(L);
//	show(L);
//	cout << "ɾȥ�ظ�Ԫ�ص�ֵ" << endl;
//	Del(L);
//	show(L);
//	return 0;
//}