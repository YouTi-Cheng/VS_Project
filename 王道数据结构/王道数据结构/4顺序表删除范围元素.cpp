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
////从有序顺序表中删除其值在给定值s与t之间(要求s < t)的所有元
////	素，若s或t不合理或顺序表为空，则显示出错信息并退出运行。
//bool DelBetweenAB(sqList &L,int s,int t)
//{
//	if (L.length == 0)
//	{
//		cout << "顺序表为空" << endl;
//		return false;
//	}
//	else if(L.data[0] >t||L.data[L.length-1]<s)//最小值大于t，最大值小于s
//	{
//		cout << "s或t不合理" << endl;
//		return false;
//	}
//	int a = 0,num=0;//记录符合要求的序号和符合个数
//	for (int i = 0; i < L.length; i++)
//	{
//		if (L.data[i] >= s && L.data[i] <=t)
//		{
//			a = i;
//			num++;
//		}
//	}
//	//cout << a << num << endl;
//
//	////显示记录序号
//	//cout << a <<  " " << num << endl;
//	for (int i = a+1; i < L.length; i++)
//	{
//		L.data[i-num] = L.data[i];
//	}
//	L.length = L.length - num;
//	return true;
//}
//
//
//int main()
//{
//	sqList L;
//	InitList(L);
//	show(L);
//	int s,t;
//	cout << "请输入要删除的元素值范围" << endl;
//	cout << "输入上限" << endl;
//	cin >> s;
//	cout << "输入下限" << endl;
//	cin >> t;
//	DelBetweenAB(L, s, t);
//	show(L);
//	return 0;
//}