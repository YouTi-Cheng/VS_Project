//���Ա�(a1, a2, a3, , an)��Ԫ�ص��������Ұ�˳��洢�ڼ�����ڡ�
// Ҫ�����һ�㷨���������ʱ���ڱ��в�
//����ֵΪx��Ԫ�أ����ҵ���������Ԫ��λ���ཻ����
// ���Ҳ������������в�ʹ����Ԫ���Ե�������

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
//void InitList(sqList &L)
//{
//	cout << "����˳����Ԫ�ظ���" << endl;
//	cin >> L.length;
//	cout << '\n'<< "��������ÿ��Ԫ�ص�ֵ" << endl;
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
//		cout << L.data[i]<< "    ";
//	}
//}
//
////���Ա�(a1, a2, a3, , an)��Ԫ�ص��������Ұ�˳��洢�ڼ�����ڡ�
//// Ҫ�����һ�㷨���������ʱ���ڱ��в�
////����ֵΪx��Ԫ�أ����ҵ���������Ԫ��λ���ཻ����
//// ���Ҳ������������в�ʹ����Ԫ���Ե�������
//
//void Find(sqList& L,int x)
//{
//	//�۰����
//	int left = 0, right = L.length - 1;
//	while (x != L.data[(right+left)/2]&&left!=right)
//	{
//		if (x < L.data[(right + left) / 2])
//		{
//			right = (right + left) / 2;
//		}
//		if (x > L.data[(right + left) / 2])
//		{
//			left = (right + left) / 2;
//		}
//	}
//	if (L.data[(right + left) / 2] == x)//���ҳɹ�
//	{
//		int temp,a= (right + left) / 2;
//		temp = L.data[a];
//		L.data[a] = L.data[a + 1];
//		L.data[a + 1] = temp;
//	}
//	else {//����ʧ��
//
//	}
//}
//
////��˳�����ɾ��������Сֵ��Ԫ��(����Ψһ)���ɺ������ر�ɾԪ�ص�ֵ��
//// �ճ���λ�������һ��Ԫ�����
////��˳���Ϊ������ʾ������Ϣ���˳����С�
////����˳���
//bool DeleteMin(sqList &L,int &data )
//{
//	if (L.length == 0)
//	{
//		return 0;
//	}
//	//��¼��Сֵ
//	int min = L.data[0];
//	if (L.length == 1)	//Ψһֵ������Сֵ
//	{
//		data = min;
//	}
//	else
//	{
//		//Ԫ�ز�ֹһ�� ˳������ҵ���СԪ�غ����
//		int mixOrder = 0;
//		for (int i = 1; i < L.length; i++)
//		{
//			if (L.data[i] < min)
//			{
//				min = L.data[i];
//				mixOrder = i;
//			}
//		}
//		// �ճ���λ�������һ��Ԫ�����
//		L.data[mixOrder] = L.data[L.length-1];
//		L.length--;
//		return 1;
//	}
//
//	
//}
//
//int main()
//{
//	sqList L;
//	InitList(L);
//	show(L);
//	int data = 0;
//	if (DeleteMin(L,data))
//	{
//		cout << "ɾ���ɹ�,ɾ����Ϊ" << data<< endl;
//	}
//	else {
//		cout << "˳���Ϊ��" << endl;
//	}
//	show(L);
//	return 0;
//}