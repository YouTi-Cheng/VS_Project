//���һ��һ�ף������ܽ��������һ���ߵĽ����������¥�ݵķ���
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
	//�����ܽ��������һ���ߵĽ���
	int sum = 0, n = 1;
	cout << "������¥�ݽ���" << endl;
	cin >> sum;
	cout << "������һ��������" << endl;
	cin >> n;
	int dp[100] = { 0 };

	//���г�ʼ��
	init(dp, n);
	if (sum <= n)
	{
		cout << "��¥�ݵķ����У�" << dp[sum] << "��" << endl;
	}
	else {
		for (int i = n+1; i <= sum; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				dp[i] = dp[i] + dp[i - j];
			}
		}
		cout << "��¥�ݵķ����У�" << dp[sum] << "��" << endl;

	}
}