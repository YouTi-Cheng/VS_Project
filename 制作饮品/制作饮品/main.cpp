#include<iostream>
using namespace std;

class AbstractDrinking {
public:
	//煮水
	virtual void boil() = 0;

	//冲泡
	virtual void brew() = 0;

	//倒入杯中
	virtual void pourInCup() = 0;

	//加入辅料
	virtual void putSomething() = 0;

	void makeDrink()
	{
		boil();
		brew();
		pourInCup();
		putSomething();
	}
};

//制作咖啡
class MakeCoffee :public AbstractDrinking
{
public:
	//煮水
	virtual void boil() = 0;

	//冲泡
	virtual void brew() = 0;

	//倒入杯中
	virtual void pourInCup() = 0;

	//加入辅料
	virtual void putSomething() = 0;
};


int main()
{

	return 0;
}