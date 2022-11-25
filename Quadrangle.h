#pragma once
#include "Figure.h"

class Quadrangle :public Figure
{
public:
	Quadrangle() {
		sides_count = 4;
		name = "Четырёхугольник";
	}
};

