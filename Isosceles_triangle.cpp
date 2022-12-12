#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c, std::string name) : Triangle(l_a, l_b, l_c, a_a, a_b, a_c, name) {
	if (l_a != l_c) {
		throw My_exception(" �� ��� ������. �������: ������� � �� ����� ������� C");
	}
	else {
		if (a_a != a_c) {
			throw My_exception(" �� ��� ������. �������: ���� A �� ����� ���� �");
		}
		else {
			std::cout << " ��� ������." << std::endl;
		}
	}
}
