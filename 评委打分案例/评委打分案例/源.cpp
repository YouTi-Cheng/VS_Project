/*һ����������
����Ŀ�꣺
���������λ��ί�ķ���������5λ����
ȥ��һ����߷ֺ�һ����ͷ֡�
����ʣ�������ƽ���֡�
������
ʹ�� deque �洢����������ͷβ��������
��� algorithm ���������ͼ��㡣
Ӧ�÷�װԭ�򣬷������롢���������߼���*/
#include"ScoreCalculator.h"

//��������ѡ��
void creatScoreCalculator(vector<ScoreCalculator> &sc, int pNum = 0,int jNum=0 )
{
	ScoreCalculator temp(jNum);
	for (int i = 1; i <= pNum; i++)
	{
		sc.assign(pNum, temp);
	}
}

//��ѡ������
void scorePlayer(vector<ScoreCalculator> &sc)
{
	int i = 1;
	for (vector<ScoreCalculator>::iterator it =sc.begin();it!=sc.end();it++)
	{
		cout << "�����" << i << "��ѡ������" << endl;
		it->inputScore();
		i++;
	}
	cout << "������ϣ�" << endl;
}

void showScore(vector<ScoreCalculator> sc)
{
	int i = 1;
	for (vector<ScoreCalculator>::iterator it = sc.begin(); it != sc.end(); it++)
	{
		cout << "��" << i << "��ѡ�֣�" << endl;
		it->displayResult();
		i++;
	}
}

int main()
{
	vector<ScoreCalculator> sc;
	int playerNum = 0;
	int judgeNum = 0;
	cout << "������μ����ֵ�������" << endl;
	cin >> playerNum;
	cout << "������μ����ֵ���ί������" << endl;
	cin >> judgeNum;
	//��������ѡ��
	creatScoreCalculator(sc,playerNum,judgeNum);
	
	//��ѡ������
	scorePlayer(sc);

	//��ʾ���÷�
	showScore(sc);

	return 0;
}