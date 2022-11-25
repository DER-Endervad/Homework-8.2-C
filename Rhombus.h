#pragma once
#include "Quadrangle.h"
class Rhombus : public Quadrangle
{
public:
	Rhombus(int l_a, int a_a, int a_b, std::string name = "Ромб") : Quadrangle(l_a, l_a, l_a, l_a, a_a, a_b, a_a, a_b, name) {}
};

