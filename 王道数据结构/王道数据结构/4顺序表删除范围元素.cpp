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
////������˳�����ɾ����ֵ�ڸ���ֵs��t֮��(Ҫ��s < t)������Ԫ
////	�أ���s��t�������˳���Ϊ�գ�����ʾ������Ϣ���˳����С�
//bool DelBetweenAB(sqList &L,int s,int t)
//{
//	if (L.length == 0)
//	{
//		cout << "˳���Ϊ��" << endl;
//		return false;
//	}
//	else if(L.data[0] >t||L.data[L.length-1]<s)//��Сֵ����t�����ֵС��s
//	{
//		cout << "s��t������" << endl;
//		return false;
//	}
//	int a = 0,num=0;//��¼����Ҫ�����źͷ��ϸ���
//	for (int i = 0; i < L.length; i++)
//	{
//		if (L.data[i] >= s && L.data[i] <=t)
//		{
//			a = i;
//			num++;
//		}
//	}
//	//cout << a << num << endl;
//
//	////��ʾ��¼���
//	//cout << a <<  " " << num << endl;
//	for (int i = a+1; i < L.length; i++)
//	{
//		L.data[i-num] = L.data[i];
//	}
//	L.length = L.length - num;
//	return true;
//}
//
//
//int main()
//{
//	sqList L;
//	InitList(L);
//	show(L);
//	int s,t;
//	cout << "������Ҫɾ����Ԫ��ֵ��Χ" << endl;
//	cout << "��������" << endl;
//	cin >> s;
//	cout << "��������" << endl;
//	cin >> t;
//	DelBetweenAB(L, s, t);
//	show(L);
//	return 0;
//}