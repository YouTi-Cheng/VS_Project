#include"object.h"

//��ͼ��ʼ��
Map::Map() :m_Map{}{}

//��ͼ��ʾ
void Map::showMap()
{
	for (int i = 0; i < HCELL; i++)
	{
		for (int j = 0; j < WCELL; j++)
		{
			cout << this->m_Map[i][j] <<" ";
		}
		cout << endl;
	}
}

//ǽ��ʼ��
Wall::Wall(Map map) 
{
	//����Ĭ��ǽ �߿�����
	//for (int i = 0; i < m_WCELL; i++)
	//{
	//	map.m_Map[0][i] = 1;
	//	map.m_Map[m_HCELL - 1][i] = 1;
	//}
	//for (int j = 1; j < m_HCELL - 1; j++)
	//{
	//	map.m_Map[j][0] = 1;
	//	map.m_Map[j][this->m_WCELL - 1] = 1;
	//}
}


