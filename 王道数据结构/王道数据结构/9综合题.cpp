//������������ A��B��C�����Ⱦ�Ϊn,�Ҿ�Ϊ���ظ�Ԫ�صĵ���ϯ�У�
// �����һ��ʱ���Ͼ����ܸ�Ч���㷨��
// �������ͬʱ�����������������е�����Ԫ�ء����磬����AΪ
//{ 1,2,3]������ BΪ{2��3,4]������CΪ{-1,0,2}������� 2��Ҫ��:
//1)�����㷨�Ļ������˼�롣
//2)�������˼�룬����C�� C++���������㷨���ؼ�֮������ע�͡�
//3)˵������㷨��ʱ�临�ӶȺͿռ临�Ӷȡ�


//#include<iostream>
//#include <algorithm> // ����algorithmͷ�ļ���ʹ��max����
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
////���˼��
////�ٽ����������й鲢һ���������У���Ϊ3���������ظ�Ԫ�أ���������
//// ������ͬԪ���ڹ鲢�����д���������ʱ�临�Ӷ�O(n),�ռ临�Ӷ�O(n)
////�鲢����
//void merge(sqList L1, sqList L2,sqList &L3)
////������L1������L2�ϲ���L3��
//{
//	int i = 0, j = 0, k = 0;
//	L3.length = L1.length + L2.length;
//	while (i < L1.length && j < L2.length )
//	{
//		if (L1.data[i] < L2.data[j])
//		{
//			L3.data[k++] = L1.data[i++];
//		}
//		else {
//			L3.data[k++] = L2.data[j++];
//		}
//	}
//	while (i < L1.length)//L2�������
//	{
//		L3.data[k++] = L1.data[i++];
//	}
//	while (j < L2.length)//L1�������
//	{
//		L3.data[k++] = L2.data[j++];
//	}
//}
//
////�鲢��������
//void merge_three(sqList L1, sqList L2, sqList L3, sqList& L4)
//{
//	sqList temp;
//	merge(L1, L2, temp);
//	merge(L3, temp, L4);
//}
//
////�ںϲ�������������3����ͬ��Ԫ��
//void Find3Same(sqList L1,sqList L2,sqList L3)
//{
//	sqList L4;
//	merge_three(L1, L2, L3, L4);
//	//��¼��ͬԪ�ظ���num
//	int num = 1;
//	for (int i = 1; i < L4.length; i++)
//	{
//		if (L4.data[i] == L4.data[i - 1])
//		{
//			num++;
//		}
//		else {
//			num = 1;
//		}
//		if (num == 3)//�ҵ���ͬԪ��
//		{
//			cout << "�ظ�Ԫ��Ϊ��" << L4.data[i]<<endl;
//		}
//	}
//	return;
//}
//
////���˼��
//// ��3��ָ������Ѱ���������У���Ϊ���ǵ������У�����������������
//// �ſ�������ͬ��Ԫ�أ�С���������ָ�����±���
//void Find3Same2(sqList L1,sqList L2,sqList L3)
//{
//	int i = 0, j = 0, k = 0;
//	while (i < L1.length && j < L2.length && k < L3.length)
//	{
//		if (L1.data[i] == L2.data[j] && L2.data[j] == L3.data[k])
//			//�������
//		{
//			cout << "�ظ�Ԫ��Ϊ��" << L1.data[i] << endl;
//			i++;
//			j++;
//			k++;
//		}
//		int maxNum = max(L1.data[i],max( L2.data[j],L3.data[k]));
//		if (L1.data[i] < maxNum)i++;
//		if (L2.data[j] < maxNum)j++;
//		if (L3.data[k] < maxNum)k++;
//
//	}
//	return;
//}

//int main()
//{
//	sqList L1,L2,L3,L4;
//	InitList(L1);
//	InitList(L2);
//	InitList(L3);
//	show(L1);
//	show(L2);
//	show(L3);
//	cout << "����" << endl;
//	Find3Same2(L1, L2, L3);
//	//cout << "�ϲ�" << endl;
//	//merge_three(L1, L2, L3,L4);
//	//show(L4);
//	return 0;
//}