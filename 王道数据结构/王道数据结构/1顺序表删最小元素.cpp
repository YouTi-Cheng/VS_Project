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
//void InitList(sqList &L)
//{
//	cout << "导入顺序表的元素个数" << endl;
//	cin >> L.length;
//	cout << '\n'<< "依次输入每个元素的值" << endl;
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
//		cout << L.data[i]<< "    ";
//	}
//}
//
////从顺序表中删除具有最小值的元素(假设唯一)并由函数返回被删元素的值。
//// 空出的位置由最后一个元素填补，
////若顺序表为空则显示出错信息并退出运行。
////创立顺序表
//bool DeleteMin(sqList &L,int &data )
//{
//	if (L.length == 0)
//	{
//		return 0;
//	}
//	//记录最小值
//	int min = L.data[0];
//	if (L.length == 1)	//唯一值就是最小值
//	{
//		data = min;
//	}
//	else
//	{
//		//元素不止一个 顺序遍历找到最小元素和序号
//		int mixOrder = 0;
//		for (int i = 1; i < L.length; i++)
//		{
//			if (L.data[i] < min)
//			{
//				min = L.data[i];
//				mixOrder = i;
//			}
//		}
//		// 空出的位置由最后一个元素填补，
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
//		cout << "删除成功,删除数为" << data<< endl;
//	}
//	else {
//		cout << "顺序表为空" << endl;
//	}
//	show(L);
//	return 0;
//}