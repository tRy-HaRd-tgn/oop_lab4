#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "University.h"
#include "Vector.h"
#include "Map.h"
#include <windows.h>
#include "Interface.h"

int main()
{
	SetConsoleCP(1251);				//����������� �������� ����� ��� �����
	SetConsoleOutputCP(1251);		//����������� �������� ����� ��� ������
	std::ifstream fin("input.txt");	//����� �����

	Vector vector;
	Map map;
	
	int count=0;
	while (!fin.eof())				//���� ���� �� ����������
	{
		std::string temp;			
		getline(fin, temp);			//����� ������ �� ������ �����, ������ ������� ��������� � ���������
		University temporary(temp);
		vector.input(temporary);	//��������� ������ �����������
		map.input(temporary, count);//���������� map
		count++;
	}
	try
	{
		Interface::iNterface(vector, map);
	}
	catch (const std::exception &ex) 
	{
		std::cout << '\n' << ex.what()<<'\n';
		return 1;
	}
	return 0;
}