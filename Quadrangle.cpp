#include "Quadrangle.h"

Quadrangle::Quadrangle(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d) {
	try {
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
			throw 8;
		}
		else {
			if (l_a == 0 || l_b == 0 || l_c == 0 || l_d == 0) {
				throw 9;
			}
			else {
				std::cout << " был создан." << std::endl;
				sides_count = 4;
			}
		}
	}
	catch (int err) {
		My_exception my_exception;
		my_exception.exception(err);
	}
}

Quadrangle::Quadrangle(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d, std::string name) {
	try {
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
			throw 8;
		}
		else {
			if (l_a == 0 || l_b == 0 || l_c == 0 || l_d == 0) {
				throw 9;
			}
			else {
				sides_count = 4;
			}
		}
	}
	catch (int err) {
		My_exception my_exception;
		my_exception.exception(err);
	}
}

void Quadrangle::get_sides_count() {
	std::cout << name << " (стороны " << length_a << ", " << length_b << ", " << length_c << ", " << length_d << "; " 
		<< "углы " << angel_a << ", " << angel_b << ", " << angel_c << ", " << angel_d << ")";
}