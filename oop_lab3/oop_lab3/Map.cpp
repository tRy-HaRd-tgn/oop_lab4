#include "Map.h"
#include <iostream>
void Map::outPut()
{
	auto it = temp.begin();
	for (;it != temp.end(); ++it)
	{
		std::cout << std::endl << it->second.getName() << " " << it->second.getTown() << " ";
		for (int j = 0; j < it->second.getSpecialities().size(); ++j)
		{
			std::cout << it->second.getSpecialities()[j] << " ";
		}

		for (int j = 0; j < it->second.getPoints().size(); ++j)
		{
			std::cout << it->second.getPoints()[j] << " ";
		}
		std::cout <<it->first <<std::endl;
	}
}


void Map::input(University& temp,int key)
{
	this->temp.insert(std::pair<int, University>(key, temp));
}

void Map::find(int key)	
{
	auto it = temp.begin();
	for (; it!=temp.end(); ++it)
	{
		if (it->first == key) // Если нашелся одинаковый ключ 
		{
			std::cout << std::endl << it->second.getName() << " " << it->second.getTown() << " ";
			for (int j = 0; j < it->second.getSpecialities().size(); ++j)
			{
				std::cout << it->second.getSpecialities()[j] << " ";
			}

			for (int j = 0; j < it->second.getPoints().size(); ++j)
			{
				std::cout << it->second.getPoints()[j] << " ";
			}
			std::cout << std::endl;
		}
	}
}