#include "Right_triangle.h"

Right_triangle::Right_triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c, std::string name) : Triangle(l_a, l_b, l_c, a_a, a_b, a_c, name = "������������� �����������") {
	if (a_c != 90) {
		throw My_exception(" �� ��� ������. �������: ���� C �� ����� 90 ��������");
	}
	else {
		std::cout << " ��� ������." << std::endl;
	}
}
