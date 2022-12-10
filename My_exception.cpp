#include "My_exception.h"

My_exception::My_exception(domain_error d) : std::domain_error(d) { std::cerr << d.what() << std::endl; }

//void My_exception::exception(int n) {
//	switch (n)
//	{
//	case 0: std::cout << " не была создана. Причина: количество сторон больше 0" << std::endl; break;
//	case 1: std::cout << " не был создан. Причина: сумма углов не равна 180" << std::endl; break;
//	case 2: std::cout << " не был создан. Причина: количество сторон меньше 3" << std::endl; break;
//	case 3: std::cout << " не был создан. Причина: угол C не равен 90 градусам" << std::endl; break;
//	case 4: std::cout << " не был создан. Причина: сторона А не равна стороне C" << std::endl; break;
//	case 5: std::cout << " не был создан. Причина: угол A не равен углу С" << std::endl; break;
//	case 6: std::cout << " не был создан. Причина: стороны не равны" << std::endl; break;
//	case 7: std::cout << " не был создан. Причина: углы не равны 60 градусам" << std::endl; break;
//	case 8: std::cout << " не был создан. Причина: сумма углов не равна 360" << std::endl; break;
//	case 9: std::cout << " не был создан. Причина: количество сторон меньше 4" << std::endl; break;
//	case 10: std::cout << " не был создан. Причина: стороны попарно не равны" << std::endl; break;
//	case 11: std::cout << " не был создан. Причина: углы не равны 90 градусам" << std::endl; break;
//	case 12: std::cout << " не был создан. Причина: углы попарно не равны" << std::endl; break;
//	default: std::cout << "Причина не описана" << std::endl;
//		break;
//	}
//}
