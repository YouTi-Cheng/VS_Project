#include"Person.h"

//�жϺ����Ƿ�Ϊ����
bool isValidPhone(const string& phone) 
{
    return all_of(phone.begin(), phone.end(), ::isdigit);
}


// ͨ����Ա��������/��ȡ����
void Person::setName(const string& n)
{
	this->name = n;
}

void Person::setPhone(const string& p)
{
    string temp = p;
	while (!isValidPhone(temp))
	{
		cout << "��������������绰�������֣���";
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