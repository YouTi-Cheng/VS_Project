#include<iostream>
#include<easyx.h>
#include<cmath>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>

void func(int a)
{
    cout << a << endl;
}

//给你两个正整数 low 和 high 。
//
//对于一个由 2 * n 位数字组成的整数 x ，如果其前 n 位数字之和与后 n 位数字之和相等，则认为这个数字是一个对称整数。
//
//返回在[low, high] 范围内的 对称整数的数目 。

//求整数的位数
int numDigit(int num)
{
    int digit = 1;
    while (num / 10 != 0)
    {
        digit++;
        num /= 10;
    }
    return digit;
}

//求位数之和
int sum(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        int nSum = 0;
        //因为对称整数的数字为肯定是双数，先确定可能的位数
        int low_digit = numDigit(low), high_digit = numDigit(high);
        //分情况讨论
        if (low_digit % 2!=0) //low为偶
        {
            //从自己开始
            nSum=sum(low/(pow(10,low_digit/2)))
        }
    }
};



 
 int main()
{
     //Solution s;
     //string a = "AB";
     //string newString = s.convert(a,1);
     ////
     //cout << newString << endl;
     //cout << numDigit(100) << endl;
     cout << sum(91) << endl;

	system("pause");
	return 0;

}