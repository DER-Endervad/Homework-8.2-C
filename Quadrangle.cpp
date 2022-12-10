#include "Quadrangle.h"

Quadrangle::Quadrangle(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d) {
	try {
		name = "��������������";
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
			throw std::domain_error(" �� ��� ������. �������: ����� ����� �� ����� 360");
		}
		else {
			if (l_a == 0 || l_b == 0 || l_c == 0 || l_d == 0) {
				throw std::domain_error(" �� ��� ������. �������: ���������� ������ ������ 4");
			}
			else {
				std::cout << " ��� ������." << std::endl;
				sides_count = 4;
			}
		}
	}
	catch (std::domain_error d) {
		My_exception my_exception(d);
		/*my_exception.exception(err);*/
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
			throw std::domain_error(" �� ��� ������. �������: ����� ����� �� ����� 360");
		}
		else {
			if (l_a == 0 || l_b == 0 || l_c == 0 || l_d == 0) {
				throw std::domain_error(" �� ��� ������. �������: ���������� ������ ������ 4");
			}
			else {
				sides_count = 4;
			}
		}
	}
	catch (std::domain_error d) {
		My_exception my_exception(d);
		/*my_exception.exception(err);*/
	}
}

void Quadrangle::get_sides_count() {
	std::cout << name << " (������� " << length_a << ", " << length_b << ", " << length_c << ", " << length_d << "; " 
		<< "���� " << angel_a << ", " << angel_b << ", " << angel_c << ", " << angel_d << ")";
}