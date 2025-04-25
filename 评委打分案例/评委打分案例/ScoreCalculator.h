#pragma once
#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;
class ScoreCalculator
{
public:
	ScoreCalculator(int jNum);
	//输入分数
	void inputScore();
	//溢出最高最低分
	void removeExtrems();
	//计算平均分
	double calculateAverage();
	//显示结果
	void displayResult();
private:
	deque<double> score;	//存取评委分数
};

