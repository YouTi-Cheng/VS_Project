//#include<iostream>
//using namespace std;
//#define MaxSize 50
//class sqList {
//public:
//	int data[MaxSize];
//	int length;
//};
//
////顺序表初始化
//void InitList(sqList& L)
//{
//	cout << "导入顺序表的元素个数" << endl;
//	cin >> L.length;
//	cout << '\n' << "依次输入每个元素的值" << endl;
//	for (int i = 0; i < L.length; i++)
//	{
//		cin >> L.data[i];
//	}
//}
//
////依次显示元素的值
//void show(sqList L)
//{
//	for (int i = 0; i < L.length; i++)
//	{
//		cout << L.data[i] << "    ";
//	}
//}
//
////设计一个高效的算法，将顺序表的所有元素逆置，
//// 要求算法的空间复杂度为0(1)。
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