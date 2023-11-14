#pragma once
#include <vector>
#include <string>
#include "University.h"
class Vector
{
public:
	void outPut();//вывод всех институтов с информацией о них в консоль
	void sort();//сортировка по длине имени института
	void input(University& temp);//добавляем в вектор институт
	void find(std::string temp1);//поиск организовывается по названию института
private:
	std::vector <University> temp;// вектор объектов институтов
};
