//最低一步一阶，输入总阶数和最大一步走的阶数，输出走楼梯的方法
#include<iostream>
using namespace std;
#include<math.h>
#define MAX 100

void init(int dp[],int n)
{
	dp[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		dp[i] = pow(2,i-1);
	}
}


int main()
{
	//输入总阶数和最大一步走的阶数
	int sum = 0, n = 1;
	cout << "请输入楼梯阶数" << endl;
	cin >> sum;
	cout << "请输入一步最多阶数" << endl;
	cin >> n;
	int dp[100] = { 0 };

	//进行初始化
	init(dp, n);
	if (sum <= n)
	{
		cout << "走楼梯的方法有：" << dp[sum] << "种" << endl;
	}
	else {
		for (int i = n+1; i <= sum; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				dp[i] = dp[i] + dp[i - j];
			}
		}
		cout << "走楼梯的方法有：" << dp[sum] << "种" << endl;

	}
}