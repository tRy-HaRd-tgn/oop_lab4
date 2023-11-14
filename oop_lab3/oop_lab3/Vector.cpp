#include "Vector.h"
#include <iostream>

void Vector::outPut()
{
	for (int i = 0; i < temp.size(); ++i)
	{
			std::cout << std::endl << temp[i].getName() << " " << temp[i].getTown() << " ";
			for (int j = 0; j < temp[i].getSpecialities().size(); ++j)
			{
				std::cout << temp[i].getSpecialities()[j] << " ";
			}

			for (int j = 0; j < temp[i].getPoints().size(); ++j)
			{
				std::cout << temp[i].getPoints()[j] << " ";
			}
			std::cout << std::endl;
	}
}

void Vector::sort()
{
	for (int i = 0; i < temp.size(); ++i) 
	{
		for (int j = 0; j < temp.size(); ++j) 
		{
			if (temp[i].getName().length() > temp[j].getName().length()) 
			{
				std::swap(temp[i], temp[j]);
			}
		}
	}
}

void Vector::input(University& temp)
{
	this->temp.push_back(temp);
}

void Vector::find(std::string temp1)//поиск организовывается по имени института
{
	for (int i = 0; i < temp.size(); ++i) 
	{
		if (temp[i].getName() == temp1) // Если в одном из юниверситетов, нашелся университет с таким же ключём 
		{
			std::cout << std::endl << temp[i].getName() << " " << temp[i].getTown() << " ";
			for (int j = 0; j < temp[i].getSpecialities().size(); ++j) 
			{
				std::cout << temp[i].getSpecialities()[j] << " ";
			}

			for (int j = 0; j < temp[i].getPoints().size(); ++j)
			{
				std::cout << temp[i].getPoints()[j] << " ";
			}
			std::cout << std::endl;
		}
	}
}
