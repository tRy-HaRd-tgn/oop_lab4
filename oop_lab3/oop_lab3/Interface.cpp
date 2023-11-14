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
		std::cout << "¬ведите 1 дл€ работы с vector, введите 2 дл€ работы с map" << '\n';
		std::cin >> num;
		switch (num)
		{
			case 1:
			{
				while (cond) 
				{
					std::cout << "¬ведите 1 - дл€ поиска института по имени " << '\n' << "¬ведите 2 - дл€ вывода данных о всех институтах в консоль"
						<< '\n' << "¬ведите 3 дл€ сортировки интситуттов по длине названи€" << '\n';
					int num;
					std::cin >> num;
					switch (num)
					{
						case 1:
						{
							std::cout << "¬ведите им€ института - ";
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
							std::cout << '\n' << "—ортировка выполнена" <<'\n';
							break;
						}
					default:
						cond = false;
						std::cout << '\n'<<"¬веден неправильный символ" << '\n';
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
					std::cout << "¬ведите 1 - дл€ поиска института по ключу " << '\n' << "¬ведите 2 - дл€ вывода данных о всех институтах в консоль"
						<< '\n';
					int num;
					std::cin >> num;
					switch (num)
					{
						case 1:
						{
							std::cout << "¬ведите ключ института - ";
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
							std::cout << '\n' <<"¬ведена неправильна€ цифра" << '\n';
							cond = false;
							break;
						}
				}
				cond = true;
				break;
			}
		default:
			std::cout << "“акого объекта не существует!"<< '\n';
			cond = false;
			break;
		}
	}
}
