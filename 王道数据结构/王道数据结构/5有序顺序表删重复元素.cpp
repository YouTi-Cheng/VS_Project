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
//
////依次显示元素的值
//void show(sqList L)
//{
//	for (int i = 0; i < L.length; i++)
//	{
//		cout << L.data[i] << "    ";
//	}
//	if (L.length == 0)
//	{
//		cout << "顺序表为空" << endl;
//	}
//}
//
////从有序顺序表中删除所有其值重复的元素，使表中所有元素的值均不同
//void Del(sqList &L)
//{
//	//记录重复重复个数num
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
//	cout << "删去重复元素的值" << endl;
//	Del(L);
//	show(L);
//	return 0;
//}