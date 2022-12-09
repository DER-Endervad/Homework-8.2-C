#pragma once
#include <iostream>
#include "My_exception.h"

class Figure
{
protected:
	int sides_count;
	std::string name;
	
public:
	Figure();
	Figure(int sides_count);

	virtual void get_sides_count();
};

