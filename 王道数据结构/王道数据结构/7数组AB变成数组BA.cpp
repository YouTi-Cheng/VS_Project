////已知在一维数组A[m + n]中一次存放着两个线性表“a1, a2, a3, , am)
////和(b1, b2, b3, , bn)。试编写一个函数，将数组中两个顺序表的位置互换，
////即将(b1, b2, b3, , bn)放在(a1, a2, a3, , am)的前面。
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
////设计一个高效的算法，将顺序表的所有元素逆置，
//// 要求算法的空间复杂度为0(1)。
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
////依次显示元素的值
//void show(sqList L)
//{
//	for (int i = 0; i < L.length; i++)
//	{
//		cout << L.data[i] << "    ";
//	}
//}
//
////已知在一维数组A[m + n]中一次存放着两个线性表“a1, a2, a3, , am)
////和(b1, b2, b3, , bn)。试编写一个函数，将数组中两个顺序表的位置互换，
////即将(b1, b2, b3, , bn)放在(a1, a2, a3, , am)的前面。
//void ReverseMN(sqList& L, int m, int n)
//{
//	//整个数组逆置
//	Reverse(L, 0, L.length - 1);
//	//部分逆置
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
//	//cout << "输入要逆置的区域序号" << endl;
//	//int left=0, right=0;
//	//cout << "左边" << endl;
//	//cin >> left;
//	//cout << "右边" << endl;
//	//cin >> right;
//	//Reverse(L,left,right);
//	//show(L);
//	ReverseMN(L, 3, 2);
//	return 0;
//}