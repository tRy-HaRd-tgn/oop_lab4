#include "University.h"

University::University(std::string temp)
{
	int count = 0;
	std::string temporary;
	for (int i = 0; i < temp.length(); ++i) //заполнение полей
	{
		if (temp[i] != ' ') 
		{
			temporary += temp[i];
		}
		if (temp[i] == ' ' ) 
		{
			count++;
			if (count == 1) 
			{
				name = temporary;
				temporary = "";
			}
			if (count == 2)
			{
				town = temporary;
				temporary = "";
			}
			if (count == 3)
			{
				specialties.push_back(temporary);
				temporary = "";
			}
			if (count == 4)
			{
				specialties.push_back(temporary);
				temporary = "";
			}
			if (count == 5)
			{
				points.push_back(stoi(temporary));
				temporary = "";
			}
			if (count == 6)
			{
				points.push_back(stoi(temporary));
				temporary = "";
			}
			
		}
		
	}
}

std::string University::getName()
{
	return name;
}

std::string University::getTown()
{
	return town;
}

std::vector<std::string> University::getSpecialities()
{
	return specialties;
}

std::vector<int> University::getPoints()
{
	return points;
}
