////��֪��һά����A[m + n]��һ�δ�����������Ա�a1, a2, a3, , am)
////��(b1, b2, b3, , bn)���Ա�дһ��������������������˳����λ�û�����
////����(b1, b2, b3, , bn)����(a1, a2, a3, , am)��ǰ�档
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
////���һ����Ч���㷨����˳��������Ԫ�����ã�
//// Ҫ���㷨�Ŀռ临�Ӷ�Ϊ0(1)��
//void Reverse(sqList& L,int left,int right)
//{
//	int temp = 0,mid =(right-left)/2;
//	for (int i = 0; i <= (mid - left) / 2; i++)
//	{
//		temp = L.data[left+i];
//		L.data[left+i] = L.data[right-i];
//		L.data[right - i] = temp;
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
//}
//
////��֪��һά����A[m + n]��һ�δ�����������Ա�a1, a2, a3, , am)
////��(b1, b2, b3, , bn)���Ա�дһ��������������������˳����λ�û�����
////����(b1, b2, b3, , bn)����(a1, a2, a3, , am)��ǰ�档
//void ReverseMN(sqList& L, int m, int n)
//{
//	//������������
//	Reverse(L, 0, L.length - 1);
//	//��������
//	Reverse(L, 0, n-1);
//	show(L);
//	Reverse(L, n, L.length - 1);
//	show(L);
//}
//
//
//
//
//int main()
//{
//	sqList L;
//	InitList(L);
//	show(L);
//	//cout << "����Ҫ���õ��������" << endl;
//	//int left=0, right=0;
//	//cout << "���" << endl;
//	//cin >> left;
//	//cout << "�ұ�" << endl;
//	//cin >> right;
//	//Reverse(L,left,right);
//	//show(L);
//	ReverseMN(L, 3, 2);
//	return 0;
//}