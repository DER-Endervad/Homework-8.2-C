#include "Triangle.h"

Triangle::Triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c) {
	name = "�����������";
	length_a = l_a;
	length_b = l_b;
	length_c = l_c;
	angel_a = a_a;
	angel_b = a_b;
	angel_c = a_c;
	Triangle::get_sides_count();
	if ((a_a + a_b + a_c) != 180) {
		throw My_exception(" �� ��� ������. �������: ����� ����� �� ����� 180");
	}
	else {
		if (l_a == 0 || l_b == 0 || l_c == 0) {
			throw My_exception(" �� ��� ������. �������: ���������� ������ ������ 3");
		}
		else {
			std::cout << " ��� ������." << std::endl;
			sides_count = 3;
		}
	}
}

Triangle::Triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c, std::string name) {
	this->name = name;
	length_a = l_a;
	length_b = l_b;
	length_c = l_c;
	angel_a = a_a;
	angel_b = a_b;
	angel_c = a_c;
	Triangle::get_sides_count();
	if ((a_a + a_b + a_c) != 180) {
		throw My_exception(" �� ��� ������. �������: ����� ����� �� ����� 180");
	}
	else {
		if (l_a == 0 || l_b == 0 || l_c == 0) {
			throw My_exception(" �� ��� ������. �������: ���������� ������ ������ 3");
		}
		else {
			sides_count = 3;
		}
	}
}

void Triangle::get_sides_count() {
	std::cout << name << " (������� " << length_a << ", " << length_b << ", " << length_c << "; " << "���� " << angel_a << ", " << angel_b << ", " << angel_c << ")";
}
