#include "Quadrangle.h"

Quadrangle::Quadrangle(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d) {
	sides_count = 4;
	name = "Четырёхугольник";
	length_a = l_a;
	length_b = l_b;
	length_c = l_c;
	length_d = l_d;
	angel_a = a_a;
	angel_b = a_b;
	angel_c = a_c;
	angel_d = a_d;
}

Quadrangle::Quadrangle(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d, std::string name) {
	sides_count = 4;
	this->name = name;
	length_a = l_a;
	length_b = l_b;
	length_c = l_c;
	length_d = l_d;
	angel_a = a_a;
	angel_b = a_b;
	angel_c = a_c;
	angel_d = a_d;
}

void Quadrangle::get_sides_count() {
	Figure::get_sides_count();
	std::cout << "Стороны: a=" << length_a << " b=" << length_b << " c=" << length_c << " d=" << length_d << std::endl;
	std::cout << "Углы: A=" << angel_a << " B=" << angel_b << " C=" << angel_c << " D=" << angel_d << std::endl;
}