#pragma once
#include <map>
#include <string>
#include "University.h"
class Map
{
public:
	void outPut();//����� ���� ���������� � ����������� � ��� � �������
	void input(University& temp,int key);//��������� � map ��������
	void find(int key);//����� ���������������� �� �����
private:
	std::map<int, University> temp;
};


