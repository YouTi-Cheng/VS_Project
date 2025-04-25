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
////长度为n的顺序表L，编写一个时间复杂度为0(n)、
//// 空间复杂度为0(1)的算法，该算法删除线性表中所有值为x的数据元素
//void X_Delect(sqList& L,int x)
//{
//	int a[MaxSize]={0}, num = 0;
//	for (int i = 0; i < L.length; i++)	//顺序遍历找到x个数,并标记
//	{
//		a[i] = num;
//		if (L.data[i] == x)
//		{
//			a[i] = 0;
//			num++;
//		}
//	}
//	//依次移动
//	for (int i = 0; i < L.length ; i++)
//	{
//		L.data[i - a[i]]= L.data[i];
//	}
//	L.length = L.length-num;
//}
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
//
//
//int main()
//{
//	sqList L;
//	InitList(L);
//	show(L);
//	int x;
//	cout << "请输入要删除的元素值" << endl;
//	cin >> x;
//	X_Delect(L,x);
//	show(L);
//	return 0;
//}