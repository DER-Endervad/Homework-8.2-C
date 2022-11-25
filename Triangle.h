#pragma once
#include "Figure.h"

class Triangle:public Figure
{
public:
	Triangle() {
		sides_count = 3;
		name = "Треугольник";
	}

};

