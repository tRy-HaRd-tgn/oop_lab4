#include "Interface.h"
#include "Vector.h"
#include "Map.h"
#include <iostream>

void Interface::iNterface(Vector& temp1,Map& temp2)
{
	bool cond = true;
	while (cond)
	{
		int num = 0;
		std::cout << "������� 1 ��� ������ � vector, ������� 2 ��� ������ � map" << '\n';
		std::cin >> num;
		switch (num)
		{
			case 1:
			{
				while (cond) 
				{
					std::cout << "������� 1 - ��� ������ ��������� �� ����� " << '\n' << "������� 2 - ��� ������ ������ � ���� ���������� � �������"
						<< '\n' << "������� 3 ��� ���������� ����������� �� ����� ��������" << '\n';
					int num;
					std::cin >> num;
					switch (num)
					{
						case 1:
						{
							std::cout << "������� ��� ��������� - ";
							std::string temp;
							std::cin >> temp;
							std::cout << '\n';
							temp1.find(temp);
							break;
						}
						case 2:
						{
							temp1.outPut();
							break;
						}
						case 3:
						{
							temp1.sort();
							std::cout << '\n' << "���������� ���������" <<'\n';
							break;
						}
					default:
						cond = false;
						std::cout << '\n'<<"������ ������������ ������" << '\n';
						break;
					}
				}
				cond = true;
				break;
			}
			case 2:
			{
				while (cond)
				{
					std::cout << "������� 1 - ��� ������ ��������� �� ����� " << '\n' << "������� 2 - ��� ������ ������ � ���� ���������� � �������"
						<< '\n';
					int num;
					std::cin >> num;
					switch (num)
					{
						case 1:
						{
							std::cout << "������� ���� ��������� - ";
							int temp;
							std::cin >> temp;
							std::cout << '\n';
							temp2.find(temp);
							break;
						}
						case 2:
						{
							temp2.outPut();
							break;
						}
						default:
							std::cout << '\n' <<"������� ������������ �����" << '\n';
							cond = false;
							break;
						}
				}
				cond = true;
				break;
			}
		default:
			std::cout << "������ ������� �� ����������!"<< '\n';
			cond = false;
			break;
		}
	}
}
