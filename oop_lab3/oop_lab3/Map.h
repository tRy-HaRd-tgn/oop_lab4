#pragma once
#include <map>
#include <string>
#include "University.h"
class Map
{
public:
	void outPut();//вывод всех институтов с информацией о них в консоль
	void input(University& temp,int key);//добавляем в map институт
	void find(int key);//поиск организовывается по ключу
private:
	std::map<int, University> temp;
};


