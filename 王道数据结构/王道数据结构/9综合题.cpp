//给定三个序列 A、B、C，长度均为n,且均为无重复元素的递增席列，
// 请设计一个时间上尽可能高效的算法，
// 逐行输出同时存在于这三个序列中的所有元素。例如，数组A为
//{ 1,2,3]，数组 B为{2，3,4]，数组C为{-1,0,2}，则输出 2。要求:
//1)给出算法的基本设计思想。
//2)根据设计思想，采用C或 C++语言描述算法，关键之处给出注释。
//3)说明你的算法的时间复杂度和空间复杂度。


//#include<iostream>
//#include <algorithm> // 引入algorithm头文件以使用max函数
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
////设计思想
////①将这三个序列归并一个递增序列，因为3个序列无重复元素，所以三个
//// 序列相同元素在归并序列中存在三个；时间复杂度O(n),空间复杂度O(n)
////归并函数
//void merge(sqList L1, sqList L2,sqList &L3)
////将数组L1和数组L2合并到L3中
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
//	while (i < L1.length)//L2遍历完毕
//	{
//		L3.data[k++] = L1.data[i++];
//	}
//	while (j < L2.length)//L1遍历完毕
//	{
//		L3.data[k++] = L2.data[j++];
//	}
//}
//
////归并三个函数
//void merge_three(sqList L1, sqList L2, sqList L3, sqList& L4)
//{
//	sqList temp;
//	merge(L1, L2, temp);
//	merge(L3, temp, L4);
//}
//
////在合并递增序列中找3个相同的元素
//void Find3Same(sqList L1,sqList L2,sqList L3)
//{
//	sqList L4;
//	merge_three(L1, L2, L3, L4);
//	//记录相同元素个数num
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
//		if (num == 3)//找到相同元素
//		{
//			cout << "重复元素为：" << L4.data[i]<<endl;
//		}
//	}
//	return;
//}
//
////设计思想
//// ②3个指针依次寻找三个数列，因为都是递增序列，所以三个数最大的数
//// 才可能是相同的元素，小于最大数的指针向下遍历
//void Find3Same2(sqList L1,sqList L2,sqList L3)
//{
//	int i = 0, j = 0, k = 0;
//	while (i < L1.length && j < L2.length && k < L3.length)
//	{
//		if (L1.data[i] == L2.data[j] && L2.data[j] == L3.data[k])
//			//三数相等
//		{
//			cout << "重复元素为：" << L1.data[i] << endl;
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
//	cout << "查找" << endl;
//	Find3Same2(L1, L2, L3);
//	//cout << "合并" << endl;
//	//merge_three(L1, L2, L3,L4);
//	//show(L4);
//	return 0;
//}