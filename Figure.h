#pragma once
#include <iostream>
class Figure
{
protected:
	int sides_count;
	std::string name;
	
public:
	Figure();

	virtual void get_sides_count();
};

