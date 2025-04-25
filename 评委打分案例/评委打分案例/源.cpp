/*一、案例需求
功能目标：
允许输入多位评委的分数（假设5位）。
去掉一个最高分和一个最低分。
计算剩余分数的平均分。
技术点
使用 deque 存储分数（方便头尾操作）。
结合 algorithm 库进行排序和计算。
应用封装原则，分离输入、计算和输出逻辑。*/
#include"ScoreCalculator.h"

//创建参赛选手
void creatScoreCalculator(vector<ScoreCalculator> &sc, int pNum = 0,int jNum=0 )
{
	ScoreCalculator temp(jNum);
	for (int i = 1; i <= pNum; i++)
	{
		sc.assign(pNum, temp);
	}
}

//给选手评分
void scorePlayer(vector<ScoreCalculator> &sc)
{
	int i = 1;
	for (vector<ScoreCalculator>::iterator it =sc.begin();it!=sc.end();it++)
	{
		cout << "请给第" << i << "个选手评分" << endl;
		it->inputScore();
		i++;
	}
	cout << "评分完毕！" << endl;
}

void showScore(vector<ScoreCalculator> sc)
{
	int i = 1;
	for (vector<ScoreCalculator>::iterator it = sc.begin(); it != sc.end(); it++)
	{
		cout << "第" << i << "名选手，" << endl;
		it->displayResult();
		i++;
	}
}

int main()
{
	vector<ScoreCalculator> sc;
	int playerNum = 0;
	int judgeNum = 0;
	cout << "请输入参加评分的人数：" << endl;
	cin >> playerNum;
	cout << "请输入参加评分的评委人数：" << endl;
	cin >> judgeNum;
	//创建参赛选手
	creatScoreCalculator(sc,playerNum,judgeNum);
	
	//给选手评分
	scorePlayer(sc);

	//显示最后得分
	showScore(sc);

	return 0;
}