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

//�������������� low �� high ��
//
//����һ���� 2 * n λ������ɵ����� x �������ǰ n λ����֮����� n λ����֮����ȣ�����Ϊ���������һ���Գ�������
//
//������[low, high] ��Χ�ڵ� �Գ���������Ŀ ��

//��������λ��
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

//��λ��֮��
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
        //��Ϊ�Գ�����������Ϊ�϶���˫������ȷ�����ܵ�λ��
        int low_digit = numDigit(low), high_digit = numDigit(high);
        //���������
        if (low_digit % 2!=0) //lowΪż
        {
            //���Լ���ʼ
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