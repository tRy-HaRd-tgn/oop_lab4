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
	SetConsoleCP(1251);				//подключение русского языка для ввода
	SetConsoleOutputCP(1251);		//подключение русского языка для вывода
	std::ifstream fin("input.txt");	//поток ввода

	Vector vector;
	Map map;
	
	int count=0;
	while (!fin.eof())				//пока файл не закончился
	{
		std::string temp;			
		getline(fin, temp);			//берем строку из потока ввода, строка берется полностью с пробелами
		University temporary(temp);
		vector.input(temporary);	//заполняем вектор институтами
		map.input(temporary, count);//заполнение map
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