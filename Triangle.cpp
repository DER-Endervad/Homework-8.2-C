#include "Triangle.h"

Triangle::Triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c) {
	try {
		name = "Треугольник";
		length_a = l_a;
		length_b = l_b;
		length_c = l_c;
		angel_a = a_a;
		angel_b = a_b;
		angel_c = a_c;
		Triangle::get_sides_count();
		if ((a_a + a_b + a_c) != 180) {
			throw 1;
		}
		else {
			if (l_a == 0 || l_b == 0 || l_c == 0) {
				throw 2;
			}
			else {
				std::cout << " был создан." << std::endl;
				sides_count = 3;
			}
		}
	}
	catch (int err) {
		My_exception my_exception;
		my_exception.exception(err);
	}
}

Triangle::Triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c, std::string name) {
	try {
		this->name = name;
		length_a = l_a;
		length_b = l_b;
		length_c = l_c;
		angel_a = a_a;
		angel_b = a_b;
		angel_c = a_c;
		Triangle::get_sides_count();
		if ((a_a + a_b + a_c) != 180) {
			throw 1;
		}
		else {
			if (l_a == 0 || l_b == 0 || l_c == 0) {
				throw 2;
			}
			else {
				sides_count = 3;
			}
		}
	}
	catch (int err) {
		My_exception my_exception;
		my_exception.exception(err);
	}
}

void Triangle::get_sides_count() {
	std::cout << name << " (стороны " << length_a << ", " << length_b << ", " << length_c << "; " << "углы " << angel_a << ", " << angel_b << ", " << angel_c << ")";
}
