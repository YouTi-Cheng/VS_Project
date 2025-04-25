#pragma once

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<fstream>
#include<iomanip>
using namespace std;


//��ϵ��
class Person
{
public:
	//���캯��
	Person();
	Person(string n, string p);
	~Person();

	//���������͵绰
	void setName(const string& n);
	void setPhone(const string& p);
	//��ȡ�����͵绰
	string getName() const { return name; }
	string getPhone() const { return phone; }

private:
	//����
	string name;
	//�绰
	string phone;
};
