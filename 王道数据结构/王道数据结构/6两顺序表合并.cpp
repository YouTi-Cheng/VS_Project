////将两个有序顺表合并为一个新的有序顺序表，并数返回
////结果顺序表。
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
////将两个有序顺表合并为一个新的有序顺序表，并数返回
////结果顺序表。
//sqList Merge(sqList L1, sqList L2)
//{
//	//创立一个新顺序表
//	sqList L3;
//	L3.length = L1.length + L2.length;
//	//记录L1和L2遍历位置
//	int a = 0, b = 0,c=0;
//	while (a < L1.length && b < L2.length)//L1.L2都没遍历完
//	{
//		if (L1.data[a] < L2.data[b])
//		{
//			L3.data[c]=L1.data[a];
//			a++;
//			c++;
//		}
//		else {
//			L3.data[c] = L2.data[b];
//			b++;
//			c++;
//		}
//	}
//	while (a == L1.length&&b<L2.length)//L1遍历完毕
//	{
//		L3.data[c] = L2.data[b];
//		b++;
//		c++;
//	}
//	while (b == L2.length && a < L1.length)//L1遍历完毕
//	{
//		L3.data[c] = L1.data[a];
//		a++;
//		c++;
//	}
//	return L3;
//}
//
//
//int main()
//{
//	sqList L1,L2;
//	InitList(L1);
//	InitList(L2);
//	show(L1);
//	show(L2);
//	cout << "合并" << endl;
//	sqList L3 = Merge(L1, L2);
//	show(L3);
//	return 0;
//}