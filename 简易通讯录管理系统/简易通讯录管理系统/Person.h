#pragma once

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<fstream>
#include<iomanip>
using namespace std;


//联系人
class Person
{
public:
	//构造函数
	Person();
	Person(string n, string p);
	~Person();

	//设置姓名和电话
	void setName(const string& n);
	void setPhone(const string& p);
	//获取姓名和电话
	string getName() const { return name; }
	string getPhone() const { return phone; }

private:
	//姓名
	string name;
	//电话
	string phone;
};
