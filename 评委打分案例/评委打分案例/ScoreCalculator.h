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
	//�������
	void inputScore();
	//��������ͷ�
	void removeExtrems();
	//����ƽ����
	double calculateAverage();
	//��ʾ���
	void displayResult();
private:
	deque<double> score;	//��ȡ��ί����
};

