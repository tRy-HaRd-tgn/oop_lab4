#pragma once
#include <vector>
#include <string>
#include "University.h"
class Vector
{
public:
	void outPut();//����� ���� ���������� � ����������� � ��� � �������
	void sort();//���������� �� ����� ����� ���������
	void input(University& temp);//��������� � ������ ��������
	void find(std::string temp1);//����� ���������������� �� �������� ���������
private:
	std::vector <University> temp;// ������ �������� ����������
};
