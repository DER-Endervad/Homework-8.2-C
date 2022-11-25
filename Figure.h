#pragma once
#include <iostream>
class Figure
{
protected:
	int sides_count;
	std::string name;
	
public:
	Figure() {
		sides_count = 0;
		name = "Фигура";
	}

	void get_sides_count() {
		std::cout << name << ": " << sides_count << std::endl;
	};
};

