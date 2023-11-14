#pragma once
#include <string>
#include <vector>
class University
{
public:
	University(std::string temp);
	std::string getName();
	std::string getTown();
	std::vector <std::string> getSpecialities();
	std::vector <int> getPoints();
private:
	std::string name;
	std::string town;
	std::vector <std::string> specialties;//специальности
	std::vector <int> points;//проходные баллы
};


