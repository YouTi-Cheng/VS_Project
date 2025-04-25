#include"ScoreCalculator.h"

ScoreCalculator::ScoreCalculator(int jNum)
{
	//初始化将选手的每个评委的评分都设为0
	this->score.assign(jNum, 0);
}


//输入分数
void ScoreCalculator::inputScore()
{
	cout << "请依次输入分数：" << endl;
	for (deque<double>::iterator it = this->score.begin(); it != this->score.end(); it++)
	{
		double temp = -1;
		cin >> temp;
		while (!(temp>=0&&temp<=10))
		{
			cout << "输入分数有误（0~10分），请重新输入！" << endl;
			cin >> temp;
		}
		*it = temp;
	}
}

//溢出最高最低分
void ScoreCalculator::removeExtrems()
{
	sort(this->score.begin(),this->score.end());
	this->score.pop_front();
	this->score.pop_back();
}

//计算平均分
double ScoreCalculator::calculateAverage()
{
	if (this->score.empty()) {
		throw logic_error("无有效分数可计算！");
	}
	double sum = accumulate(this->score.begin(), this->score.end(),0.0);
	return sum / this->score.size();
}

//显示结果
void ScoreCalculator::displayResult()
{
	cout << "该名选手的最后得分为:" << this->calculateAverage()<< endl;
}