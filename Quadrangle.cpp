#include "Quadrangle.h"

Quadrangle::Quadrangle(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d) {
	name = "Четырёхугольник";
	length_a = l_a;
	length_b = l_b;
	length_c = l_c;
	length_d = l_d;
	angel_a = a_a;
	angel_b = a_b;
	angel_c = a_c;
	angel_d = a_d;
	Quadrangle::get_sides_count();
	if ((a_a + a_b + a_c + a_d) != 360) {
		throw My_exception(" не был создан. Причина: сумма углов не равна 360");
	}
	else {
		if (l_a == 0 || l_b == 0 || l_c == 0 || l_d == 0) {
			throw My_exception(" не был создан. Причина: количество сторон меньше 4");
		}
		else {
			std::cout << " был создан." << std::endl;
			sides_count = 4;
		}
	}
}

Quadrangle::Quadrangle(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d, std::string name) {
	this->name = name;
	length_a = l_a;
	length_b = l_b;
	length_c = l_c;
	length_d = l_d;
	angel_a = a_a;
	angel_b = a_b;
	angel_c = a_c;
	angel_d = a_d;
	Quadrangle::get_sides_count();
	if ((a_a + a_b + a_c + a_d) != 360) {
		throw My_exception(" не был создан. Причина: сумма углов не равна 360");
	}
	else {
		if (l_a == 0 || l_b == 0 || l_c == 0 || l_d == 0) {
			throw My_exception(" не был создан. Причина: количество сторон меньше 4");
		}
		else {
			sides_count = 4;
		}
	}
}

void Quadrangle::get_sides_count() {
	std::cout << name << " (стороны " << length_a << ", " << length_b << ", " << length_c << ", " << length_d << "; "
		<< "углы " << angel_a << ", " << angel_b << ", " << angel_c << ", " << angel_d << ")";
}