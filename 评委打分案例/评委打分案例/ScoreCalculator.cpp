#include"ScoreCalculator.h"

ScoreCalculator::ScoreCalculator(int jNum)
{
	//��ʼ����ѡ�ֵ�ÿ����ί�����ֶ���Ϊ0
	this->score.assign(jNum, 0);
}


//�������
void ScoreCalculator::inputScore()
{
	cout << "���������������" << endl;
	for (deque<double>::iterator it = this->score.begin(); it != this->score.end(); it++)
	{
		double temp = -1;
		cin >> temp;
		while (!(temp>=0&&temp<=10))
		{
			cout << "�����������0~10�֣������������룡" << endl;
			cin >> temp;
		}
		*it = temp;
	}
}

//��������ͷ�
void ScoreCalculator::removeExtrems()
{
	sort(this->score.begin(),this->score.end());
	this->score.pop_front();
	this->score.pop_back();
}

//����ƽ����
double ScoreCalculator::calculateAverage()
{
	if (this->score.empty()) {
		throw logic_error("����Ч�����ɼ��㣡");
	}
	double sum = accumulate(this->score.begin(), this->score.end(),0.0);
	return sum / this->score.size();
}

//��ʾ���
void ScoreCalculator::displayResult()
{
	cout << "����ѡ�ֵ����÷�Ϊ:" << this->calculateAverage()<< endl;
}