#include "My_exception.h"

My_exception::My_exception(domain_error d) : std::domain_error(d) { std::cerr << d.what() << std::endl; }

//void My_exception::exception(int n) {
//	switch (n)
//	{
//	case 0: std::cout << " �� ���� �������. �������: ���������� ������ ������ 0" << std::endl; break;
//	case 1: std::cout << " �� ��� ������. �������: ����� ����� �� ����� 180" << std::endl; break;
//	case 2: std::cout << " �� ��� ������. �������: ���������� ������ ������ 3" << std::endl; break;
//	case 3: std::cout << " �� ��� ������. �������: ���� C �� ����� 90 ��������" << std::endl; break;
//	case 4: std::cout << " �� ��� ������. �������: ������� � �� ����� ������� C" << std::endl; break;
//	case 5: std::cout << " �� ��� ������. �������: ���� A �� ����� ���� �" << std::endl; break;
//	case 6: std::cout << " �� ��� ������. �������: ������� �� �����" << std::endl; break;
//	case 7: std::cout << " �� ��� ������. �������: ���� �� ����� 60 ��������" << std::endl; break;
//	case 8: std::cout << " �� ��� ������. �������: ����� ����� �� ����� 360" << std::endl; break;
//	case 9: std::cout << " �� ��� ������. �������: ���������� ������ ������ 4" << std::endl; break;
//	case 10: std::cout << " �� ��� ������. �������: ������� ������� �� �����" << std::endl; break;
//	case 11: std::cout << " �� ��� ������. �������: ���� �� ����� 90 ��������" << std::endl; break;
//	case 12: std::cout << " �� ��� ������. �������: ���� ������� �� �����" << std::endl; break;
//	default: std::cout << "������� �� �������" << std::endl;
//		break;
//	}
//}
