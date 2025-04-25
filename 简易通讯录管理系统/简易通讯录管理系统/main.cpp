//简易通讯录管理系统
#include"Person.h"

string DEFAULT_FILENAME = "contacts.txt";

void load(vector<Person> &b,const string & filename = DEFAULT_FILENAME)
{
	ifstream ifs(filename,ios::in);

	if (!ifs.is_open())
	{
		cout << "文档加载失败！" << endl;
		return;
	}
	string str;
	while (getline(ifs, str))
	{
		int pos = str.find(',');
		string name = str.substr(0, pos);
		string phone = str.substr(pos + 1);
		Person p(name,phone);
		b.push_back(p);
	}
	ifs.close();
}

void save(vector<Person>& b, const string& filename = DEFAULT_FILENAME)
{
	ofstream ofs(filename, ios::out);
	//依次遍历
	for (vector<Person>::iterator it = b.begin(); it != b.end(); it++)
	{
		ofs << it->getName() << "," << it->getPhone() << endl;
	}
	ofs.close();
}

void showFunc()
{
	cout << "0.退出" << endl;
	cout << "1.显示已添加联系人信息" << endl;
	cout << "2.添加联系人" << endl;
	cout << "3.查找联系人" << endl;
	cout << "4.修改联系人信息" << endl;
	cout << "5.删除联系人" << endl;


}

//显示电话簿所有信息
void showAddressBook(vector<Person> b)
{
	cout << left << setw(20)<<"序号"<< setw(20) << "姓名" << setw(15) << "电话" << endl;
	for (vector<Person>::iterator it = b.begin(); it != b.end(); it++)
	{
		cout << setw(20) << std::distance(b.begin(), it) << setw(20) << it->getName() << setw(15) << it->getPhone() << endl;
	}
}

//添加联系人
void addPerson(vector<Person> &b)
{
	string name;
	string phone;
	cout << "请输入添加联系人信息" << endl;
	cout << "姓名：" << endl;
	cin >> name;
	cout << "电话号码：" << endl;
	cin >> phone;
	Person p(name,phone);
	b.push_back(p);
}

//查找功能,将符合条件的联系人放在一个新的通信录中，返回
vector<Person> findPerson(vector<Person> &b)
{
	vector<Person> temp;
	int choice = -1;
	cout << "0.按姓名查找" << endl;
	cout << "1.按号码查找" << endl;
	loop:
	cin >> choice;
	if (choice==1)	//按号码查找
	{
		cout << "请输入要查找的号码" << endl;
		string str;
		cin >> str;
		//依次遍历号码簿
		for (vector<Person>::iterator it = b.begin(); it != b.end(); it++)
		{
			if (it->getPhone().find(str) != string::npos)	//找到了，放到临时通讯录中
			{
				temp.push_back(*it);
			}
		}

	}
	else if(choice==0)
	{
		cout << "请输入要查找的姓名" << endl;
		string str;
		cin >> str;
		//依次遍历号码簿
		for (vector<Person>::iterator it = b.begin(); it != b.end(); it++)
		{
			if (it->getName().find(str) != string::npos)	
			{
				temp.push_back(*it);
			}
		}
	}
	else {
		cout << "输入错误，请重新输入！" << endl;
		goto loop;
	}
	return temp;
}

//查找功能实现
void findAddressBook(vector<Person>& b)
{
	vector<Person> temp = findPerson(b);
	if (temp.empty())
	{
		cout << "未找到符合条件的联系人！" << endl;
	}
	else {
		cout << "符合条件的联系人如下：" << endl;
		showAddressBook(temp);
	}

}

//修改通讯录联系人信息
void changePerson(vector<Person> &b)
{
	cout << "查询你要更改的联系人" << endl;
	vector<Person> temp = findPerson(b);
	cout << "请输入你要更改联系人的序号：" << endl;
	showAddressBook(temp);
	int offset=0;
	cin >> offset;
	vector<Person>::iterator it_certain = temp.begin() + offset;
	for (vector<Person>::iterator it = b.begin(); it != b.end(); it++)
	{
		if (it->getName().compare(it_certain->getName()) == 0
			&& it->getPhone().compare(it_certain->getPhone())==0)	//姓名相同且号码相同
		{
			cout << "你要修改的是：" << endl;
			cout << "0.联系人姓名" << endl;
			cout << "1.联系人号码" << endl;
			int choice = -1;
			cin >> choice;
			if (choice)
			{
				cout << "请输入新的号码：" << endl;
				string phone;
				cin >> phone;
				it->setPhone(phone);
				cout << "修改成功！" << endl;
			}
			else {
				cout << "请输入新的姓名：" << endl;
				string name;
				cin >> name;
				it->setName(name);
				cout << "修改成功！" << endl;
			}
		}
	}

}

//删除联系人
void delectPerson(vector<Person>& b)
{
	cout << "查询你要删除的联系人" << endl;
	vector<Person> temp = findPerson(b);
	cout << "请输入你要删除联系人的序号：" << endl;
	showAddressBook(temp);
	int offset = 0;
	cin >> offset;
	vector<Person>::iterator it_certain = temp.begin() + offset;
	cout << "你确定要删除这位联系人信息吗？" << endl;
	cout << it_certain->getName() << "|" << it_certain->getPhone() << endl;
	cout << "0.取消  1.确定" << endl;
	int choice;
	cin >> choice;
	if (choice)
	{
		for (vector<Person>::iterator it = b.begin(); it != b.end(); it++)
		{
			if (it->getName().compare(it_certain->getName()) ==0 
				&& it->getPhone().compare(it_certain->getPhone())==0)	//姓名相同且号码相同
			{
				b.erase(it);
			}
		}
	}
	else
	{
		return;
	}

}

// 使用跨平台清屏
void clearScreen()
{
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}


int main()
{
	vector<Person> addressBook;

	load(addressBook);

	while (true)
	{
		//显示功能
		showFunc();
		int choice=-1;
		cin >> choice;
		switch (choice)
		{
			case 0:		//退出系统
				//保存操作记录
				save(addressBook);
				exit(0);
				break;
			case 1:		//查看所有联系人信息
				showAddressBook(addressBook);
				break;
			case 2:		//添加联系人（姓名、电话）。
				addPerson(addressBook);
				break;
			case 3:		//查找联系人（支持姓名或电话查找）。
				findAddressBook(addressBook);
				break;
			case 4:		//修改联系人信息。
				changePerson(addressBook);
				break;
			case 5:
				delectPerson(addressBook);
				break;
			default:
				break;
		}
		system("pause");
		clearScreen();
	}
}