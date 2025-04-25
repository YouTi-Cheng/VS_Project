//����ͨѶ¼����ϵͳ
#include"Person.h"

string DEFAULT_FILENAME = "contacts.txt";

void load(vector<Person> &b,const string & filename = DEFAULT_FILENAME)
{
	ifstream ifs(filename,ios::in);

	if (!ifs.is_open())
	{
		cout << "�ĵ�����ʧ�ܣ�" << endl;
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
	//���α���
	for (vector<Person>::iterator it = b.begin(); it != b.end(); it++)
	{
		ofs << it->getName() << "," << it->getPhone() << endl;
	}
	ofs.close();
}

void showFunc()
{
	cout << "0.�˳�" << endl;
	cout << "1.��ʾ�������ϵ����Ϣ" << endl;
	cout << "2.�����ϵ��" << endl;
	cout << "3.������ϵ��" << endl;
	cout << "4.�޸���ϵ����Ϣ" << endl;
	cout << "5.ɾ����ϵ��" << endl;


}

//��ʾ�绰��������Ϣ
void showAddressBook(vector<Person> b)
{
	cout << left << setw(20)<<"���"<< setw(20) << "����" << setw(15) << "�绰" << endl;
	for (vector<Person>::iterator it = b.begin(); it != b.end(); it++)
	{
		cout << setw(20) << std::distance(b.begin(), it) << setw(20) << it->getName() << setw(15) << it->getPhone() << endl;
	}
}

//�����ϵ��
void addPerson(vector<Person> &b)
{
	string name;
	string phone;
	cout << "�����������ϵ����Ϣ" << endl;
	cout << "������" << endl;
	cin >> name;
	cout << "�绰���룺" << endl;
	cin >> phone;
	Person p(name,phone);
	b.push_back(p);
}

//���ҹ���,��������������ϵ�˷���һ���µ�ͨ��¼�У�����
vector<Person> findPerson(vector<Person> &b)
{
	vector<Person> temp;
	int choice = -1;
	cout << "0.����������" << endl;
	cout << "1.���������" << endl;
	loop:
	cin >> choice;
	if (choice==1)	//���������
	{
		cout << "������Ҫ���ҵĺ���" << endl;
		string str;
		cin >> str;
		//���α������벾
		for (vector<Person>::iterator it = b.begin(); it != b.end(); it++)
		{
			if (it->getPhone().find(str) != string::npos)	//�ҵ��ˣ��ŵ���ʱͨѶ¼��
			{
				temp.push_back(*it);
			}
		}

	}
	else if(choice==0)
	{
		cout << "������Ҫ���ҵ�����" << endl;
		string str;
		cin >> str;
		//���α������벾
		for (vector<Person>::iterator it = b.begin(); it != b.end(); it++)
		{
			if (it->getName().find(str) != string::npos)	
			{
				temp.push_back(*it);
			}
		}
	}
	else {
		cout << "����������������룡" << endl;
		goto loop;
	}
	return temp;
}

//���ҹ���ʵ��
void findAddressBook(vector<Person>& b)
{
	vector<Person> temp = findPerson(b);
	if (temp.empty())
	{
		cout << "δ�ҵ�������������ϵ�ˣ�" << endl;
	}
	else {
		cout << "������������ϵ�����£�" << endl;
		showAddressBook(temp);
	}

}

//�޸�ͨѶ¼��ϵ����Ϣ
void changePerson(vector<Person> &b)
{
	cout << "��ѯ��Ҫ���ĵ���ϵ��" << endl;
	vector<Person> temp = findPerson(b);
	cout << "��������Ҫ������ϵ�˵���ţ�" << endl;
	showAddressBook(temp);
	int offset=0;
	cin >> offset;
	vector<Person>::iterator it_certain = temp.begin() + offset;
	for (vector<Person>::iterator it = b.begin(); it != b.end(); it++)
	{
		if (it->getName().compare(it_certain->getName()) == 0
			&& it->getPhone().compare(it_certain->getPhone())==0)	//������ͬ�Һ�����ͬ
		{
			cout << "��Ҫ�޸ĵ��ǣ�" << endl;
			cout << "0.��ϵ������" << endl;
			cout << "1.��ϵ�˺���" << endl;
			int choice = -1;
			cin >> choice;
			if (choice)
			{
				cout << "�������µĺ��룺" << endl;
				string phone;
				cin >> phone;
				it->setPhone(phone);
				cout << "�޸ĳɹ���" << endl;
			}
			else {
				cout << "�������µ�������" << endl;
				string name;
				cin >> name;
				it->setName(name);
				cout << "�޸ĳɹ���" << endl;
			}
		}
	}

}

//ɾ����ϵ��
void delectPerson(vector<Person>& b)
{
	cout << "��ѯ��Ҫɾ������ϵ��" << endl;
	vector<Person> temp = findPerson(b);
	cout << "��������Ҫɾ����ϵ�˵���ţ�" << endl;
	showAddressBook(temp);
	int offset = 0;
	cin >> offset;
	vector<Person>::iterator it_certain = temp.begin() + offset;
	cout << "��ȷ��Ҫɾ����λ��ϵ����Ϣ��" << endl;
	cout << it_certain->getName() << "|" << it_certain->getPhone() << endl;
	cout << "0.ȡ��  1.ȷ��" << endl;
	int choice;
	cin >> choice;
	if (choice)
	{
		for (vector<Person>::iterator it = b.begin(); it != b.end(); it++)
		{
			if (it->getName().compare(it_certain->getName()) ==0 
				&& it->getPhone().compare(it_certain->getPhone())==0)	//������ͬ�Һ�����ͬ
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

// ʹ�ÿ�ƽ̨����
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
		//��ʾ����
		showFunc();
		int choice=-1;
		cin >> choice;
		switch (choice)
		{
			case 0:		//�˳�ϵͳ
				//���������¼
				save(addressBook);
				exit(0);
				break;
			case 1:		//�鿴������ϵ����Ϣ
				showAddressBook(addressBook);
				break;
			case 2:		//�����ϵ�ˣ��������绰����
				addPerson(addressBook);
				break;
			case 3:		//������ϵ�ˣ�֧��������绰���ң���
				findAddressBook(addressBook);
				break;
			case 4:		//�޸���ϵ����Ϣ��
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