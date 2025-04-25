//设将n(n > 1)个整数存放到一维数组R中。
// 试设计一个在时间和空间两方面都尽可能高效的算法。
//将R中保存的序列循环左移p(0 < p < n)个位置，即将R中的数据由
// Xo, X…，Xn - 1,变换为(Xp, Xp + 1, …, Xn-1, Xo, X, …, Xp-1, )。要求:
//1)给出算法的基本设计思想。
//2)根据设计思想，采用C、C++或Java 语言描述算法，关键之处给出注释。
//3)说明你所设计算法的时间复杂度和空间复杂度。

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