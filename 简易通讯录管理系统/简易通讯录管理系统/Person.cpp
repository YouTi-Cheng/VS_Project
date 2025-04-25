#include"Person.h"

//判断号码是否都为数字
bool isValidPhone(const string& phone) 
{
    return all_of(phone.begin(), phone.end(), ::isdigit);
}


// 通过成员函数设置/获取数据
void Person::setName(const string& n)
{
	this->name = n;
}

void Person::setPhone(const string& p)
{
    string temp = p;
	while (!isValidPhone(temp))
	{
		cout << "输入有误，请输入电话（纯数字）：";
		cin >> temp;
	}
	this->phone = temp;
}

Person::Person(string n, string p)
{
	this->name = n;
	this->phone = p;
}

Person::Person()
{

}

Person::~Person()
{
}